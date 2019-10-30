#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    int x, current_min=-1;// base element
    char choice; // Push 'p', getMin 'm' Quit 'q'
    cin>>choice;
    do{
        if(choice=='p'){
            cin>>x;
            if(current_min==-1)
                current_min = x; //the very first element inserted
            if(x>=current_min)
                st.push(x);
            else{
                st.push(2*x-current_min); // insert a value less than x;
                current_min = x;
            }
            
        }else if(choice=='m'){
            cout<<"Minimum: "<<current_min<<endl;
        }
        else{
            if(!st.empty()){
                x = st.top();
                if(x<current_min){
                    current_min = 2*current_min - x; // again get back the original value
                    x = current_min; // just to show
                }
                st.pop(); 
            }else{
                cout<<"Empty stack\n";
            }
        }
        cin>>choice;
    }while(choice!='q');

	return 0;
}

/*
Minimum in a stack in O(1) time and space at any time.
1. Insertion(x)
    if x >= current_min:
        push x
    else:
        insert 2*x - current_min
        current_min = x
2. Poping(y)
    if y>=current_min:
        pop
    else:
        current_min = 2*current_min - y
        pop()

E.g.
Insert 3,5
getmin
Insert 2,1
getmin
Pop 1
getmin
Pop 2
get min

Ans:
3,1,2,3

Note: We can directly take a variable to check for min before inserting and
as it can cause problem while poping.(here at pop 2)
*/