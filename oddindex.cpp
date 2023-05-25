#include <iostream>
using namespace std;
int main(){
     int n,i;
     int arr[50];
     cout<<"How many numbers ? "<<endl;
     cin>>n;
     cout<<"Enter Numbers : ";
     for(i=0;i<n;i++){
        cin>>arr[i];
     }
     cout<<"Odd index numbers are : "<<endl;
     for(i=0;i<n;i+=2){
        cout<<arr[i]<<" "<<endl;
     }
     return 0;
}