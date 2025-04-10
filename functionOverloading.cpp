#include <iostream>
using namespace std;

void sum(int x, int y){
    int add = x + y;
    cout<<"Sum = " <<add<<endl;
}
void sum(int x, int y, int z){
    int add = x + y + z;
    cout<<"Sum = " <<add<<endl;
}



int main() {
    
    sum(20,30);
    sum(20,30,50);
    
    return 0;
}