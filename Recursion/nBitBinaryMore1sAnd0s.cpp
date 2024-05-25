#include <iostream>
#include <vector>
using namespace std;

/*
 * Find all N Bit-Binary Numbers Having more than equal to 1 than 0 for any prefix. 
 *
 */

void findNBitBinary(int num, vector<string>&ans, string &temp, int zero, int one){

    // base case. 
    if(temp.size() == num){
        ans.push_back(temp);
        return;
    }

    temp.push_back('1');
    findNBitBinary(num, ans, temp, zero, one+1);
    temp.pop_back();

    if(zero <= one){
        temp.push_back('0');
        findNBitBinary(num, ans, temp, zero+1, one);
        temp.pop_back();
    }
    
}

int main(){
   

}