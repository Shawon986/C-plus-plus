#include <iostream>
using namespace std;

int main(){
    int a = 32, b = 12, c,d,e,f,g;

    c = a&b; //bitwise and
    cout<<c<<endl;

    d = a|b; //bitwise or
    cout<<d<<endl;

    e = a^b; //bitwise xor
    cout<<e<<endl;

    f = a>>2; //bitwise right shift
    cout<<f<<endl;

    g = b<<2; //bitwise left shift
    cout<<g<<endl;

    return 0;
}