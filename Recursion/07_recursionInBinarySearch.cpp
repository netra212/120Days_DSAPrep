#include <iostream>
using namespace std;

/*
 * #. Recursion In Binary search:
 */

// Q1. Linear search Using the Recursion. 
int linearSearch(int arr[], int index, int element, int arrSize){

    // base case. 
    if(index== arrSize){
        return 0;
    }
    if(arr[index]==element){
        return 1;
    }
    else{
        return linearSearch(arr, index+1, element,arrSize);
    }
}

// Q2. Binary search using the recursion. 
int binarySearch(int arr[], int element, int start, int end){

    // base case.
    if(start > end){
        return 0;
    }
    int mid = start+(end-start)/2;

    if(arr[mid]==element){
        return mid;
    }
    // Move Right side when then element need to be search is greater than mid element. 
    else if(arr[mid]<element){
        return binarySearch(arr, element, mid+1, end);
    }
    else{
        return binarySearch(arr, element, start, mid-1);
    }
}


int main(){

}





