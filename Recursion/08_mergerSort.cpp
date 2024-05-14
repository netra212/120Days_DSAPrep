#include <iostream>
#include <vector>
using namespace std;

/*
 * Mergesort. 
 * Also called Divide and Merge. 
 * Left-side -> (start, mid)
 * Right-side -> (mid, end)
 */

void mergeSort(int arr[], int start, int end){
    if(start == end){
        return;
    }
    int mid = start + (end-start)/2;
    // left side array.
    mergeSort(arr, start, mid);
    // right side array. 
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

void merge(int arr[], int start, int mid, int end){
    vector<int> temp(end-start+1);
    int left = start, right = mid + 1, index = 0;
    while(left <= mid && right <= end){
        if(arr[left]<=arr[right]){
            temp[index] =  arr[left];
            index++, left++;
        }
        else{
            temp[index] =  arr[right];
            index++, right++;
        }
    }
    //left array elements. 
    while(left<= mid){
        temp[index] = arr[left];
        left++, index++;
    }

    // right array elements. 
    while(right<=end){
        temp[index]=arr[right];
        right++, index++;
    }

    // Put these elements into an original arrays. 
    index = 0;
    while(start<=end){
        arr[start] = temp[index];
        start++, index++;
    }
}

int main(){
    int arr[] = {6,2,1,4,2,6,4,2};

}