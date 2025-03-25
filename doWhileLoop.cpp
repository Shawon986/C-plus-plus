#include <iostream>
using namespace std;

int main() {
    int i = 1;
    do
    {
        cout<<i<<endl;
        i++ ;
    } while (i<=10);

    int j = 10;
    do
    {
        cout<<j<<endl;
        j-- ;
    }while (j>=1);

    int k = 1;
    do
    {
        cout<<"45"<<" * "<<k<<" = "<<45*k<<endl;
        k++ ;
    } while (k<=10);
    
    int m = 10;
    do{
        cout<<m<<endl;
        m++ ;
    }while(m<5); //condition is false//

    //The main difference between while loop and do while loop is that do while loop will execute at least one time even if the condition is false//
        
    return 0;
}