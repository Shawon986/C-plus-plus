#include <iostream>
using namespace std;

void display(int a =10, int b=20){  //we can set default value in the parameter
    cout<<a<<endl;
    cout<<b<<endl;
}

void multiplication(int n){
    int mult = n*n;
    cout<<"Square of "<<n<<" = "<<mult<<endl;
}

int main() {
    display();
    display(40,50);  //it will replace the value of the parameter
    multiplication(5);
    multiplication(6);
    multiplication(6);
    multiplication(7);
    
    return 0;
}