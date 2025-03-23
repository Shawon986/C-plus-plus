#include <iostream>
#include <iomanip> //for using setprecision.
using namespace std;

int main(){
    float num1 =10,num2 =7;

    cout<<showpoint; //show like decimal number
    cout<<fixed; //to show digit after point.
    cout<<setprecision(2); //number of digit want to show after point.

    double sum = num1 + num2 ;
    cout<< setw(20)<<"Sum is = "<<sum<<endl;

    double sub = num1 - num2;
    cout<<setw(20)<<"Sub is = "<<sub<<endl;

    // cout<<noshowpoint; //not show any point

    double mult = num1 * num2;
    cout<<setw(20)<<"Mult is = "<<mult<<endl;

    double div = num1 / num2;
    cout<<setw(20)<<"Div is = "<<div<<endl;


    return 0;
    
}