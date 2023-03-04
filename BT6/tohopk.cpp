#include <bits/stdc++.h>
using namespace std;
int n,k;
char a;
string s;
bool check[1001];

void output(){
    for(int i=1;i<=k;++i) cout << s[i];
    cout << endl;
    return;
}

void Try(int i){
for(int j=0;j<n;++j){
    if(check[int(a)+j]==0){
    s[i]=char((int)a+j);
    check[int(a)+j]=1;
    if(i==k) output();
    else Try(i+1); 
    check[int(a)+j]=0;
    }
}
return;
}

int main(){
cin >> n >> k;
a='a';
Try(1);
return 0;
}