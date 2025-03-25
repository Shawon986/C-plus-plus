#include <iostream>
using namespace std;

int main() {
    for(int i =1; i<=10; i++){
        cout<<"ID : "<<i<<endl;
    }

    for(int i = 10; i>=1; i--){
        cout<<"ID : "<<i<<endl;
    }

    for(int i = 2; i<=50; i+=2){
        cout<<i<<endl;
    }

    for(int i = 1; i<=10; i+=2){
        cout<<i<<endl;
    }
    
    for(int i = 1; i<=10; i++){
        cout<<"5 * "<< i <<" = "<< 5*i <<endl;
    }
    
    return 0;
}