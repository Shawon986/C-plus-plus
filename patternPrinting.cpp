#include <iostream>
using namespace std;

int main() {
    int row,col,n;

    cout<<"Type number of lines : ";
    cin>>n;

    for( row = 1; row<=n; row++){
        for(col = 1; col<=row; col++){
            cout<<" "<<col;
        }
        cout<<endl;
    }

    int rows,cols,p;

    cout<<"Type number of lines : ";
    cin>>p;

    for( rows = 1; rows<=p; rows++){
        for(cols = 1; cols<=rows; cols++){
            cout<<" "<<rows;
        }
        cout<<endl;
    }
    
    return 0; 
}