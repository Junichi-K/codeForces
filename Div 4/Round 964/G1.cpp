#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
void solve() {
    int l = 2, r = 999;
    int result;
 
    while(l < r) {
        int mid = (l + r)/2;
        cout << '?' << ' ' << mid << ' ' << 1 << endl;
        cout.flush();
 
        cin >> result;
 
        if(result == -1)
            return;
 
        if(result == mid)
            l = mid + 1;
 
        else 
            r = mid;
    }
 
    cout << '!' << ' ' << l << endl;
}
 
int main() {
    
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}