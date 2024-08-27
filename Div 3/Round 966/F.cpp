#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
bool comparator(vector<int> &a, vector<int> &b) {
    return min(a[0], a[1]) > min(b[0], b[1]);
}
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n), b(n);
 
    for(int i = 0; i < n; i++) 
        cin >> a[i] >> b[i];
 
    
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 1e9));
    dp[0][0] = 0;
 
    for(int i = 1; i <= n; i++) {
        int x = a[i - 1], y = b[i - 1];
        int max_pts = x + y;
 
        int cost = 0;
 
        for(int j = 0; j <= max_pts; j++) {
            for(int pre_pts = 0; pre_pts + j <= k; pre_pts++) 
                dp[i][pre_pts + j] = min(dp[i][pre_pts + j], dp[i - 1][pre_pts] + cost);
            
            if(j < (max_pts)) {
                if(x >= y) {
                    x--;
                    cost += y;
                }
 
                else {
                    y--;
                    cost += x;
                }
            }
        }
    }
 
    cout<<(dp[n][k] == 1e9 ? -1 : dp[n][k])<<endl;
    
}
 
int main() {
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}