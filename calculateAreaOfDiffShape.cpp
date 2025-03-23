#include <iostream>
using namespace std;

int main(){

    //area of triangle

    double base,height;

    cout<<"Input Base value : ";
    cin>>base;
    cout<<"Input Height value : ";
    cin>>height;

    double area ;
    area = (double) 1/2 * (base * height);
    cout<<"Area of a Triangle is : "<<area;

    return 0;
}