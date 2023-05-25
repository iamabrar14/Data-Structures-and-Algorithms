#include <iostream>
using namespace std;
int main(){
    int n,i;
    int arr[30];
    int sum=0;
    cout<<"How many numbers ?"<<endl;
    cin>>n;
    cout<<"Enter Numbers : "<<endl;
    for(i=0;i<n;i++){
         cin>>arr[i];
    }
    cout<<"Numbers are : ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Summation of numbers are : "<<sum<<endl;
    return 0;
}