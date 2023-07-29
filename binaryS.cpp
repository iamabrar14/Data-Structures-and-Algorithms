#include<iostream>
using namespace std;
int BinaryS(int arr[],int n,int x){
    int left=0;
    int right=n-1;
    int mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]<left){
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
   int result=BinaryS(arr,n,x);
   cout<<"Element "<<x<<" found at index : "<<result<<endl;
   return 0;
}
