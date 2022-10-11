#include<bits/stdc++.h>
using namespace std;
int big(int n){
    int c=0;
    while (n){
        if (c<n%10) c=n%10;
        n=n/10;
    }
    return c;
}
int main(){
    int t;
    cin>>t;
    cout<<big(t);
}