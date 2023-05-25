#include <iostream>

using namespace std;


int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[50],n,x;
    cout<<"How many numbers ? "<<endl;
    cin>>n;
    cout<<"Enter numbers : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
      cout<<"Enter number to search : "<<endl;
      cin>>x;
    int result = linearSearch(arr, n, x);
    if (result == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}