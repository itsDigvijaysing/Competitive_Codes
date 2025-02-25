#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool stringpossibility(string &s, string &goal, int shifts){
        for(int j=0;j<s.size();j++){
            int k=(j+shifts)%s.size();
            if(s[k]!=goal[j]) return false;
        }
        return true;
    }

    bool rotateString(string s, string goal) {
        int shifts = 0;
        if (s.size() != goal.size()) return false;
        for(int i=0;i<s.size();i++){
            if(s[i]==goal[0]){
                bool output = stringpossibility(s,goal,shifts);
                if(output==true) return true;
            }
            shifts++;
        }
        return false;
    }
};

int main(){
    Solution s;
    cout<<s.rotateString("abcde","cdeab")<<endl;
    cout<<s.rotateString("abcde","abced")<<endl;
    return 0;
}