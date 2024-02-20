#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// int GCD(int a, int b){
//     int x = min(a, b);

//     while(x >0){
//         if(a % x == 0 && b % x == 0){
//             break;
//         }
//         x--;
//     }

//     return x;
// }

// Euclidean algorithm
// int GCD(int a, int b){
//     while(a != b){
//         if(a > b){
//             a = a-b;
//         }else{
//             b=b-a;
//         }
//     }
//     return a;
// }

// Optimised euclidean

int GCD(int a, int b){

    if(b == 0){
        return a;
    }else return GCD(b, a%b);

}
int main() {
    
    cout<<GCD(15, 3);
    return 0;
}