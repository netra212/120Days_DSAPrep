// Total ways to reach the nth stairs. 
// climbing stairs. 

#include <iostream>
using namespace std;

int climbStairs(int num){
    if(num<=1){
        return 1;
    }
    return climbStairs(num-1) + climbStairs(num-2);
}

int main(){


}