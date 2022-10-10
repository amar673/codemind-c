#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t,b,rev=0;
    cin>>a;
    t=a;
    while (a)
    {
        b=a%10;
        a=a/10;
        rev=(rev*10)+b;
        //cout<<rev<<""<<b<<""<<a;
    }
    if (rev==t)
    {
        cout<<"True";
        
    }
    else cout<<"False";
    
}