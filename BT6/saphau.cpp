#include <bits/stdc++.h>
using namespace std;
int table[1001];
int n;
bool check(int x,int y){
    for(int i=1;i<=x;++i){
        if(table[i]==y||abs(i-x)==abs(table[i]-y)) return false;
    }
    return true;
}
void output(){
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(j==table[i]) cout << "*"<< " ";
            else cout << "." << " ";
    }
    cout << endl;
}
cout << endl;
    return;
}

void test(int i){
    for(int j=1;j<=n;++j){

        if(check(i,j)==1){
            table[i]=j;
            if(i==n) output();
            test(i+1);
    }
    }
}

int main(){
    cin >> n;
    test(1);
    return 0;
}
