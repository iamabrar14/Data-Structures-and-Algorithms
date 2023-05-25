#include <stdio.h>
int binarySearch(int arr[],int n,int target){
    int low=0;
    int high =n-1;
}
int main(){
   int arr[50],n,target;
   printf("How many numbers ? ");
   scanf("%d",&n);
   printf("Enter numbers : ");
   for(int i=0;i<n;i++){
    scanf("%d",arr[i]);
   }
   printf("Numbers are : ");
   for(int i=0;i<n;i++){
    printf("%d",arr[i]);
   }
   return 0;

}