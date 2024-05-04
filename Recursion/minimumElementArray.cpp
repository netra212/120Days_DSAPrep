// finding the minium element from the array using the recursion. 
#include <iostream>
using namespace std;

int minimumElementArray(int arr[], int index, int sizeArr){

    if(index == (sizeArr - 1)){
        return arr[index];
    }

    return min(arr[index], minimumElementArray(arr, index+1, sizeArr));
}

int main(){


}