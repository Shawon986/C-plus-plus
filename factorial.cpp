#include <iostream>
using namespace std;

int main() {
    int fact =1, n ;

    cout<<"Input your number : ";
    cin>>n;

    for(int i = 1; i<=n ; i++){
        fact = fact*i;
    }
    cout<<"Factorial : "<<fact;
    
    return 0;
}