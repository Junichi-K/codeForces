#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
 
#define ll long long
#define MOD 1'000'000'007LL
 
using namespace std;
 
//vector<int> parent(199'999, 0);
 
ll bin_exp(ll a, ll b) {
    a %= MOD;  
    ll res = 1;
 
    while(b > 0) {
        if(b & 1)
            res = res * a % MOD;
 
        a = a * a % MOD;    
        b >>= 1;
    }
 
    return res;
}
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> balls(n);
    for(int i = 0; i < n; i++) 
        cin >> balls[i];
    
 
    //vector<ll> suf_sum(n);
    ll sum = 0;
    //suf_sum[n - 1] = balls[n - 1] % MOD;
    for(int i = 0; i < n; i++) 
    //    suf_sum[i] = suf_sum[i + 1] + balls[i];
        sum += balls[i];
 
    //ll sum = suf_sum[0];
    ll num = 0;
    for(int i = 0; i < n; i++) {
        sum -= balls[i];
 
        num = (num % MOD + (balls[i] % MOD) * (sum % MOD) % MOD) % MOD;
    }
    
    //ll answer = ;
 
    cout << (num) * ((bin_exp(((n * (n - 1))/2), MOD - 2))) % MOD << endl;
}
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}