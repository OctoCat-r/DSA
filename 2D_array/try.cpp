#include<iostream> 
using namespace std; 
class Test 
{ 
private: int x, y; 
public: 
        Test():y(10),x(y+10) 
        { 
        }       
       void print() 
       { 
          cout<<x<<", "<<y; 
       }  
}; 
int main() 
{ 
Test *a = new Test(); 
a->print(); 
delete a; 
return 0; 
} 