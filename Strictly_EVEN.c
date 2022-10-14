#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int c=0;
    for (int i=0;i<n;i++){
        if (i%2){
            if (a[i]%2==0) {
                c=1;
                break;
            }
            }
        }
    if (c==1) cout<<"False";
    else cout<<"True";
}