#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int t;
    while (b){
        if (a>b){
            t=a;
            a=b;
            b=t;
        }
        b=b%a;
    }
    return a;
}
int main(){
        int n,m;
    cin>>n>>m;
    cout<<n*m/gcd(n,m);

}
