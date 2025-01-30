#include <iostream>
#include <climits>
using namespace std;

void changeArr(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i] = 2* arr[i];
    }
}

int linearSearch(int arr[], int target,int items){
    for(int i=0;i<items;i++){
            if(arr[i] == target){
                return i;
            }
        }
        return -1;
}


void ReversedArray(int arr[], int items){
    // Following Two Pointers Approach

    int pointer1=0;
    int pointer2=items-1;

    while(pointer2 > pointer1){
        swap(arr[pointer1], arr[pointer2]);
        pointer1++;
        pointer2--;
    }    


}


// Ques: Write a function to calculate sum and products of all numbers in an array.

    int ArraySandP(int arr[], int items){
        int sum=0;
        int product=1;

        for(int i=0; i<items;i++){
            sum= sum + arr[i];
            product= product * arr[i];
        }

        cout << "Sum: " << sum << endl;
        cout << "Product: " << product << endl;
        return sum,product;

    }

// Ques: Write a program to swap max & min  number of an array

    void swapMin2Max(int arr[], int items){
        int smallest = INT_MAX;
        int largest = INT_MIN;
        int smallestIndx;
        int largestIndx; 

        for(int i = 0; i < items; i++){
            if(arr[i]> largest){
                largest = arr[i];
                largestIndx = i;
            }if(arr[i] < smallest){
                smallest = arr[i];
                smallestIndx = i;
            }

        }


        swap(arr[smallestIndx], arr[largestIndx]);

    }

// Ques: WAF to print all the unique values in an array.


    void uniqueValues(int arr[],int items){

        for(int i=0; i<items; i++){
            bool isUnique=true;
            for(int j=0; j<items; j++){
                if(i != j){
                    if(arr[i] == arr[j]){
                        isUnique = false;
                        break;
                    }

                }
            }

            if(isUnique == true){
                cout << arr[i] << endl;
            }

        }        

    }


// Ques: WAF to print intersection of two arrays


    void intersection(int arr1[], int arr2[],int items1,int items2){

        for(int i = 0; i < items1; i++){
            for(int j=0; j < items2; j++){
                if(arr1[i] == arr2[j]){
                    cout << arr1[i] << endl;
                }
            }
        }        


    }


int main(){
    int size = 5;
    int marks[size] = {99,74,23,43,89};

    double price[] = {1,2,3,4,5,6,7,8,9}; // without defininng no. of itemes


    // cout << marks[0] << endl;
    // cout << marks[2] << endl;
    // cout << marks[4] << endl;
    
    int sz = sizeof(marks); // size of marka array 4 * 5[No. of Elemnts] = 20 Bytes

    // Loops in array


        // string names[size];

        // for (int i = 0; i<size; i++){
        //     cin >> names[i];
        // }

        // for(int i=0; i<size; i++){
        //     cout << names[i] << endl;
        // }


    // Ques: Find the smallest/largest in Array 


        // int smallest = INT_MAX;
        // int largest = INT_MIN;


        // int nums[] = {1,2,0,34,2,45,3};
        // int items = sizeof(nums) / sizeof(nums[0]);

        // for(int i = 0; i < items; i++){
        //         largest =max(nums[i],largest);
        //         smallest = min(smallest,nums[i]);

        // }

        // cout << "Largest No." << largest << endl;
        // cout << "Smallest No." << smallest << endl;

    // Ques: Find the index of smallest/largest in Array

        // int smallest = INT_MAX;
        // int largest = INT_MIN;
        // int smallestIndx;
        // int largestIndx; 

        // int nums[] = {1,2,0,34,2,45,3};
        // int items = sizeof(nums) / sizeof(nums[0]);

        // for(int i = 0; i < items; i++){
        //     if(nums[i]> largest){
        //         largest = nums[i];
        //         largestIndx = i;
        //     }if(nums[i] < smallest){
        //         smallest = nums[i];
        //         smallestIndx = i;
        //     }

        // }

        // cout << "Largest No. Index " << largestIndx << endl;
        // cout << "Smallest No. Index " << smallestIndx << endl;

    // Pass by reference

        // int arr[] = {1,2,3};

        // changeArr(arr,3);

        // cout << arr; // Array Changed by function By Taking Reference of array Address to function to change it globally


    int array[]= {2,3,2,5,6,7,3,2,6,5};
    int items = sizeof(array) / sizeof(array[0]);

    // Linear Search
    // Algorithm to search for target element in array.
        // int targetIndx;
        // int target = 3;
        
        // targetIndx=linearSearch(array,target,items);
        // cout << "Target Index: " << targetIndx << endl;


    // Reverse Array

    // ReversedArray(array,items);        
        // for(int i=0; i<items;i++){
        //     cout << array[i] << endl;
        // }


    // Sum and Product of an Array

        // ArraySandP(array,items);


    // Swap Min and Max number in an array

    //     swapMin2Max(array,items);


    //   for(int i=0; i<items;i++){
    //         cout << array[i] << endl;
    //     }

    // Unique Values in an Array

        // uniqueValues(array,items);

    // Intersection of two arrays

        // int arr1[] = {1,2,3,4,5};
        // int arr2[] = {3,4,5,6,7};
        // int items1 = sizeof(arr1) / sizeof(arr1[0]);
        // int items2 = sizeof(arr2) / sizeof(arr2[0]);


        // intersection(arr1,arr2,items1,items2);

    return 0;
}