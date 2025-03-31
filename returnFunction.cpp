#include <iostream>
using namespace std;

int addition(int,int);
float division(int,int);

int main() {
    
    int result = addition(10,20);
    cout<<"Sum = "<<result<<endl;
    float divResult = division(15,7);
    cout<<"Division = "<<divResult<<endl;
    
    return 0;
}

int addition(int a, int b){
    int sum = a+b;
    return sum;
    
}

float division(int a, int b){
    float div = float(a)/b;
    return div;
}