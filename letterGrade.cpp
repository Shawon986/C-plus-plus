#include <iostream>
using namespace std;

int main() {
    
    int number;

    cout<<"Type your Number :";
    cin>>number;

    //Using nested if
    
    if(number > 32){
        if(number>100){
            cout<<"Invalid number";
        }else if(number >= 80){
            cout<<"A+";
        }else if(number >= 70){
            cout<<"A";
        }else if(number >=60){
            cout<<"A-";
        }else if(number >=50){
            cout<<"B";
        }else if(number >= 40){
            cout<<"C";
        }else if(number >= 33){
            cout<<"D";
        }
    }else{
        cout<<"Fail";
    }
    
    return 0;
}