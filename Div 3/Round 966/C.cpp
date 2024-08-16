#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
using namespace std;
 
bool string_solve(string s, vector<int> &a) {
    if(s.length() != a.size())
        return false;
 
    unordered_map<char, int> char_map;
    unordered_map<int, char> int_map;
 
    int index = 0;
    for(char c : s) {
        if(char_map.find(c) == char_map.end()) {
            if(int_map.find(a[index]) == int_map.end()) {
                char_map[c] = a[index];
                int_map[a[index]] = c;
            }
 
            else 
                return false;
        }
 
        else if(char_map[c] != a[index] || int_map[a[index]] != c)
            return false;
 
        index++;
    }
 
    return true;
}
 
int solve(vector<int> &a) {
    int m;
    cin>>m;
 
    while(m--) {
        string s;
        cin>>s;
 
        if(string_solve(s, a))
            cout<<"YES"<<endl;
 
        else
            cout<<"NO"<<endl;
    }
 
    return 0;
}
 
int main() {
    int t;
    cin>>t;
 
    int n;
    vector<int> a; 
 
    while(t--) {
        cin>>n;
 
        a.resize(n);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
 
        solve(a);
    }
 
    return 0;
}