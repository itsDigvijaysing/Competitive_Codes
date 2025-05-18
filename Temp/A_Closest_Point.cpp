// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t>0){
//         int checker=0;
//         int n;
//         int d;
//         cin >> n;
//         int x[n], finalX[n];
//         // set<int>dx; //to only allow distinct values
//         for(int i=0; i<n; i++){
//             cin >> x[i];
//         }
//         sort(x, x+n);
//         for(int i=0;i<n;i++){
//             if(i==0){
//                 continue;
//             }
//             else if(x[i-1]==x[i]){
//                 checker=1+checker;
//                 continue;
//             }
//             else if(x[i-1]-x[i]==1 or x[i-1]-x[i]== -1){
//                 checker=1+checker;
//             }else{
//                 d=(x[i-1]+x[i])/2;
//             }
//         }
//         if(checker>0){
//             cout<<"NO"<<endl;
//         }else{
//             cout<<"YES"<<endl;
//         }
//         t--;
//     }
//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int Input;
//     cin >> Input;
    
//     while (Input--) {
//         int checker = 0;
//         int n;
//         cin >> n;
//         vector<int> points(n);
        
//         for (int i = 0; i < n; ++i) {
//             cin >> points[i];}
//         for (int i = 0; i < n - 1; ++i) {
//             if (points[i+1] - points[i] >= 4) {
//                 checker = 1;
//                 break;
//             }
//         }
//         if (checker==1) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t>0){
//         int checker=0;
//         int n;
//         int d;
//         cin >> n;
//         int x[n], finalX[n];
//         // set<int>dx; //to only allow distinct values
//         for(int i=0; i<n; i++){
//             cin >> x[i];
//         }
//         sort(x, x+n);
//         if(n>=3){
//             cout<<"NO"<<endl;
//         }else if(abs(x[0]-x[1]==1)){
//             cout<<"NO"<<endl;
//         }else{
//             cout<<"YES"<<endl;
//         }
//         t--;
//     }
//     return 0;
// }