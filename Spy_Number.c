#include<bits/stdc++.h>
using namespace std;
bool d(int n){
    int c=0,p=1;
    while (n){
        c+=n%10;
        p*=n%10;
        n=n/10;
    }
    if (c==p) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    int c=0,p=0;
    if (d(n)) cout<<"Spy Number";
    else cout<<"Not Spy Number";
}
