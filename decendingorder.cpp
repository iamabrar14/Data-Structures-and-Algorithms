#include <iostream>
using namespace std;
int main(){
    int n,i,j,temp;
    int arr[100];
    cout<<"How many numbers ? "<<endl;
    cin>>n;
    cout<<"Enter Numbers : ";
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        if(arr[j]>arr[i]){
            temp=arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    cout<<"Elements in ascending order : "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
