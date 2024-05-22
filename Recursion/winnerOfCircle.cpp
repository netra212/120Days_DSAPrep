#include <iostream>
using namespace std;

int winnerOfCircle(int n, int k){
    // check the base condition. 
    if (n==1){
        return 0;
    }
    
    return (winnerOfCircle(n-1,k)+k)%n;
}


int main(){

}