#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int *p;
    p = &x;

    cout<<*p<<endl;     //for printing the value of x variable // *p is a pointer//pointer stotres the address of a variable, and it also like a variable
    cout<<&x<<endl;       //for printing the address of x
    cout<<p<<endl;
    
    
    int number1 =10, number2 =20;

    int *p1,*p2;

    p1 = &number1;
    p2 = &number2;

    int sum = *p1+*p2;
    cout<<sum;
    
    return 0;
}