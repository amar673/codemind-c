#include<bits/stdc++.h>
using namespace std;

int revv(int a)
{
    int b,rev=0;
    while(a)
    {
        b=a%10;
        a=a/10;
        rev=(rev*10)+b;
    }
    return rev;
}

int main()
{
    int a,sqa,reva,revs,revss;
    cin>>a;
    sqa=a*a;
    reva=revv(a);
    revs=reva*reva;
    revss=revv(revs);
    //cout<<a<<" "<<sqa<<" "<<reva<<" "<<revs<<" "<<revss;
    if (revss==sqa) cout<<"True";
    else cout<<"False";
}