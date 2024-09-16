
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> seq;
 
    while(n--) {
        string s;
        cin >> s;
 
        seq.push_back(4 * (s[3] == '#') + 3 * (s[2] == '#') + 2 * (s[1] == '#') + (s[0] == '#'));
    }
    
    while(!seq.empty()) {
        cout << seq.back() << ' ';
        seq.pop_back();
    }
 
    cout << endl;
}
 
int main() {
    
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
  
    return 0;
}