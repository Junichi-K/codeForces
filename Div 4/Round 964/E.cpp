#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
int dp[200'001];
int pre_sum[200'001];
 
using namespace std;
 
void solve() {
    int l, r;
    cin >> l >> r;
 
    cout << pre_sum[r] - pre_sum[l - 1] + dp[l] << endl;
}
 
int main() {
    
    int t;
    cin>>t;
 
    dp[0] = 0;
    int cur_power = 1;
    for(int i = 1; i <= 200'000; i++) {
        if(i < cur_power) {
            dp[i] = dp[i - 1];
        }
 
        else {
            dp[i] = dp[i - 1] + 1;
            cur_power *= 3;
        }
    }
 
    pre_sum[0] = 0;
    for(int i = 1; i <= 200'000; i++) 
        pre_sum[i] = pre_sum[i - 1] + dp[i];
    
 
    while(t--) {
        solve();
    }
 
    return 0;
}