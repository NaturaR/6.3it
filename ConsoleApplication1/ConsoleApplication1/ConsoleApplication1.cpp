#include <iostream>
#include <iomanip>
using namespace std;
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
}
void fillArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = "; cin >> arr[i];
    }
    
}
bool isNonDecreasing(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    const int size = 5;
    int arr[size];
    fillArray(arr, size);
    printArray(arr, size);
    if (isNonDecreasing(arr, size)) {
        cout << '\n';
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}
