#include <iostream>
using namespace std;

int main(){

    int num,num1,num2;

    cout<<"Enter an integer Number : ";

    cin>>num;


    if(num % 2 == 0){
        cout<<"Number is Even"<<endl;
    }else{
        cout<<"Number is Odd"<<endl;
    }

    cout<<"Enter number one : ";

    cin>>num1;

    cout<<"Enter number two : ";

    cin>>num2;

    if(num1>num2){
        cout<<"Num1 is greater that Num2"<<endl;
    }else if(num2>num1){
        cout<<"Num2 is Greater than Num1"<<endl;
    }else{
        cout<<"Num1 and Num2 are equal"<<endl;
    }



    return 0;
}