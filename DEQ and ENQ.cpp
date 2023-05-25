#include <bits/stdc++.h>
using namespace std;
int Aqueue[5];
int front=-1;
int rear=-1;
int element;
int EnQ(int data){
   if(rear==4)
    cout<<"Overflow"<<endl;
   else{
    rear++;
    Aqueue[rear]=data;
    element=Aqueue[rear];
    cout<<element<<" "<<"Pushed"<<endl;
   }
}
int DeQ(){
   front ++;
   if(front>rear)
    cout<<"Underflow"<<endl;
   else{
    element=Aqueue[front];
    cout<<element<<" "<<"Popped"<<endl;
   }
}
int main(){
EnQ(6);
EnQ(14);
EnQ(5);
EnQ(69);
DeQ();
DeQ();
DeQ();
DeQ();
return 0;


}
