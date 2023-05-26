#include <iostream>
using namespace std;
int linearS(int arr[],int n,int x){
       for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
          }
        return -1;
}
int main(){
   int arr[50],i,n,x;
   cout<<"How many numbers : ";
   cin>>n;
   cout<<"Enter Elements : ";
   for(i=0;i<n;i++){
    cin>>arr[i];
   }
   cout<<"Which number to search ? : ";
   cin>>x;
   int result=linearS(arr,n,x);
   cout<<"Element "<<x<<" found at index : "<<result<<endl;
   return 0;
}
