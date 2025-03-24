#include <iostream>
using namespace std;

int main(){

    //Vowel and consonent
    char character;

    cout<<"Type a Character : ";
    cin>>character;

    character = tolower(character); // change the input character to lower case

    if(character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
        cout<<"Character is a Vowel"<<endl;
    }else{
        cout<<"Character is a consonant"<<endl;
    }

    //Large number form 3 different numbers

    int num1,num2,num3;

    cout<<"Type 3 integer numbers :";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3){
        cout<<"Number one is bigger"<<endl;
    }else if(num2>num1 && num2>num3){
        cout<<"Number two is bigger"<<endl;
    }else{
        cout<<"Number three is bigger"<<endl;
    }



    return 0;
}