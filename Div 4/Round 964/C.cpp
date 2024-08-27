#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
void solve() {
    int n, s, m;
    cin >> n >> s >> m;
 
    vector<pair<int, int>> tasks(n);
 
    for(int i = 0; i < n; i++) 
        cin >> tasks[i].first >> tasks[i].second;
 
    if(tasks[0].first >= s) {
        cout << "YES" << endl;
        return;
    }
 
    for(int i = 1; i < n; i++) {
        if(tasks[i].first - tasks[i - 1].second >= s) {
            cout << "YES" << endl;
            return;
        }
    }
 
    if(m - tasks[n - 1].second >= s) {
        cout << "YES" << endl;
        return;
    } 
 
    cout << "NO" << endl;
}
 
int main() {
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}