// Reversing a Number
// CODE GOES HERE
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        // Reversing The Number
        int r=0;
        while(a!=0){
            r = (10*r) + (a%10);
            a=a/10;
        }
        cout<<r<<endl;
    }
    return 0;
}