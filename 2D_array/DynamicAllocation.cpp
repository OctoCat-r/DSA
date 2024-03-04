#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m ;
    cin>>m;
    int **arr = new int *[n];

    for(int i = 0; i< n; i++){
        arr[i] = new int [m];
    }


    // relasing memory

    for(int i = 0; i< n; i++){
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}