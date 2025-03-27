#include <iostream>
using namespace std;

int main() {
    int i,count =0,number;

    for(number=1; number<=100; number++){
        count = 0;
        if(number<=1){
            count++ ;
        }
    
        for( i = 2; i <= number/2; i++){
            if(number%i == 0){
               count ++;
               break;
            }
        }
        if(count == 0){
            cout<<number<<""<<endl;
        }
    }

    return 0;
}