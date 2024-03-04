#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void sayDigit(int n , string arr[]){

    if(n == 0) return;
    // while(n>0){
    //     int digit = n%10;
    //     n= n/10;
    //     cout<<arr[digit]<<" ";
    // }

    int digit = n%10;
    n= n/10;

    sayDigit(n, arr);
    cout<<arr[digit]<<" ";
}
int main() {
    int n = 512;

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven","eight", "nine"};

    sayDigit(n, arr);

    return 0;
}