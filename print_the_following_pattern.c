#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,b=1;
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j==k) cout<<"0";
            else cout<<"x";
        }
        k++;
        cout<<endl;
    }
    
}