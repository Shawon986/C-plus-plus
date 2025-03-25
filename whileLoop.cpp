#include <iostream>
using namespace std;

int main() {
    int i = 1;
    while(i<=10){
        cout<<i<<endl;
        i++ ;
    }
    
    int j = 10;
    while(j>=1){
        cout<<j<<endl;
        j-- ;
    }

    int k = 2;
    while(k<=20){
        cout<<k<<endl;
        k+=2;
    }

    int l = 1;
    while(l<=20){
        cout<<l<<endl;
        l+=2;
    }

    int m =1;
    int n = 5;
    while(m<=10){
        cout<<n <<" * "<<m<<" = "<< m*n <<endl;
        m++ ;
    }
    return 0;
}