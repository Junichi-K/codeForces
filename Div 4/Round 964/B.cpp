#include<iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    int a1, a2, b1, b2;
    int count = 0;
 
    while(t--) {
        cin>>a1>>a2>>b1>>b2;
 
        if(a1 > b1 && a2 >= b2 || a1 >= b1 && a2 > b2)
            count++;
 
        if(a1 > b2 && a2 >= b1 || a1 >= b2 && a2 > b1)
            count++;
 
        if(a2 > b1 && a1 >= b2 || a2 >= b1 && a1 > b2)
            count++;
        
        if(a2 > b2 && a1 >= b1 || a2 >= b2 && a1 > b1)
            count++;
        
        cout<<count<<endl;
        count = 0;
    }
 
    return 0;
}