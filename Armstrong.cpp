#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int d = n;
    int arm = 0;
    while(d > 0){
        int ld = d % 10;
        arm = (ld*ld*ld) + arm;
       
        d = d /10;
    }
    

    if(arm == n){
        cout<<"Yes";
        cout<<arm;
    }else{
        cout<<"No";
        cout<<arm;
    }
}