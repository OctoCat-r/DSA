// we have to return the character which is coming the max number oif times in a sentence

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

char maxChar(string s){
    int arr[26] = {0};

    for(int i = 0; i< s.size(); i++){
        int index = 0;

        if(s[i] >= 'a' && s[i] <= 'z'){
            index = s[i] - 'a';
        }else{
            index = s[i] - 'A';
        }

        arr[index]++;
    }
    int max = -1 , ans = 0;
    for(int i = 0; i<26 ; i++){
        if(arr[i] > max){
            ans = i;
            max = arr[i];
        }
    }
    char finalAns = 'a' + ans;

    return finalAns;

}
int main() {
    string s = "text";

    cout<<maxChar(s);

    return 0;
}