#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isSorted(int * arr, int n){

    if(n == 0 || n== 1) return true;

    if(arr[0] > arr[1]) return false;
    else{
        return isSorted(arr + 1 , n -1); // arr + 1 to go the next index 
    }
}
int main() {
    int arr[5] = { 2, 3, 4, 5 ,1};

    cout<<isSorted(arr, 5);
    return 0;
}