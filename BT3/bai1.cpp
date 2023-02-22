#include <bits/stdc++.h>
using namespace std;
bool check[1001];
int main(){
    int a[10001];
    int n;
    cin >> n;
    int cnt=0;
    for(int i=0;i<n;++i){
        cin >> a[i];
        if(check[a[i]]==0) check[a[i]]=1;
        else if(check[a[i]]==1) ++cnt;
    }
    if(cnt==0) cout << "NO";
    else cout << "YES";
    }