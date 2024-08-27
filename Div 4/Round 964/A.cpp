using namespace std;
 
int main() {
    int n;
    cin>>n;
 
    int temp;
    int sum = 0;
 
    for(int i = 0; i < n; i++) {
        cin>>temp;
 
        sum += temp % 10;
        temp /= 10;
        sum += temp % 10    ;
 
        cout<<sum<<endl;
        sum = 0;
    }
 
    return 0;
}