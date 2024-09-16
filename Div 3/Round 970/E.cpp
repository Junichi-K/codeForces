#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
 
#define ll long long
 
using namespace std;
 
//vector<int> parent(199'999, 0);
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    int result = n;
 
    if(n % 2 == 0) {
        int freq[2][26] = {0};
        int maxim[2] = {0, 0};
 
        for(int i = 0; i < n; i++) 
            maxim[i % 2] = max(maxim[i % 2], ++freq[i % 2][s[i] - 'a']);    //0 is for odd, and 1 is for even positions
 
        cout << result - maxim[0] - maxim[1] << endl;   
        return;
    }
 
    else {
        int suffix[2][26] = {0};
 
        for(int i = n - 1; i >= 0; i--) 
            suffix[i % 2][s[i] - 'a']++;
 
        int prefix[2][26] = {0};
 
        for(int i = 0; i < n; i++) {
            suffix[i % 2][s[i] - 'a']--;
 
            int answer = n;
 
            for(int k = 0; k < 2; k++) {
                int max_occur = 0;
 
                for(int j = 0; j < 26; j++) 
                    max_occur = max(max_occur, prefix[k][j] + suffix[1 - k][j]);
 
                answer -= max_occur;
                
            }
 
            result = min(result, answer);
            prefix[i % 2][s[i] - 'a']++;
        }
 
        cout << result << endl;
        return;
        
    }
}
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
  