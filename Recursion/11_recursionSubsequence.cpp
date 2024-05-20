#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
 * 11. Recursion on subsequences. 
 * 
 */

// Q1. printing the sub-sequence of the integer arrays. 
void printSubsequence(int arr[], int index, int size, vector<vector<int> >&ans, vector<int>temp){
    // base condition. 
    if(index==size){
        ans.push_back(temp);
        return;
    }
    // Not included: Not Taking an Index element. 
    printSubsequence(arr, index+1, size, ans, temp);

    // Yes, included: Taking an Index element. 
    temp.push_back(arr[index]);
    printSubsequence(arr, index+1, size, ans, temp);
}

// Q2. printing the sub-sequence of the string arrays. 
void strSubsequences(string &strarr, int index, int size, vector<string>&strans,string &strtemp){
    if(index==size){
        strans.push_back(strtemp);
        return;
    }
    // left side not taken. 
    strSubsequences(strarr, index+1, size, strans, strtemp);
    // right side taken. 
    strtemp.push_back(strarr[index]);
    strSubsequences(strarr, index+1, size, strans, strtemp);
    strtemp.pop_back();
}

// Q3. Generate the parenthesis. 
void generateParenthesis(int size, int left, int right, vector<string>&parenthesisAns, string &tempParenthesis){
    // base condition. 
    left = right = size;
    if(left+right == 2*size){
        parenthesisAns.push_back(tempParenthesis);
        return;
    }
    // Add left parenthesis. 
    // If the left parenthesis is less than size of the given input then add the left parenthesis to the tempParenthesis string. 
    if(left < size){
        tempParenthesis.push_back('(');
        generateParenthesis(size, left+1, right, parenthesisAns, tempParenthesis);
        tempParenthesis.pop_back();
    }
    // Add right parenthesis. 
    // Add the right parenthesis until the right is less than left. 
    if(right < left){
        tempParenthesis.push_back(')');
        generateParenthesis(size, left, right+1, parenthesisAns, tempParenthesis);
        tempParenthesis.pop_back();

    } 
}


int main(){

    // Integer subsequences. 
    int arr[] = {1,2,3};
    vector<vector<int> >ans;
    vector<int>temp;
    printSubsequence(arr, 0, 3, ans, temp);
    cout << "Given Integer subsequences: " << endl;
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // string subsequences. 
    string strarr = "abc";
    vector<string> strans; // store the final answer. 
    string strtemp;
    cout << "Given string subsequences: " << endl;
    strSubsequences(strarr, 0, strarr.size(), strans, strtemp);
    for(int i = 0; i < strans.size();i++){
        cout << strarr[i] << endl;
    }

    // Generate Parenthesis.
    vector<string> parenthesisAns;
    string tempParenthesis;
    int size = 3;
    generateParenthesis(size,0, 0, parenthesisAns, tempParenthesis);

}



