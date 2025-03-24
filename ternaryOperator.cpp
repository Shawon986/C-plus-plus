#include <iostream>
using namespace std;

int main() {
    
    int x,y;
    x = 400,y = 260;

    x > y ? cout<<"Bigger number is : "<<x <<endl : cout<<"Bigger number is : "<<y<<endl;  //if(x>y){cout<<x}else{cout<<y}

    int num = 19;

    (num % 2 == 0) ? cout<<num<<" is an even number"<<endl : cout<<num<<" is an Odd number"<<endl;
    
    return 0;
}