#include <iostream>
using namespace std;

int fact(int n){
    if (n==1)
        return 1;   //Its called base case to stop recursive call, otherwise function will keep calling infinitely
    else
        return n * fact(n-1);
}

int main() {
    
    int factorial = fact(4);
    cout<<factorial;

    return 0;
}


//Recursion is a proccess where a function can call itself