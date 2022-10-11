#include<bits/stdc++.h>
using namespace std;
int r(int n){
    int c=1,r=0;
    if (n<0) {
        n=-1*n;
        c=-1;
    }
    while (n){
        r=r*10+n%10;
        n=n/10;
    }
    cout<<c*r;
    return 0;
}
int main(){
    int a;
    cin>>a;
    r(a);
}