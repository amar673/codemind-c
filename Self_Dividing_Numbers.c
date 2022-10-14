#include<bits/stdc++.h>
using namespace std;
bool d(int n){
    int c=0,m=0;
    int k=n;
    while (n){
        m++;
        if (n%10==0) break;
        if ((k%(n%10))==0) c++;
        n=n/10;
    }
    if (c==m) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=n;i<=m;i++){
        if (d(i)) {
            cout<<i<<" ";
        }
    }
}