#include <iostream>
using namespace std;
int top=-1;
int stack[5];
int element;
int push(int data){
    if(top==4)
    cout<<"Overflow"<<endl;
    else{
        top++;
        stack[top]=data;
        element=stack[top];
        cout<<element<<" "<<"Push"<<endl;
    }
}
int pop(){
    if(top==-1)
    cout<<"Underflow"<<endl;
    else{
        element=stack[top];
        top--;
        cout<<element<<" "<<"Pop"<<endl;
    }
}
int main(){
    push(5);
    push(9);
    push(10);
    push(2);
    pop();
    pop();
    pop();
    pop();
    pop();
}