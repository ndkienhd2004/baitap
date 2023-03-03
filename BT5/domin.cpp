#include <bits/stdc++.h>
using namespace std;
int movementm[8]= {-1,-1,-1,0,0,1,1,1};
int movementn[8]= {-1,0,1,-1,1,-1,0,1};
bool visit[10001][10001];
bool boom;
int m,n,k;
int dem=0;
char a[1001][1001];
void random(){
    srand(time(0));
    h:
    int x=rand()%m;
    int y=rand()%n;
    if(a[x][y]!='*'){
        a[x][y]='*';
        for(int i=0;i<8;++i){
            if(x+movementm[i]<0||x+movementm[i]>=m||y+movementn[i]<0||y+movementn[i]>=n) continue;
            if(a[x+movementm[i]][y+movementn[i]]!='*'){
                    char g=(a[x+movementm[i]][y+movementn[i]]);
                    a[x+movementm[i]][y+movementn[i]]= (char)(g+1);
            }
    }
    }else goto h;
    return;
}
void xuat1(){
    system("CLS");
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(visit[i][j]==1) cout << a[i][j] << " ";
            else cout << "_" << " ";
        }
        cout << endl;
    }
}
void xuat2(){
    system("CLS");
    cout << "YOU'RE DEAD!" << endl;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(visit[i][j]==1||a[i][j]=='*') cout << a[i][j] << " ";
            else cout << "_" << " ";
        }
        cout << endl;
    }
    return;
}

void dq(int u,int v){
    if(u>=m||v>=n||u<0||v<0) return;
    if(visit[u][v]==1) return;
    if(a[u][v]=='0'){
        if(visit[u][v]!=1){
            visit[u][v]=1;
            ++dem;
        }
    }else{
        if(visit[u][v]!=1){
            visit[u][v]=1;
            ++dem;
            return;
    }}
            dq(u+1,v+1);
            dq(u+1,v-1);
            dq(u-1,v);
            dq(u-1,v-1);
            dq(u-1,v+1);
            dq(u+1,v);
            dq(u,v+1);
            dq(u,v-1);

}
void check(int u,int v){
    if(a[u][v]=='*'){
        visit[u][v]=1;
         boom=1;
        xuat2();
        return;
    }
    else{
        if(a[u][v]=='0') dq(u,v);
        else{
            visit[u][v]=1;
            ++dem;
        }


        xuat1();
    }

}

int main(){
    cin >> m >> n >> k;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            a[i][j]='0';
            cout << "_" << " ";
        }
        cout << endl;
    }
    for(int i=1;i<=k;++i){
    random();
    }
    int u,v;


        while(dem<m*n-k&&boom!=1){
        cout << "chon vi tri nhap:";
        p:
        cin >> u >> v;
        if(u>=m||v>=n||u<0||v<0){
            cout << "vi tri ko hop le, moi nhap lai:";
            goto p;
        }
        if(visit[u][v]==1){
            cout << "vi tri ko hop le, moi nhap lai:";
            goto p;
        }
        check(u,v);
        }

    if(dem>=m*n-k){
    system("CLS");
    cout << "Congratuation, you win this game." << endl;
     for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
     }
    }
}

