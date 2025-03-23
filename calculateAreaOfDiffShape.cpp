#include <iostream>
using namespace std;

int main(){

    //area of Triangle

    double base,height;

    cout<<"Input Base value : ";
    cin>>base;
    cout<<"Input Height value : ";
    cin>>height;

    double triangleArea ;
    triangleArea = (double) 1/2 * (base * height);
    cout<<"Area of a Triangle is : "<<triangleArea<<endl;

    //area of Trapezium

    double a,b,h;

    cout<<"Input value of a : ";
    cin>>a;
    cout<<"Input value of b : ";
    cin>>b;
    cout<<"Input value of h : ";
    cin>>h;

    double trapeziumArea;
    trapeziumArea = (double)1/2 * (a+b) * h;
    cout<<"Area of a Trapezium is : "<<trapeziumArea<<endl;
    


    return 0;
}