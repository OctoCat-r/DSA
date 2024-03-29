// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.
// Example 1:
// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool isPalindrome(string s){
    int start = 0;
    int end = s.size()-1;
    while(start<=end){
        if(!isalnum(s[start])){
            start++;
            continue;
        }
        if(!isalnum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end])) {return false ;}else{
            start++;
            end--;
        }
    } 
    return true;

}

//another way of doing this is that we make a new string with only alphanumeric values all in lowercase and than check for palindrome;

int main() {
    string s = "A man, a plan, a canal: Panama";

    cout<<"Is plaindrome "<<isPalindrome(s);
    return 0;
}