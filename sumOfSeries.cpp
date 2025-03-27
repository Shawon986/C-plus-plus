#include <iostream>
using namespace std;

int main() {
    int n ,sum=0;
    cout<<"Type a number : ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        sum = sum+i;
    }
    cout<<"Sum = "<<sum<<endl;


    //sum of even numbers

    int m, sum = 0;

    cout<<"Type last number : ";
    cin>>m;

    for(int i = 2; i<=m; i+=2){
        sum = sum+i;
    }
    cout<<"Sum = "<<sum<<endl;

    
    return 0;
}