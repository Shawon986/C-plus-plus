#include <iostream>
using namespace std;

int main() {
    int array[2][3];

    cout<<"Enter the value for the matrix : "<<endl;
    for(int row = 0;row<2; row++){
        for(int col = 0; col<3;col++){
            cout<<"A["<<row<<"] ["<<col<<"] = ";
            cin>>array[row][col];
        }
    }

    for(int row = 0; row<2; row++){
        for(int col = 0; col<3; col++){
            cout<<array[row][col]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}