
#include <iostream>
using namespace std;
int top=-1;
int element;
int stack[5];
int push(int data){
    if(top==4)
        cout<<"Overflow"<<endl;
        else{
                top++;
            stack[top]=data;
            element=stack[top];
            cout<<element<<" "<<"Pop"<<endl;
        }
}
int pop(){
    if(top==-1)
        cout<<"Underflow"<<endl;
        else{
                //top--;
            element=stack[top];
            top--;
            cout<<element<<" "<<"Pop"<<endl;
        }
}
int main(){
    push(5);
    push(7);
    push(8);
    pop();
    pop();
    pop();
    pop();
    return 0;

}

