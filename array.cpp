#include <iostream>
using namespace std;

int main() {
    int array[] = {20,30,40,50,60,70,80};

    cout<<array[3];

    for(int i =0; i<=6; i++){
        cout<<array[i];
        cout<<endl;
    }

    int array2[5];

    array2[0] = 10;
    array2[1] = 20;
    array2[2] = 30;
    array2[3] = 40;
    array2[4] = 50;


    cout<<array2[0]<<endl;
    cout<<array2[1]<<endl;
    cout<<array2[2]<<endl;
    cout<<array2[3]<<endl;
    cout<<array2[4]<<endl;


    return 0;
}