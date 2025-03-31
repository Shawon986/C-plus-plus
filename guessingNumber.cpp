#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    
    while(1){
        int guessNumber,randomNumber;

        cout<<"Enter your number : ";
        cin>>guessNumber;

        randomNumber = rand()%5 + 1;

        if(guessNumber == randomNumber){
            cout<<"You win"<<endl;
            break;
        }else{
            cout<<"You lost. Try agin !!!"<<endl;
            cout<<"Random Number was : "<<randomNumber<<endl;
        }
    }
    
    return 0;
}