#include <iostream>
#include <vector>
using namespace std;

/*
 *
 * Predict the winner if n = 5 people, and k = 3 or 3rd people to kill. 
 * 
 */
int josephusPredictWinner(vector<bool> &persons, int n, int index, int personLeft, int k){
    // base case.
    if(personLeft == 0){ // means person is still alive. 
        for(int i = 0; i < n; i++){
            if(persons[i]==0){
                return i;
            }
        }
    }

    int kill = (k-1)%personLeft;
    while(kill--){
        index = (index + 1) % n;
        while(persons[index]==1){
            index = (index+1)%n;
        }
    }

    persons[index]==1;
    while(persons[index]==1){
        index = (index + 1)%n;
    }

    josephusPredictWinner(persons,n, index, personLeft-1, k);
}


int main(){


}