#include <iostream>
#include <vector>
using namespace std;

// Mastering the arrays with these problems...

/*
 * search an element in an array.
 */
int searchElement(int arr[], int num){
    int index = -1;
    for(int i = 0; i < 5; i++){
        if(arr[i] == num){
            index = arr[i];
            return index;
            break;
        }
        cout << index;
    }
    return -1;
}

/*
 * Reversing an arrays. 
 */
void reverseArray(int arr[], int num){
    int start = arr[0];
    int end = arr[num-1];
    
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end++;
    }
}


/*
 * find the second maximum number from the given array.
 */

int secondMaximum(int arr[], int num){
    // storing the largest element. 
    int largestElement = INT_MIN;
    for(int i = 0; i < num; i++){
        if(arr[i] > largestElement){
            largestElement = arr[i];
        }
    }
    // storing the second largest element. 
    int secondLargest = -1;
    for(int i = 0; i < num; i++){
        if(arr[i] != largestElement){
            secondLargest = max(secondLargest, arr[i]);
        }
    }
    return secondLargest;
}


/*
 * Find the missing number. 
 */
int findMissingNum(int arr[], int num){
    // sum of all the element present in the array:
    int sumElement = 0;
    for(int i = 0; i < num; i++){
        sumElement  += arr[i];
    }

    // sum of num. 
    int sumN = num * (num + 1) / 2;

    // missing number. 
    int missingNumber = sumN - sumElement;

    return missingNumber;
}

/*
 * Fibonacii series.
 */
int fibonacciiSeries(int arr[], int num){
    int userNum;
    cout << "Enter a number : " << endl;
    cin >> userNum;

    int arr[1000];
    // int first = 0;
    // int second = 0;

    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2; i < num-1; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[num-1]  << " "  << endl;
}

/* 
 * Rotate an array by 1. 
 */
int rotateArrayBy1(int arr[], int num){
    int temp = arr[num-1];
    for(int i = num-2; i >= 0; num--){
        arr[i+1] = arr[i];
    }
    arr[0] = arr[temp];
}


int main(){

}