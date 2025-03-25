#include <iostream>
using namespace std;

int main() {
    
    for(int i = 1;i<=20; i+=3){
        if(i==10){
            continue; // when i = 10 it will return to loop
        }
        if(i>13){
            break; // loop will terminate 
        }
        cout<<i<<endl;
        
    }
    
    return 0;
}