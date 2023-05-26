#include <iostream>
using namespace std;
int binaryS(int arr[],int n,int x){
    int left,right,mid;
    left=0;
    right=n-1;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
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
   int result=binaryS(arr,n,x);
   cout<<"Element "<<x<<" found at index : "<<result<<endl;
   return 0;
}

