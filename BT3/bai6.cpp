#include <bits/stdc++.h>
using namespace std;
int x[1001][1001];
void check(int &i, int &j,int n){
        if(i<0) i=(n-1);
        if(j>n-1) j=0;
        if(i>n-1) i=0;
        return;
}
int main(){
    int n;
    cin >> n;
    int cnt=1;
    int i = 0;
    int j = n/2;
    x[i][j] = 1;
    int a,b;
    while(cnt<n*n){
        a=i;
        b=j;
        a--;
        b++;
        check(a,b,n);
        cnt++;
        if(x[a][b]!=0){
            a=i+1;
            b=j;
            check(a,b,n);
            x[a][b]=cnt;
        }else x[a][b]=cnt;
        i=a;
        j=b;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j) cout << x[i][j] << " ";
        cout << endl;
    }
}