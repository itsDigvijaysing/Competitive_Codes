#include<bits/stdc++.h>
using namespace std;
static bool mysort(pair<int,int>&a,pair<int,int>&b){
    if( a.first>b.first) return true;
    else if(a.first==b.first) return a.second<b.second;
    else return false;

}
void solve()
{
    int n,k;cin>>n>>k;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        x%=k;
        if(x==0) cout<<i+1<<" ";
        else a.push_back({x,i+1});
    }
    sort(a.begin(),a.end(),mysort);
    for(auto it:a) cout<<it.second<<" ";
    cout<<endl;
    
}
int main(){
  int t;cin>>t;
  while(t--) solve();
}

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int m,k;
//         cin>>m>>k;
//         priority_queue<pair<int, int>> pq;
//         for(int j=m; j>0; j--){
//             int b;
//             cin>>b;
//             pq.push({b,j});
//         }
//         while(!pq.empty()){
//             auto element = pq.top();
//             pq.pop();
//             element.first = element.first - k;
//             if(element.first <= 0){
//                 cout<<m-element.second+1<<" ";
//             }else{
//                 pq.push(element);
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int m,k;
//         cin>>m>>k;
//         multiset<pair<int, int>,greater<>> ms;
//         for(int j=m; j>0; j--){
//             int b;
//             cin>>b;
//             ms.insert({b,j});
//         }
//         while(!ms.empty()){
//             auto element = *ms.begin();
//             ms.erase(ms.begin());
//             element.first = element.first - k;
//             if(element.first <= 0){
//                 cout<<m-element.second+1<<" ";
//             }else{
//                 ms.insert(element);
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int checker(int arry[],int size){
//     for(int i=0; i<size;i++){
//         if(arry[i] > 0){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int m,k;
//         int max_index;
//         cin>>m>>k;
//         int arry[m];
//         for(int j=0; j<m; j++){
//             int b;
//             cin>>b;
//             arry[j] = b;
//         }
//         while(checker(arry, m)){
//             auto max_addr=max_element(arry, arry+m);
//             int max = *max_addr;
//             max_index = distance(arry, max_addr);
//             // cout<<max<<" "<<max_index<<endl;
//             // cout<<"before"<<arry[max_index]<<endl;
//             arry[max_index] = arry[max_index] - k;
//             if(arry[max_index] <= 0){
//                 cout<<max_index+1<<" ";
//             }
//             // cout<<"after"<<arry[max_index]<<endl;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// int max_value(map<int, int> mp){
//     int max = 0;
//     int max_index;
//     for(const auto& [index, value] : mp){
//         if(value > max){
//             max = value;
//             max_index = index;
//         }
//     }
//     return max, max_index;
// }


// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int m,k;
//         int max,max_index;
//         map<int, int> mp;

//         cin>>m>>k;
//         for(int j=0; j<m; j++){
//             int b;
//             cin>>b;
//             mp[j] = b;
//         }
//         while(mp.size() > 0){
//             max, max_index = max_value(mp);
//             mp[max_index] = mp[max_index] - k;
//             if(mp[max_index] <= 0){
//                 cout<<max_index+1<<" ";
//                 mp.erase(max_index);
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }