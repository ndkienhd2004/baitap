#include <bits/stdc++.h>
using namespace std;
bool check[10001];
map<int,int>cnt;
int main(){
    int n;
    cin >> n;
    int a[10001];
    int b[10001];
    for(int i=0;i<n;++i){
    cin >> a[i];
    check[a[i]]=1;
    cnt[a[i]]++;
    }
    for(int i=0;i<=n;++i){
        cin >> b[i];
        cnt[b[i]]++;
    }
    for(int i=0;i<=n;++i){
        if(check[b[i]]!=1||cnt[b[i]]%2!=0){
            cout << b[i];
            return 0;
        }
}
}
