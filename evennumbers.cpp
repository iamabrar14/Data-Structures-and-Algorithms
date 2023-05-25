#include <iostream>
using namespace std;
int main(){
    int n,i,arr[50];
    cout<<"How many numbers ? "<<endl;
    cin>>n;
    cout<<"Enter numbers : ";
    for(i=0;i<n;i++){
       cin>>arr[i];
    }
    cout<<"Even numbers are : ";
    for(i=0;i<n;i++){
        if(arr[i]%2==0)  //for odd,just change the syntax to !=0
        cout<<arr[i]<<" ";
    }
    return 0; 
}