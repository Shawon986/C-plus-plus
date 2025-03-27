#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n ,sumOfN=0;
    cout<<"Type last number : ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        sumOfN = sumOfN+i;
    }
    cout<<"Sum = "<<sumOfN<<endl;


    //sum of even numbers

    int m, sumOfM = 0;

    cout<<"Type last number : ";
    cin>>m;

    for(int i = 2; i<=m; i+=2){
        sumOfM = sumOfM+i;
    }
    cout<<"Sum = "<<sumOfM<<endl;

    //sum off odd numbers

    int p, sumOfP = 0;

    cout<<"Type last number : ";
    cin>>p;

    for(int i = 1; i<=p; i+=2){
        sumOfP = sumOfP+i;
    }
    cout<<"Sum = "<<sumOfP<<endl;

    //sum of square numbers

    int q,sumOfQ;

    cout<<"Type last number : ";
    cin>>q;

    for(int i = 1; i<=q; i++){
        sumOfQ = sumOfQ + pow(i,2);
    }
    cout<<"Sum = "<<sumOfQ;
    
    return 0;
}