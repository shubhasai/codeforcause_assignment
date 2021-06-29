// Reversing a Number till the key Number
// CODE GOES HERE
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int d =log10(n)+1;
        if(k>0){
            k=k%d;
        }
        else{
            k=d+k;
            k=k%d;
        }
        int f = pow(10,k);
        int r = pow(10,(d-k));
        int result = (n%f)*r;
        result=result+(n/f);
        cout<<result<<endl;
    }
    return 0;
}