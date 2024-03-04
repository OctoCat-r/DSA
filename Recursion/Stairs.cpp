// You are at 0th stair and you need to react the Nth stair. Each time you can either climb one step or two steps. You are supposed to
// return the number of distinct ways in which you can climb from the Oth step to Nth step.


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int fibonacci(int n){
 if(n < 0) return 0;
    if( n== 0) return 1;
   
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    // Your code here
    int n = 7;
    cout<<fibonacci(3);
    return 0;
}