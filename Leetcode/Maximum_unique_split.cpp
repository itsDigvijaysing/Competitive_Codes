#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    map<string,int> mp;
    int rec(int ind,string str,string &s){
        if(ind == s.size()){
            if(mp.find(str) == mp.end()) return 1;
            else return 0;
        }
        int currCnt = 0;
        // cout<<str<<endl;
        if(mp.find(str) == mp.end()){
            mp[str] = 1;
            currCnt = 1+rec(ind+1,string(1,s[ind]),s);
            mp.erase(str);
        }
        if(currCnt == 11) {
        cout<<"\n\n\n We are here \n\n\n";
        cout << "Current substring: " << str + s[ind] << endl;
        cout << "Current count: " << currCnt << endl;
        }
        currCnt = max(currCnt,rec(ind+1,str+s[ind],s));
        // cout << "Current substring: " << str + s[ind] << endl;

        return currCnt;
    }
public:
    int maxUniqueSplit(string s) {
        mp = map<string,int>();
        return rec(1,string(1,s[0]),s);
    }
};

int main(){
    string s;
    cin>>s;
    Solution sol;
    cout<<sol.maxUniqueSplit(s);
    return 0;
}