#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n = 42;
    if(n <= 1) return 0;

    for(int i = 2; i*i <=n; i++){

        while(n % i == 0){
            cout<<i<<endl;
            n = n/i;
        }
    }
    if(n > 1){
        cout<<n;
    }
    return 0;
}