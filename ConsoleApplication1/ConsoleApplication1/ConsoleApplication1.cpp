#include <iostream>
#include <iomanip>
using namespace std;
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << '\n';
}
template <typename T>
void printArrayT(const T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << arr[i];
    }
    cout << '\n';
}
void fillArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = "; cin >> arr[i];
    }
   

}
template <typename T>
void fillArrayT(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "<T>: a[" << i << "] = "; cin >> arr[i];
    }

}
template <typename T>
bool isNonDecreasingT(const T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false; 
        }
    }
    return true; 
}
bool isNonDecreasing(const int arr[], int size) {
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
    const int sizeT = 5;
    int arr1[sizeT];
    fillArray(arr, size);
    printArray(arr, size);
    fillArrayT(arr1, sizeT);
    printArrayT(arr1, sizeT);
    if (isNonDecreasing(arr, size)) {
        cout << '\n';
        cout << "in Array: True" << endl;
    }
    else {
        cout << "in Array: False" << endl;
    }
    if (isNonDecreasingT(arr1, sizeT)) {
        cout << '\n';
        cout << "in Array <T>: True" << endl;
    }
    else {
        cout << "in Array <T>: False" << endl;
    }
    return 0;
}
