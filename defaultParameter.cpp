#include <iostream>
using namespace std;

void display(int a =10, int b=20){  //we can set default value in the parameter
    cout<<a<<endl;
    cout<<b<<endl;
}

int main() {
    display();
    display(40,50);  //it will replace the value of the parameter
    
    return 0;
}