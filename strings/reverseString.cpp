#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }

}
int main() {
   char name[10] = "Aman";

   reverse(name, 4);

   cout<<"reverse string : "<<name;
    return 0;
}