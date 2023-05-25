#include <iostream>
using namespace std;
int linearsearch(int arr[ ],int n,int target){ //user defined function for searching 
   for(int i=0;i<n;i++){
    if(arr[i]==target){
        return i;
    }
     }
     return -1;
}
int main(){
    int n,i,target,arr[50];
    cout<<"How many numbers ? "<<endl;
    cin>>n;
    cout<<"Enter Numbers : ";
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<"Which number to search ? "<<endl;
    cin>>target;
    int result=linearsearch(arr,n,target);
    if(result==-1){
        cout<<"Not found !"<<endl;
    }
    else{
    cout<<"Found at "<<result<<endl;
    }
    return 0;
}