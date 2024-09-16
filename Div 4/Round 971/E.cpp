#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long

#define MAX 200'001

using namespace std;

ll sum_to_n(ll n) {
    return (n * (n + 1))/2;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    ll l = k, r = k + n - 1;
    ll min_result = LONG_MAX;

    ll temp;

    while(l <= r) {
        ll mid = (l + r)/2;

        temp = (sum_to_n(mid) - sum_to_n(k - 1) - (sum_to_n(k + n - 1) - sum_to_n(mid)));

        min_result = min(min_result, abs(temp));

        if(temp < 0) {
            l = mid + 1;
        }

        else {
            r = mid - 1;
        }
    }

    cout << min_result << endl;
}


 
int main() {
    
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
  
    return 0;
}