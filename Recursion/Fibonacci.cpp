#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int fibonacci(int n){

    if( n== 0) return 0;
    if(n == 1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    // Your code here
    int n = 7;
    cout<<fibonacci(3);
    return 0;
}