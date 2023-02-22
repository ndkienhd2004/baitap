#include <bits/stdc++.h>

using namespace std;
int a[1001][1001];
int main(){

int m,n;
cin >> m >> n;
int count=1;
int mincol=0,maxcol=n-1,minrow=0,maxrow=m-1;

 while (count <= m*n) {
        for (int i = mincol; i <= maxcol; i++) {
            a[minrow][i] = count;
            count++;
        }
        for (int i = minrow+1; i <= maxrow; i++) {
            a[i][maxcol] = count;
            count++;
        }
        for (int i = maxcol-1; i >= mincol; i--) {
            a[maxrow][i] = count;
            count++;
        }
        for (int i = maxrow-1; i >= minrow+1; i--) {
            a[i][mincol] = count;
            count++;
        }
        mincol++;
        maxcol--;
        minrow++;
        maxrow--;
    }

    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
