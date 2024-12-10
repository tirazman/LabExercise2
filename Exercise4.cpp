//Exercise 4 : Array Manipulation - Rotating an Array

#include <iostream>
using namespace std;

// Function Prototype
void rotateARR(int arr[], int size);

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    // Input 5 integers into the array
    cout << "Enter 5 elements for the array:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    // Display the original array
    cout << "\nOriginal array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call Function to Rotate the array
    rotateARR(arr, SIZE);

    // Display the rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Function to rotate the array to the right by one position
void rotateARR(int arr[], int size) {
    // Store the last element
    int lastElement = arr[size - 1]; 
    for (int i = size - 1; i > 0; i--) {
        // Shift elements to the right
        arr[i] = arr[i - 1]; 
    }
    // Place the last element at the first position
    arr[0] = lastElement; 
}
