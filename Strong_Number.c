#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    int c=1;
    while (n){
        c*=n;
        n-=1;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    int s=0,k=n;
    while (n){
        s+=fact(n%10);
        n=n/10;
    }
    if (k==s) cout<<"The number"<<" "<<k<<" "<<"is a strong number";
    else cout<<"The number"<<" "<<k<<" "<<"is not a strong number";
}