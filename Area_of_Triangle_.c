#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c;
    cin>>a>>b>>c;
    float s;
    s=(a+b+c)/2;
    s=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<fixed<<setprecision(2)<<s;
    return 0;
}