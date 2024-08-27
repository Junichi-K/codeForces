#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
void solve() {
    string s, t;
    cin >> s >> t;
 
    int n = s.length(), m = t.length();
    int i = 0, j = 0;
 
    while(i < n) {
        if(j < m) {
            if(s[i] == '?') {
                s[i] = t[j];
                
                i++;
                j++;
            }
 
            else if(s[i] == t[j]) {
                i++;
                j++;
            }
 
            else {
                i++;
            }
        }
 
        else {
            if(s[i] == '?')
                s[i] = 'a';
 
            i++;
        }
    }
 
    if(j == m) {
        cout << "YES" << endl;
        cout << s << endl;
    }
 
    else
        cout << "NO" << endl;
}
 
int main() {
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}