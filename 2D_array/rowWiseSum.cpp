#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    // Your code here
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    vector<int> sum;

    for(int i = 0; i<3; i++){
        int sumRow = 0;
        for(int j = 0; j<3; j++){
            sumRow += arr[i][j];
        }
        sum.push_back(sumRow);
    }

    for(int i =0; i<sum.size(); i++){
        cout<<sum[i]<<" ";
    }
    return 0;
}