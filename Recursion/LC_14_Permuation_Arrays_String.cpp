#include <iostream>
#include <vector>
using namespace std;

/*
 * Permutation for Arrays and String. 
 */ 

// Passing the visited and temp as reference. 
// Below arr is a pointer so we cannot calculate the size of the pointer. 
void permutationNumber(int arr[], vector<vector<int> >ans, vector<int>&temp, vector<bool>&visited){

    // base condition. 
    if(visited.size() == temp.size()){
        ans.push_back(temp);
        return;
    }

    // check either visited or not. 
    for(int i = 0; i < visited.size(); i++){
        // if statement executed if, if statement is correct. 
        // if condition statisfy if visited is like this [0,0,0] which means no element is present in the visited array. 
        if(visited[i]==0){
            visited[i]=1;
            temp.push_back(arr[i]);
            permutationNumber(arr, ans, temp, visited);
            visited[i]=0;
            temp.pop_back();
        }
    }
}

int main(){
    int arr[] = {1,2,3};
    vector<vector<int> > ans; 
    vector<int> temp;
    vector<bool> visited(3,0);// contains 3 elements and initially all zeros Like this visited = [0,0,0]
    permutationNumber(arr, ans, temp, visited);

    // printing the answer. 
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}