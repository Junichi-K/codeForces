#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
 
void solve() {
    int l, r;
    cin >> l >> r;
 
    int cur_elem = l;
    int gap = 1;
 
    int length = 0;
 
    while(cur_elem <= r) {
        length++;
 
        cur_elem += gap++;
    }
 
    cout << length << endl;
}
 
int main() {
    
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
  
    return 0;
}
