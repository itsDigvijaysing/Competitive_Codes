// Pattern of 5
//   *  
//  * * 
// *   *
//  * * 
//   *    

// It's basic program but still it took over 2-3 hrs
#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c=1;
    cout << "Type no of Rows (Odd No) :";
    cin >> n;
    a = n/2;
    b = a+1;
    a = b;
    for (int i = 1; i <= n; i++)
    {
        cout << endl;
        if(i>a){
            b = b + 1;
        }
        else{
            b = b - 1;
        }
        for (int j = 0; j < b;j++){
                cout << " ";
        }
        cout << "*";

        if(i != 1 and i!=n ){
            for (int k = 1; k <= c;k++){
                cout << " ";
            }
            cout << "*";
        }
        // cout << i;
        // cout << c;
        if(i != 1 and i!=n ){
            if(i<a){
                c = c + 2;
            }
            else{
                c = c - 2;
            }
        }
    }
    return 0;
}