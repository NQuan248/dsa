#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        cout << i << ": ";
        print(arr, n);
    }
}
void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
        cout << i + 1 << ": ";
        print(arr, n);
    }
}
void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
        cout << i + 1 << ": ";
        print(arr, n);
    }
}
int main() {
    int arr[] = {3,10,1,23,103,34,17,53,64,71};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    cout << endl;    
    selectionsort(arr, n);
    cout << endl;
    bubblesort(arr, n);
    return 0;
}
