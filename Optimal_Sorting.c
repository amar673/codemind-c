#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int hh=0;hh<t;hh++){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    for (int i=0;i<n-1;i++){
        if (a[i]>a[i+1]){
            c=1;
            break;
        }
    }
    if (c==1)
    cout<<*max_element(a,a+n)- *min_element(a,a+n)<<"
";
    else cout<<0<<"
";
    }
}