#include <iostream>
#include <string>
using namespace std;

/*
 * Recursion in String:
 * 
 */

// Q1. Check Palindrome using the Recursion. 
bool checkPalindrome(string str, int start, int end){

    // base case. 
    if(start>=end) {
        return 1;
    }
    // check if start and end are equal. 
    if(str[start]!=str[end]){
        return 0;
    }

    return checkPalindrome(str, start+1, end-1);
}

// Q2. count the vowels words in the given strings. 
// ->  Count the number of the vowels words in the given strings. 
int countVowels(string str, int index){
    
    // base case. 
    if(index == -1){
        return 0;
    }

    if(str[index]=='a' ||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u'){
        return 1 + countVowels(str, index-1);
    }
    else{
        return 1 + countVowels(str, index-1);
    }
}


// Q3. Reverse a string. 
// -> Reverse a given string with Recursion. 
// -> Given input must be passed as reference while swapping.
// -> Pass by value does not works if we are swapping. 
void reverseString(string &str, int start, int end){

    // base case. 
    if(start>= end){
        return;
    }

    // swapping. 
    char c = str[start];
    str[start] = str[end];
    str[end] = c;

    reverseString(str, start+1, end-1);
}

// Q4. Convert Lowercase to Uppercase with recursion. 
void lowercaseToUppercase(string str, int index){
    
    // base case. 
    if(index==-1) {
        return;
    }
    str[index] = 'A' + str[index] - 'a';
    lowercaseToUppercase(str, index-1);
}

int main(){
    // check palindrome. 
    string str = "naman";


}




