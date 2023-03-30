#include<iostream>
using namespace std;
int fact(int n, int ans = 1){
    if(n == 0)
    return 1;
    for(int i= 1; i<=n; i++){
        ans *= i;
    }
    return ans;
}
int combination(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n, r;
    cout<<"Run ho gya"<<endl;
    cin>>n;
    cin>>r;
    cout<<combination(n,r)<<endl;
}
