#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
const int MAX = 1e5 + 1;
int freq[MAX];
 
void solve() {
    int a, b;
    cin >> a >> b;
 
    if(b % 2 == 0) {
        if(a % 2 == 0) {
            cout << "YES" << endl;
            return;
        }
 
        cout << "NO" << endl;
        return;
    }
 
    if(a >= 2 && a % 2 == 0) {
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