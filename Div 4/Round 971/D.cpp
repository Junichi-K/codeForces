#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
 
#define ll long long

#define MAX 200'001

using namespace std;

/*vector<int> y_0(MAX, 0);
vector<int> y_1(MAX, 0);

//make presum vectors, and for the case when the selected point is the right angle, just check 1 index to the left and 1 index to the right, if they are both 1, increment the triangle count by 1
//vector<int> presum0(MAX, 0);
//vector<int> presum1(MAX, 0);

void presum_init() {
    fill(presum0.begin(), presum0.end(), 0);
    fill(presum1.begin(), presum1.end(), 0);
    
    if(y_0[0]) 
        presum0[0] = 1;
        
    if(y_1[0])   
        presum1[0] = 1;

    for(int i = 1; i < MAX; i++) {
        presum0[i] = y_0[i] + presum0[i - 1];
        presum1[i] = y_1[i] + presum1[i - 1];
    }
}*/


void solve() {
    int n;
    cin >> n;

    unordered_set<int> y_0;
    unordered_set<int> y_1;

    int x, y;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;

        if(y) 
            y_1.insert(x);

        else    
            y_0.insert(x);
    }
    
    ll result = 0;
    
    for(int tip : y_0) {
        if(y_1.find(tip - 1) != y_1.end() && y_1.find(tip + 1) != y_1.end())
            result++;

        if(y_1.find(tip) != y_1.end()) 
            result += y_1.size() - 1; 
    }

    for(int tip : y_1) {
        if(y_0.find(tip - 1) != y_0.end() && y_0.find(tip + 1) != y_0.end()) 
            result++;

        if(y_0.find(tip) != y_0.end())      
            result += y_0.size() - 1;
    }

    cout << result << endl;


    /*for(int i = 0; i < MAX; i++) {
        if(!y_0[i])
            continue;

        if(i > 0 && i < MAX - 1 && y_1[i - 1] && y_1[i + 1])
            result++; 

        if(!y_1[i])
            continue;

        result += presum1[MAX - 1] - 1;
    }

    for(int i = 0; i < MAX; i++) {
        if(!y_1[i])
            continue;

        if(i > 0 && i < MAX - 1 && y_0[i - 1] && y_0[i + 1]) 
            result++;

        if(!y_0[i])
            continue;

        result += presum0[MAX - 1] - 1;
    }

    cout << result << endl;*/
}
 
int main() {
    
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
  
    return 0;
}


