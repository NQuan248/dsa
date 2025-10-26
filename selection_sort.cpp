#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i= 0 ; i< n-1 ; i++) {
        for(int j=i+1 ; j<n ; j++) {
            if(arr[j] < arr[i]) {
                swap(arr[i], arr[j]);
            }
        }
        for (int k=0 ; k<n ; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
 int main() {
    int arr[] = {3,10,1,23,103,34,17,53,64,71};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    return 0; 
 }