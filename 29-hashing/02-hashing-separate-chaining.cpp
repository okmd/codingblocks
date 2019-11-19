#include<bits/stdc++.h>
using namespace std;

// for linked list
template<typename T>
class Node{
    public:
        string key;
        T value;
        Node<T> * next;
        Node(string key, T value){
            this->key = key;
            this->value = value;
        }
};

template<typename T>
class HashTable{
        int cs; // current size
        int ts; // max array size or table size
        Node<T> **buckets;
        int hashFun(string key){
            // using the formula given in 01
            int L = key.length();
            int ans = 0;
            int p = 1; // 37^0 is 1
            for(int i=0; i<L; i++){
                ans += key[L-i-1]*p;
                p *= 37;// 37^1, 37^2 ....
                p %= ts; // to remove overflow
                ans %= ts;
            }
            return ans;
        }
    public:
        HashTable(int ds=7){// min. table size 7 if not given
            cs = 0;
            ts = ds;
            buckets = new Node<T> *[ts]; // array of table size
            // make all address NULL
            for(int i=0; i<ts; i++)
                buckets[i] = NULL;
        }
        void insert(string key, T value){
            // chaining - insertion at head of linked list.
            int index = hashFun(key);
            Node<T> *n = new Node<T>(key, value);
            n->next = buckets[index];
            buckets[index] = n;
        }
        void print(){
            // bucket
            for(int i=0; i<ts; i++){
                Node<T> *temp = buckets[i];
                cout<<"Bucket "<<i<<"->";
                while(temp){
                    cout<<"("<<temp->key<<", "<<temp->value<<")->";
                    temp = temp->next;
                }
                cout<<"END"<<endl;
            }
        }

        T* search(string key){
            int index = hashFun(key);
            Node<T> *temp = buckets[index];
            while(temp){
                if(temp->key==key)
                    return &(temp->value);// address of box(int, car, book etc. any data type)
                temp = temp->next;
            }
            return NULL; // not found
        }
        void erase(string key){
            int index = hashFun(key);
            Node<T> *temp = buckets[index];
            Node<T> *prev=NULL, *del;
            // first element
            if(temp and temp->key == key){
                buckets[index] = temp->next;
                delete temp;
                return;
            }
            while(temp and temp->next){
                if(temp->next->key == key){
                    del = temp->next;
                    temp->next = temp->next->next;
                    delete del;
                }
                prev = temp;
                temp = temp->next;
            }
            // last node and match found
            if(temp and temp->key == key){
                buckets[index] = prev;
                delete temp;
            }

        }
};

int main(){
    HashTable <int>t(11);
    // fruit->price
    // insert
    t.insert("Mango", 100);
    t.insert("Apple", 120);
    t.insert("Guava", 140);
    t.insert("Banana", 130);
    t.insert("Chiku", 150);
    t.print();
    // search
    int *price = t.search("Chikdu");
    if(price)
        cout<<"Price is "<<*price<<endl;
    else
        cout<<"Not found!\n";
    // delete
    t.erase("Guava");
    t.print();

    return 0;
}