#include <iostream>
using namespace std;

int main() {
    for(int i =1; i<=20; i++){
        if(i==10){
            continue; // It will return back to the loop when the condition is i==10, so it will not print 10. //
        }
        cout<<i<<endl;
    }
    
    return 0;
}

// Continue can not be used in Switch Statement