#include <iostream>
using namespace std;

int main(){
    int a;
    float b;
    double c;
    char d;
    char name[20];

    int sizeA = sizeof(a);
    int sizeB = sizeof(b);
    int sizeC = sizeof(c);
    int sizeD = sizeof(d);
    int sizeE = sizeof(name);

    cout<<sizeA<<endl<<sizeB<<endl<<sizeC<<endl<<sizeD<<endl<<sizeE<<endl;


    int x,y,sum;

    sum = (x=12, y=45, sum = x+y);
    cout<<"Sum = : "<<sum<<endl;

    return 0;
}