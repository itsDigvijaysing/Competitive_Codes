#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    bool isit=0;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='1' and s[i+1]=='1')
        {
            isit=1;
            break;
        }
    }
    if(s[0]=='1' or s[n-1]=='1' or isit)
    {
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main()
{
   int t;cin>>t;
   while (t--)
   {
solve();
   }
   
}

// Working but little bit complex 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int numTests;
//     cin >> numTests;

//     while (numTests--) {
//         bool canAliceWin = false;
//         int strLength;
//         cin >> strLength;
//         string binStr;
//         cin >> binStr;
//         for (int i = 0; i < strLength; ++i) {
//             if (binStr[i] == '1') {
//                 if (i == 0 || i == strLength - 1 ||
//                     (i > 0 && binStr[i - 1] == '1') ||
//                     (i < strLength - 1 && binStr[i + 1] == '1')) {
//                     canAliceWin = true;
//                     break;
//                 }
//             }
//         }
//         if (canAliceWin) {
//             cout << "YES\n";
//         } else {
//             cout << "NO\n";
//         }
//     }
//     return 0;
// }