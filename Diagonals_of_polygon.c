#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<=3){
        cout<<0;
    }
    else{
        cout<<(n*(n-1)/2)-n;
    }
}
