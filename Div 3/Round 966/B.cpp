#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int solve(vector<int> &a) {
    int size = a.size();
    vector<int> positions(size, 0);
 
    positions[a[0] - 1] = 1;
 
    for(int i = 1; i < size; i++) {
        if((a[i] - 2 >= 0 && positions[a[i] - 2] == 1) || (a[i] < size && positions[a[i]] == 1)) {
            positions[a[i] - 1] = 1;
            continue;
        }
 
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
 
    cout<<"YES"<<endl;
    return 0;
}
 
int main() {
    int t;
    cin>>t;
 
    int n;
    vector<int> a; 
 
    while(t--) {
        cin>>n;
 
        a.resize(n);
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
 
        solve(a);
    }
 
    return 0;
}