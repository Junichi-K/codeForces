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
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    if(n < 4) {
        cout << "NO" << endl;
        return;
    }
 
    int i = 2;
    while(i * i < n) {
        i++;
    }
 
    if(i * i != n) {
        cout << "NO" << endl;
        return;
    }
 
    for(int j = 0; j < i; j++) {
        string temp = s.substr(j * i, i);
        for(int k = 0; k < i; k++) {
            if(j == 0 || j == i - 1) {
                if(temp[k] != '1') {
                    cout << "NO" << endl;
                    return;
                }
            }
 
            else {
                if(k == 0 || k == i - 1) {
                    if(temp[k] != '1') {
                        cout << "NO" << endl;
                        return;
                    }
                }
 
                else {
                    if(temp[k] != '0') {
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
        }
    }
 
 
    cout << "YES" << endl;
 
}
 
int main() {
    
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
  
    return 0;
}