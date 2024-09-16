#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
const int MAX = 2e5 + 1;
vector<int> dp(MAX, -1);    
int permutation[MAX];
string s;
 
void solve() {
    int n;
    cin >> n;
 
    for(int i = 1; i <= n; i++) 
        cin >> permutation[i];
 
    string s;
    cin >> s;
    s.insert(s.begin(), ' ');
 
    fill(dp.begin(), dp.end(), -1);
    
    unordered_set<int> cycle;
 
    for(int i = 1; i <= n; i++) {
        if(dp[i] != -1)
            continue;
 
        cycle.insert(i);
        int j = i;
        int blacks = (s[j] == '0' ? 1 : 0);
        
        while(true) {
            j = permutation[j];
            
            if(cycle.find(j) != cycle.end()) {
                for(int v : cycle) {
                    dp[v] = blacks;
                }
 
                break;
            }
 
            cycle.insert(j);
            blacks += (s[j] == '0');
        }
 
        cycle.clear();
    }
 
    for(int i = 1; i <= n; i++) {
        cout << dp[i] << ' ';
    }
 
    cout << endl;
}
 
int main() {
    
    int t;
    cin>>t;
 
    for(int i = 0; i < MAX; i++) 
        dp[i] = -1;
 
    while(t--) {
        solve();
    }
  
    return 0;
}
