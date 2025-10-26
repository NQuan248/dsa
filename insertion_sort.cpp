#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
    for(int i=0 ;i< n-1 ; i++) {
        int key = i + 1;
        for(int j=i ; j >=0; j--) {
            if(arr[key] < arr[j]) {
                swap(arr[j], arr[key]);
                key = j;
            }
        }
        for(int k=0 ; k<n ; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {3,10,1,23,103,34,17,53,64,71};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr, n);
    return 0; 
}