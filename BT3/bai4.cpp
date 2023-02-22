#include <bits/stdc++.h>
using namespace std;
char a[1001][1001];
int b[1001][1001];
void check(int u, int v){
    if(a[u-1][v-1]=='*') ++b[u][v];
    if(a[u-1][v]=='*') ++b[u][v];
    if(a[u-1][v+1]=='*') ++b[u][v];
    if(a[u][v-1]=='*') ++b[u][v];
    if(a[u][v+1]=='*') ++b[u][v];
    if(a[u+1][v-1]=='*') ++b[u][v];
    if(a[u+1][v]=='*') ++b[u][v];
    if(a[u+1][v+1]=='*') ++b[u][v];
    return;
}
int main(){

    int m,n;
    cin >> m >> n;
    for( int i=0 ; i<m ; ++i ){
        for( int j=0 ; j<n ; ++j ){
            cin >> a[i][j];
        }
    }
    for( int i=0 ; i<m ; ++i ){
        for( int j=0 ; j<n ; ++j){
        if(a[i][j]!='*'){check(i,j);}
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
        if(a[i][j]!='*') cout << b[i][j] << " ";
        else cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
    