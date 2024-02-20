// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2.

 

// Example 1:

// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true
// Explanation: s2 contains one permutation of s1 ("ba").
// Example 2:

// Input: s1 = "ab", s2 = "eidboaoo"
// Output: false

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool checkCount(int a[26], int b[26]){
    for(int i = 0; i<26; i++){
        if(a[i] != b[i]){
            return false;
        }
        return true;
    }
}
int main() {
    
    string s1 = "ba";
    string s2 = "abcdefg";

    int count1[26] = {0};
//storing the count of each char in the string s1 to check every p[ermuattion]
    for(int i = 0; i< s1.size(); i++){
        count1[s1[i] - 'a']++;
    }

    int i =0, j=0;
    int count2[26] = {0};

    while(j < s2.size()){
        //update the value of count2 array for storing count of char in s2
        count2[s2[j] -'a']++;
        int windowSize = j-i + 1;
        //checking if the window size is equal to the size of s1 if yes then check check count1 and count2;
        if(windowSize == s1.size()){
            if(checkCount(count1, count2)) return 1;
            //if not true then we just move to the next char;
            else j++;
        }
        if(windowSize < s1.size()) j++;
        else{
            //need to remove the left most element from the window if windowsize is greater;
            count2[s2[i] - 'a']--; //as i = 0 now so it will remove e from the window;
            i++;//so now i =1 and j = 2; 
        }
    }
    // return false;
    return 0;
}