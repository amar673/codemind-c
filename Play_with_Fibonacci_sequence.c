#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=1;
    cin>>n;
    int c=0;
    cout<<a<<" "<<b<<" ";
    while (n-2){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
        n--;
    }
}