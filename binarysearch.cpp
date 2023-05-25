#include <stdio.h>
#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
     int arr[50],n,target;
    cout<<"How many numbers ? "<<endl;
    cin>>n;
    cout<<"Enter numbers : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter number for searvh : "<<endl;
    cin>>target;
    int result = binary_search(arr, n, target);
    if (result == -1) {
        printf("not found\n");
    } else {
        printf("found at index %d\n", result);
    }
    return 0;
}
