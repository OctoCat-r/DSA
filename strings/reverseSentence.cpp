
// Given a character array s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by a single space.

// Your code must solve the problem in-place, i.e. without allocating extra space.

// Example 1:

// Input: s = ["t","h","e"," ","s","k","y"," ","i","s"," ","b","l","u","e"]
// Output: ["b","l","u","e"," ","i","s"," ","s","k","y"," ","t","h","e"]

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// void reverses(string s, int start, int e){
//     // int start = 0;
//     // int e = n-1;

//     while(start<e){
//         swap(s[start++], s[e--]);
//     }

// }
void reverseSentence(string s){
    int n = s.size();

    // for(int i = 0; i< n; i++){
    //     int j = 0;
    //     if(s[i] == ' '){
    //         reverses(s,j, i-1 );
    //         j = i + 1;
    //     }else if(i == n-1){
    //         reverses(s, j , i);
    //     }
    // }
    // reverses(s, 0, n-1);
    
    int start = 0;
    int end = 0;

    while(end<= s.size()){
        if(s[end] == ' ' || end == s.size()){
            int e = end-1;
            while(start < e){
                 swap(s[start++], s[e--]);
            }
            start = end + 1;
        }
        end++;
    }
    cout<<s;
}


int main() {
    string s = "Hey it it is a great start";
    
    reverseSentence(s);
    // cout<<s;
    
    return 0;
}