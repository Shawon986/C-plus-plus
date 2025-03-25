#include <iostream>
using namespace std;

int main() {
    int number,count = 0;
    cout<<"Type your number : ";
    cin>>number;

    for(int i = 2; i<number; i++){
        if(number%i == 0){
           count ++;
           break;
        }
    }
    if(count == 0){
        cout<<number<<" is a Prime number"<<endl;
    }else{
        cout<<number<<" is not a Prime number ."<<endl;
    }
    return 0;
}