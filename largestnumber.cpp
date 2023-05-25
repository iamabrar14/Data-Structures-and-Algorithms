#include <iostream>
using namespace std;
int main(){
    int n,i,arr[50];
    int max=0;
    cout<<"How many numbers ? "<<endl;
    cin>>n;
    cout<<"Enter numbers : ";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Numbers are : "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
     }
     cout<<"The largest Number : "<<max<<endl;
     return 0;
}