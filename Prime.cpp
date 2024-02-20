#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


// bool isPrime(int a){

//     if(a == 1) return false;

//     for(int i = 0; i*i <=a; i++){
//         if(a % i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// * more optimised

bool isPrime(int a){

    if(a == 1) return false;
    if(a == 2 || a== 3) return true;

    if(a % 2 == 0 || a % 3 == 0) return false;

    for(int i = 5; i*i <=a; i = i +6){   // i = 5 because 2 and 3 are already considered and 4 is divisible by 5 and i + 6 as 2 * 3;
        if(a % i == 0 || a % (i+2) == 0){
            return false;
        }
    }
    return true;
}

int main() {
    
    isPrime(5) ? cout<<"Prime" : cout<<"Non prime";
    return 0;
}