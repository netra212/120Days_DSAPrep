// print an array using the recursion. 
#include <iostream>
using namespace std;

void printArrays(int arr[], int index, int sizeArr){
    // base case. 
    if(index == sizeArr){
        return;
    }
    cout << arr[index] << endl;
    printArrays(arr, index+1, sizeArr);

}

// print the elements of the array from the reverse directions by passing the index of an array element at the last of the array. 
void printArraysReverse(int arr[], int idx){
    if(idx == -1){
        return;
    }
    cout << arr[idx] << " " << endl;
    printArraysReverse(arr, idx-1);
}


int main(){

    int arr[] = {3,2,6,7,8,9};

}