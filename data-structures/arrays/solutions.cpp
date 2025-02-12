#include <iostream>
using namespace std;

// Basic Operations
void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Calculate sum of array
int arraySum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Count even numbers
int countEven(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

// Find maximum element
int findMax(int arr[], int size) {
    int max = arr[0];  // Initialize with first element
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Print elements at even indices
void printEvenIndices(int arr[], int size) {
    cout << "Elements at even indices: ";
    for(int i = 0; i < size; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Print array in reverse
void printReverse(int arr[], int size) {
    cout << "Array in reverse: ";
    for(int i = size-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Count positive numbers
int countPositive(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) {
            count++;
        }
    }
    return count;
}

// Check if number exists
bool findNumber(int arr[], int size, int number) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == number) {
            return true;
        }
    }
    return false;
}

// Print elements greater than x
void printGreaterThan(int arr[], int size, int x) {
    cout << "Elements greater than " << x << ": ";
    for(int i = 0; i < size; i++) {
        if(arr[i] > x) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// Calculate average
float calculateAverage(int arr[], int size) {
    int sum = arraySum(arr, size);
    return (float)sum / size;
}

int main() {
    int arr[] = {1, -2, 3, 4, -5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // Test all functions
    cout << "Original ";
    printArray(arr, size);
    
    cout << "Sum of elements: " << arraySum(arr, size) << endl;
    cout << "Number of even elements: " << countEven(arr, size) << endl;
    cout << "Maximum element: " << findMax(arr, size) << endl;
    
    printEvenIndices(arr, size);
    printReverse(arr, size);
    
    cout << "Number of positive elements: " << countPositive(arr, size) << endl;
    
    int searchNum = 3;
    cout << searchNum << " exists in array: " << (findNumber(arr, size, searchNum) ? "Yes" : "No") << endl;
    
    printGreaterThan(arr, size, 4);
    cout << "Average of elements: " << calculateAverage(arr, size) << endl;
    
    return 0;
}
