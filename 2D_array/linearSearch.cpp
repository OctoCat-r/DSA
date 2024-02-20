#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    // Your code here
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    int target = 5;

    for(int i = 0; i< 3; i++){
        for(int j = 0; j<3; j++){
            if(arr[i][j] == target){
                cout<<"present";
            }
        }
    }
    return 0;
}