#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>

#define ll long long

using namespace std;

vector<int> parent(199'999, 0);

void solve() {
    ll x, y, k;
    cin >> x >> y >> k;

    ll X = (x + k - 1)/k;
    ll Y = (y + k - 1)/k;

    cout << max(2 * X - 1, 2 * Y) << endl;
    
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}