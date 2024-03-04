#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int i = 5;
    int &j = i;

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<++j<<endl;
    cout<<i<<endl;
    return 0;
}