#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if (n<=1){
        return false;
    }
    else {
        for (int i=2;i<=(int)sqrt(n);i++){
            if (n%i==0) return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while (t){
        t--;
    int n;
    cin>>n;
    int c=n;
    while (true){
        if (prime(n)) {
            cout<<n<<endl;
            break;
        }
        
        if (prime(c)){
             cout<<c<<endl;
             break;
        }
        n=n-1;
        c=c+1;
        
    }
    }
}