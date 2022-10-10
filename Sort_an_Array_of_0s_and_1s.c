#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    int t=0;
    while(i<j){
        if (a[i]==1){
            if (a[j]==0){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        else{
            i++;
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}