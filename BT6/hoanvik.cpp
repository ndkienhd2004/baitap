#include <bits/stdc++.h>
using namespace std;
int n,k;
char a;
string s;

void output(){
    for(int i=1;i<=k;++i) cout << s[i];
    cout << endl;
    return;
}

void Try(int i){
for(int j=0;j<n;++j){
    s[i]=char((int)a+j);
    if(i==k) output();
    else Try(i+1);
}
return;
}

int main(){
cin >> n >> k;
a='a';
Try(1);
return 0;
}