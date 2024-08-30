#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
void solve() {
    int start = 2, end = 999;
    int mid1, mid2;
    int area;
 
    while(start < end) {
        mid1 = start + (end - start)/3;
        mid2 =  start +  2 * (end - start)/3;
 
        cout << '?' << ' ' << mid1 << ' ' << mid2 << endl;
        cout.flush();
 
        cin >> area;
 
        if(area == -1)
            return;
 
        if(area == (mid1 + 1) * (mid2 + 1)) {
            end = mid1;
        }
 
        else if(area == mid1 * (mid2 + 1)) {
            start = mid1 + 1;
            end = mid2;
        }
 
        else {
            start = mid2 + 1;
        } 
    }
 
    cout << '!' << ' ' << start << endl;
}
 
int main() {
    
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}