#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    string s;
    cin >> s;
    vector<int> mi(n), mx(n);
    mi[0] = v[0], mx[n - 1] = v[n - 1];
    for (int i = 1; i < n; i++)
        mi[i] = min(mi[i - 1], v[i]);
    for (int i = n - 2; i >= 0; i--)
        mx[i] = max(mx[i + 1], v[i]);
    bool isSort=1;
    for(int i=1;i<n;i++)
    {
        if(v[i]<v[i-1])
        {
            isSort=0;
            break;
        }
    }
    while(q--)
    {
        bool flag=1;
        int i;cin>>i;
        i--;
     
        if(s[i]=='R')
        {
            s[i]='L';
        }
        else if(s[i]=='L')
        {
            s[i]='R';
        }
        // cout<<s<<endl;
        for(int i=1;i<n;i++)
        {
            if(s[i-1]=='L' && s[i]=='R'&& mx[i-1]>mi[i])
            {
                flag=0;
                break;
            }
           
        }
        if(flag||isSort)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}



/* Old Try*/
/* 
#include <bits/stdc++.h>
using namespace std;

bool canSortPermutation(const vector<int>& original, const string& s) {
    int n = original.size();
    vector<int> p = original;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; ++i) {
        if (visited[i]) continue;
        vector<int> values;
        vector<int> indices;
        for (int j = i; j < n; ) {
            indices.push_back(j); values.push_back(p[j]); visited[j] = true;
            if (j < n - 1 && (s[j] == 'R' || s[j + 1] == 'L')) { j++; } else {break;}
        }
        sort(values.begin(), values.end());
        for (size_t k = 0; k < indices.size(); ++k) {p[indices[k]] = values[k];}
    }
    return is_sorted(p.begin(), p.end());
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        string s;
        cin >> n;
        vector<int> p(n);
        cin >> q;
        for (int i = 0; i < n; ++i) { cin >> p[i]; }
        cin >> s;
        for (int i = 0; i < q; ++i) {
            int index;
            cin >> index;
            --index;
            s[index] = (s[index] == 'L') ? 'R' : 'L';
            if (canSortPermutation(p, s)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}
*/