#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int size=s.size();
    for(int i=0;i<size;++i){
        if(s[i]!=s[size-i-1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}