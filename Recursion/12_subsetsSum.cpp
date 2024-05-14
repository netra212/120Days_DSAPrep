#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
 * subset of sum.
 */

void subsetSum(int arr[], int index, int size, int sum, vector<int>&ansSubsetSum){

    // base case. 
    if(index==size){
        ansSubsetSum.push_back(sum);
        return;
    }
    // no: Not include the number. 
    // Do not add anything to the sum since we are not including the any number here...
    subsetSum(arr, index+1, size, sum, ansSubsetSum);

    // yes: Include the number. 
    // Add included number to the sum since we are including the particular number here ... so 
    subsetSum(arr, index+1, size, sum+arr[index],ansSubsetSum);
}

/*
 * Target Subsets Sum. 
 * 
 */

bool findTargetSubsetSum(int arrTarget[], int index, int size, int target){

    // base case. 
    if(target == 0){
        return 1; // we got the answer. 
    }
    
    if(index == size || target < 0){
        return 0;
    }

    // left side. 
    return findTargetSubsetSum(arrTarget, index+1, size, target) || findTargetSubsetSum(arrTarget, index+1, size, target-arrTarget[index]);
}

/*
 * Perfect sum problem:
 * target = 10.
 * *find the number of the subsets whose sum is equal to 10. 
 * arr= [5,2,3,6,10,8]
 * Catche here: Number might be start from zero. 
 * The value of sum might be 10^anything. 
 */

void perfectSum(int arr[], int index, int size){

}

int main(){

    // sum of all the subsets. 
    int arr[] = {1,2,3,4};
    vector<int> ansSubsetSum;
    int index = 0;
    int size = 4; // number of elements. 
    int sum = 0;
    cout << endl;
    cout << "\nsum of all the subsets sequentially : ";
    subsetSum(arr, index, size,sum,ansSubsetSum);
    for(int i = 0; i < ansSubsetSum.size(); i++){
        cout << ansSubsetSum[i] << " ";
    }
    cout << endl;
    cout << endl;

    // subset of sum equals to target. 
    cout << "\nsum of subsets element makes up to target: ";
    int arrTarget[] = {2,4,1,8,7};
    int target = 19;
    cout << findTargetSubsetSum(arrTarget, 0, 5, target) << " ";

    // perfect sum of problems. 
}



