#include<iostream>
using namespace std;

// int fact(int n){
//     int res = 1;
//     while(n > 0){
//         res = res*n;
//         n--;
//     }
//     return res;
// }

int fact(int n){
    if(n == 0){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int n;
    cin>>n;

    cout<<fact(n);
}



