// Add all the arrays elements. 
#include <iostream>
using namespace std;

int sumArraysElements(int arr[], int index, int sizeArr){
    
    // base case.
    if(index == sizeArr){
        return;
    }
    return arr[index] + sumArraysElements(arr, index+1, sizeArr);
}

int main(){
    int arr[] = {3,4,5,8,2};


} 
