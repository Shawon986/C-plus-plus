#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
    
    for(int i =1; i<=5; i++){
        int randomNumber = rand();
        cout<<"Random number = "<<randomNumber<<endl;
    }


    for(int j =1; j<=5; j++){
        int randomNumbers = rand() % 5 + 1; //print random number between 1 to 5.
        cout<<"Random numbers = "<<randomNumbers<<endl;
    }
    
    return 0;
}