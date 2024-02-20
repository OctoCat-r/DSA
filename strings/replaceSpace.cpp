#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    // Your code here
    string s = "My name is Aman";
    string temp = "";

    for(int i = 0; i< s.size(); i++){
        if(s[i] == ' '){
           temp.push_back('@');
           temp.push_back('4');
           temp.push_back('0');
        }else{
            temp.push_back(s[i]);
        }
    }
    
    cout<<temp;
    return 0;
}