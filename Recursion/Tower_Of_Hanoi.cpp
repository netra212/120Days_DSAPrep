#include <iostream>
using namespace std;

// Tower of Hanoi.
void towerOfHanoi( int nDisks, int source, int helper, int destination){
    // base condition
    if(nDisks == 1){
        cout << "Move Disk " << nDisks << " from " << source << " to " << destination;
        return;
    }

    towerOfHanoi(nDisks-1, source,destination,helper);
    cout << "Move Disk " << nDisks << " from " << source << " to " << destination;
    towerOfHanoi(nDisks-1, helper,source, destination);

}

int main(){

}




