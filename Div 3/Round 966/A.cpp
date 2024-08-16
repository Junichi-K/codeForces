#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int solve(int temp) {
    if(temp < 102) {
        cout<<"NO"<<endl;
        return 0;
    }
 
    string s = to_string(temp);
 
    if(s[0] == '1' && s[1] == '0' && s[2] != '0') {
        cout<<"YES"<<endl;
        return 0;
    }
 
    cout<<"NO"<<endl;
    return 0;
 
}
 
int main() {
    int t;
    cin>>t;
 
    int temp;
 
    while(t--) {
        cin>>temp;
 
        solve(temp);
    }
 
    return 0;
}