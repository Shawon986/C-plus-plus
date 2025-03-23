#include <iostream>
using namespace std;

int main(){
    int age;

    cout<< "Enter your age : " ;
    cin>> age ;

    cout << "Entered age is : " << age <<endl;

    char name[20];

    cout<< "Enter your name : ";
    cin>>name;

    cout<< "My name is : " <<name <<endl;


    int num1,num2,sum;

    cout <<"Type 2 integer number : ";
    cin>>num1>>num2;

    sum = num1 + num2;
    cout<<"The sum is : "<<sum<<endl;
    

    return 0;
}