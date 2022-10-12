#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int c=0;
    for(int i=a;i<=b;i++){
        if (i%n==0) c++;
    }
    cout<<c;
   
}