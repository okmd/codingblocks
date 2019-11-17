#include<bits/stdc++.h>
using namespace std;

class Car{
    private:
        int x, y, id;
    public:
        Car(int id, int x, int y){
            this->id = id;
            this->x = x;
            this->y = y;
        }
        int dist(){
            return x*x + y*y; // euclidean distance without root.
        }
        void print(){
            cout<<"Car Id: "<<this->id<<" at ("<<this->x<<", "<<this->y<<")\n";
        }
};

class CarCompare{
    private:
    public:
    // method to comapre car object for min/max heap depending upon the distance from origin.
    bool operator()(Car a, Car b){ // functor i.e its object act as function.
        return a.dist() < b.dist();
        // > for min
        // < for max heap
    }
    // functor is an object which act as function.
};

int main(){
    priority_queue<Car, vector<Car>, CarCompare> pq;
    // x and y cords of each car.
    int x_cord[] = {5,6,17,18,9,11,0,3};
    int y_cord[] = {1,-2,8,9,10,91,1,2};
    int n = sizeof(x_cord)/sizeof(int);
    int k = 4;
    for(int i=0; i<n; i++){
        Car c(i, x_cord[i], y_cord[i]);
        pq.push(c);
    }
    cout<<"Cars in order of their distances from orgin.\n";
    while(!pq.empty() and k--){
        Car c = pq.top();// get top element of heap and print
        c.print(); 
        pq.pop(); // remove the top element
    }

    return 0;
}