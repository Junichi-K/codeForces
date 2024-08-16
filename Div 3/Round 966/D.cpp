#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long
 
using namespace std;
 
vector<ll> pre_sum;
 
void solve(vector<int> &a, string &s, int &n) {
 
    ll cur_score = 0;
 
    pre_sum.resize(n);
 
    pre_sum[0] = a[0];
    
    for(int i = 1; i < n; i++) 
        pre_sum[i] = pre_sum[i - 1] + a[i];
 
    int left = 0, right = n - 1;
 
    while(left < right) {
        while(left < n && s[left] == 'R')
            left++;
 
        while(right >= 0 && s[right] == 'L')
            right--;
 
        if(left < right)
            cur_score += (pre_sum[right] - ((left != 0) ? pre_sum[left - 1] : 0));
 
        left++;
        right--;
    }
 
    cout<<cur_score<<endl;
}
 
int main() {
    int t;
    cin>>t;
 
    int n;
    string s;
    vector<int> a; 
 
    while(t--) {
        cin>>n;
 
        a.resize(n);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
 
        cin>>s;
        solve(a, s, n);
    }
 
    return 0;
}