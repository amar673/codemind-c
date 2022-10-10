int p(int a,int b){
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
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    for(int i=0;i<n-1;i++){
        t=p(a[i],a[i+1]);
        a[i+1]=t;
    }
    cout<<t;
}
