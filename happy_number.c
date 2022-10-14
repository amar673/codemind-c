#include<bits/stdc++.h>
using namespace std;
int happy(int a)
{
    int b,c=0;
    while(a){
    b=a%10;
    a=a/10;
    c+=b*b;
    }
    return c;
}
int main()
{
    int a,b,c;
    cin>>a;
    while(a>9)
    {
      a=happy(a);
    }
    if (a==1 or a==7)
    {
        cout<<"True";
    }
    else cout<<"False";
}