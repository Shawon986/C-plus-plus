#include <iostream>
using namespace std;

int main(){

    int num;

    cout<<"Type a integer number :";
    cin>>num;

    if(num>0){
        cout<<"Positive"<<endl;
    }
    else if(num<0){
        cout<<"Negative"<<endl;
    }
    else{
        cout<<"Zero";
    }



    return 0;
}