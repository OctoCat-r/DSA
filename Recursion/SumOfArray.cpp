#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int SumArray(int *arr, int n){
    
    if(n == 1) return arr[0];

    //  int sum = sum + arr[0];

    // return arr[n-1] + SumArray(arr, n-1);
    return arr[0] + SumArray(arr + 1, n -1);
}
int main() {
    int arr[5] = {1,2,3,4,5};

    cout<<SumArray(arr, 5);
    return 0;
}