#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
  char *ptr;
  int *p;
  char arr[] =  "abcdefg";
  int str[3] = {10, 20, 30};
  ptr = arr;
  p= str;
//   ptr+=5;
  cout<<p+5;
    return 0;
}