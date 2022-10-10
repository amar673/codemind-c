#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t){
    t--;
    int n;
    cin>>n;
    int r=0,k=n;
    if (n<0) cout<<"False"<<endl;
    else{
    while (n){
        r=r*10+n%10;
        n=n/10;
    }
    if (k==r) cout<<"True"<<endl;
    else cout<<"False"<<endl;
    }
    }
}