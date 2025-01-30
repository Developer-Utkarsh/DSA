#include <iostream>
using namespace std;

// TODO: Implement these basic array operations

// 1. Print all elements of the array
void printArray(int arr[], int size) {
    // Write code to print all elements
}

// 2. Calculate sum of all elements
int arraySum(int arr[], int size) {
    // Return sum of all elements
    return 0;
}

// 3. Count number of even elements
int countEven(int arr[], int size) {
    // Return count of even numbers
    return 0;
}

// 4. Find maximum element
int findMax(int arr[], int size) {
    // Return largest element
    return 0;
}

// 5. Print elements at even indices (0, 2, 4, ...)
void printEvenIndices(int arr[], int size) {
    // Print elements at indices 0, 2, 4, ...
}

// 6. Print array in reverse order
void printReverse(int arr[], int size) {
    // Print array from last to first element
}

// 7. Count positive numbers
int countPositive(int arr[], int size) {
    // Return count of numbers > 0
    return 0;
}

// 8. Check if number exists in array
bool findNumber(int arr[], int size, int number) {
    // Return true if number exists, false otherwise
    return false;
}

// 9. Print elements greater than x
void printGreaterThan(int arr[], int size, int x) {
    // Print all elements greater than x
}

// 10. Calculate average of all elements
float calculateAverage(int arr[], int size) {
    // Return average (mean) of all elements
    return 0.0;
}

int main() {
    // Test array
    int arr[] = {1, -2, 3, 4, -5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // Test your functions here
    cout << "Testing printArray:" << endl;
    printArray(arr, size);
    
    cout << "\nTesting arraySum:" << endl;
    cout << "Sum = " << arraySum(arr, size) << endl;
    
    // Add more test cases for other functions
    
    return 0;
}
