#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
const int N = 2e5 + 1, mod = 1e9 + 7;
ll fact[N];
 
ll pw(ll a, ll b) {
    ll r = 1;
    while(b > 0) {
        if(b & 1)
            r = (r * a) % mod;
 
        b /= 2;
        a = (a * a) % mod;
    }
 
    return r;
}
 
ll combination(ll n, ll k) {
    if(n < k)
        return 0LL;
 
    return (fact[n] * pw(fact[k] * fact[n - k] % mod, mod - 2)) % mod;
}
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
    int ones = 0;
 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ones += a[i];
    }
 
    ll ans = 0;
    for(int ones_count = k/2 + 1; ones_count <= min(ones, k); ones_count++) {
        ans += combination(ones, ones_count) * combination(n - ones, k - ones_count) % mod;
        ans %= mod;
    }
 
    cout << ans << endl;
}
 
int main() {
    
    int t;
    cin>>t;
 
    fact[0] = 1;
    for(int i = 1; i < N; i++) 
        fact[i] = (fact[i - 1] * i) % mod;
    
    
    while(t--) {
        solve();
    }
 
    return 0;
}