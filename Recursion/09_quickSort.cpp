#include <iostream>
using namespace std;

/*
 * Quicksort:
 *
 */

int partition(int arr[], int start, int end){
    int pos = start;
    for(int i = start; i <= end; i++){
        if(arr[i] <= arr[end]){
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(int arr[], int start, int end){
    // base case. 
    if(start>=end){
        return;
    }
    int pivotElement = partition(arr, start, end);
    quickSort(arr, start, pivotElement-1);
    quickSort(arr, pivotElement+1, end);
}

int main(){
    int arr[] = {0,10,6,4,2,1,5,7,2,3,12};
    quickSort(arr,0,11);
    for(int i = 0; i < 11;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}