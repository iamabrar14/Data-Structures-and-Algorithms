#include <iostream>
using namespace std;
int main(){
    int n,i;
    int arr[30];
    cout<<"How many numbers ?"<<endl;
    cin>>n;
    cout<<"Enter Numbers : "<<endl;
    for(i=0;i<n;i++){
         cin>>arr[i];
    }
    cout<<" Numbers are : "<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Reverse numbers are : "<<endl;
    for(i=n-1;i>=0;i--){
     cout<<arr[i]<<" ";
    }
   return 0;

}