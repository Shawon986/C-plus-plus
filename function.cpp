#include <iostream>
using namespace std;

void addition(int a, int b){
    int sum = a + b;
    cout<<sum<<endl;

}
void subtraction(int,int); //if we want to decleare function after the main function we have to decleare a prototype of the function like this.

int main() {

    addition(10,20);
    subtraction(20,10);
    
    return 0;
}

void subtraction(int a, int b){
    int sub = a-b;
    cout<<sub<<endl;
}