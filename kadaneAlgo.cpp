//Max Sub-array sum


#include <iostream>
using namespace std;

int main(){

    int arr[9] = {-2,-3,4,-1,-2,1,5,-3, -1};

    int sum = 0;
    int curSum = arr[0];
    int start = -1;
    int end = -1;


    for(int i = 0; i< 9; i++){

        if(sum == 0) start = i;

        sum += arr[i];

        if(sum > curSum){
            curSum = sum;
            end  = i;
        }

        if(sum < 0) sum = 0;

    }

    for(int i = start; i<= end; i++){
        cout<<arr[i]<<" ";
    }

}