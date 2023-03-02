#include <bits/stdc++.h>
using namespace std;
map <string,bool> check;
int main(){
    int n;
    cin >> n;
    string s;
    for(int i=1;i<=n;++i){
         cin >> s;
         if(s.size()%2!=0){
        string ss = "";
        for(int i=s.size()-1;i>=0;--i){
            ss+=s[i];
        }
         if(check[s]==1||check[ss]==1){
            cout << s.size() << " " << s[s.size()/2];
             return 0;
        }else{
            check[s]=1;
            check[ss]=1;
        }
    }
}
}