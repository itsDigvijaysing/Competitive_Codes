#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "0" << endl;
        } else if (n == 2) {
            cout << "01" << endl;
        } else {
            cout << "01";
            for (int i = 2; i < n; ++i) {
                cout << '0';
            }
            cout << endl;
        }
    }
    
    return 0;
}
