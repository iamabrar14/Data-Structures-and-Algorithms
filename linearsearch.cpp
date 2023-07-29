#include <iostream>
using namespace std;
int search(int arr[],int n,int x){
  for(int i=0;i<n;i++){
       if(arr[i]==x){
        return i;
       }

    }
    return -1;

}

int main(){
      int arr[50],n,i,x,res;
      cout<<"How many numbers do you want to add ? ";
      cin>>n;
      cout<<"Enter Numbers : ";
      for(i=0;i<n;i++){
        cin>>arr[i];
      }
      cout<<"Which number do you want to search ? :";
      cin>>x;
      res=search(arr,n,x);
      cout<<"Found at index : "<<res<<endl;
      return 0;
}
