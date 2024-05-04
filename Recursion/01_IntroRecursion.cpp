/*
    Recursion in C++. 
*/
#include <iostream>
using namespace std;

// Q1. Factorial of a number. 
int factorialNumber(int n){
    //Base case. 
    if (n < 0){
        cout << "Factorial of a negative number is not possible." << endl;
    }
    if(n==0){
        return 1;
    }
    return n*factorialNumber(n-1);
}

// Q2. Sum of N Natural Numbers.
int sumNNaturalNumber(int n){
    // Handling the base case. 
    if(n==1){
        return 1;
    }
    return n+sumNNaturalNumber(n-1);
}

// Q3. Power of 2. 
int calculatePowerTwo(int numTwo, int n){

    /*
        calculatePowerTwo(2,5) = 2 * calculatePowerTwo(2,4);
        calculatePowerTwo(2,4) = 2 * calculatePowerTwo(2,3);
        calculatePowerTwo(2,3) = 2 * calculatePowerTwo(2,2);
        calculatePowerTwo(2,2) = 2 * calculatePowerTwo(2,1);
        calculatePowerTwo(2,1) = 2
    */
    // Base case. 
    if (n==0){
        return 0;
    }
    if (n==1){
        return numTwo;
    }
    return numTwo * calculatePowerTwo(numTwo, n-1);
}

// Q4. Sum of Square.
int sumOfSquare(int n){

    // Base case
    if(n==1){
        return 1;
    }
    return n*n + sumOfSquare(n-1);
}


// Q5. Print name 5 times. 
int printNames(int i, int n){
    // base case. 
    if(i>n){
        return;
    }
    cout << "Netra Bahadur Khatri" << endl;
    printNames(i+1, n);
}

// Q6. Print linearly from 1 to N. 
int printLinearly1toN(int i, int n){
    // base case. 
    if(i>n){
        return;
    }
    cout << i << endl;
    printLinearly1toN(i+1,n);
}

// Q7. Print from N to 1. 
int printNto1(int i, int n){
    if (i < n){
        return;
    }
    cout << i << endl;
    printNto1(i-1,n);
}

// Q8. Print Linearly from 1 to N (But by Backtrack)
int printLinearly1toNBacktrack(int n){

}

// Q9. Print from N to 1. 
int printNto1Backtrack(int n){

}

int main(){
    int n;
    cout << "\nEnter a number: ";
    cin >> n;
    cout << "Factorial of a number is : " << factorialNumber(n) << endl;;
    cout << "Sum of first N Natural Number is : " << sumNNaturalNumber(n) << endl;
    int numTwo = 2;
    cout << "Power of 2 : " << calculatePowerTwo(numTwo, n) << endl;
    cout << "Sum of Square : " << sumOfSquare(n) << "\n" << endl;
    cout << "Print Names 'n' times : " << printNames(1,n) << endl;
    cout << "Print Linearly from 1 to 'n' times : " << printLinearly1toN(1,n) << endl;
}
