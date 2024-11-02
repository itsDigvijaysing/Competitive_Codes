#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string findSmallestPermutation(string s)
{
	int len = s.length();

	sort(s.begin(), s.end());
	int i = 0;
	while (s[i] == '0')
		i++;
	
	swap(s[0], s[i]);
	return s;
}

string reverseStr(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++){
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

// string findLargestPermutation(string s)
// {
// 	int len = s.length();

// 	sort(s.begin(), s.end());
// 	int i = 0;
// 	while (s[i] == '0')
// 		i++;
	
// 	swap(s[0], s[i]);
//     // swap(s.begin(),s.end());

// 	return s;
// }

int main()
{
	string s;
    cin>>s;
	string res = findSmallestPermutation(s);
    string ser = reverseStr(res);
    int small=stoi(res);
    int big=stoi(ser);
    int out=small+big;
	cout << out<<endl;
	return 0;

}
