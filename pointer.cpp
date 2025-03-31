#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *p;
    p = &x;

    cout<<*p<<endl;     //for printing the value of x variable // *p is a pointer//pointer stotres the address of a variable, and it also like a variable
    cout<<&x<<endl;       //for printing the address of x
    cout<<p;        
    
    return 0;
}