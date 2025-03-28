#include <iostream>
using namespace std;

int main() {
    int n,sum =0;
    cout<<"Number of subject : ";
    cin>>n;

    int marks[n];

    for(int i =0;i<n; i++){
        cout<<"Type marks for subject "<<i+1<<" = ";
        cin>>marks[i];
        sum = sum + marks[i] ;
    }
    
    cout<<"Marks are : ";
    for(int i = 0; i<n; i++){
        cout<<" "<<marks[i];
    }
    
    cout<<"\nTotal marks = "<<sum<<endl;

    float average = float(sum)/n ;
    cout<<"Average marks is = "<<average<<endl;

    int max = marks[0];
    int min = marks[0];

    for(int i =1; i<n; i++){
        if(max < marks[i]){
            max = marks[i];
        }
        if(min > marks[i]){
            min = marks[i];
        }
    }

    cout<<"Maximum number : "<<max<<endl;
    cout<<"Minimum number : "<<min<<endl;


    return 0;
}