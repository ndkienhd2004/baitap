#include <bits/stdc++.h>
using namespace std;
void reversee(char a[]){
    int length=0;
    while(a[length]!='\0') ++length;
    for(int i=0;i< length/2;++i){
        char c= a[i];
        a[i]=a[length-i-1];
        a[length-i-1]=c;
    }
    return;
}
void del(char a[], char c){
    int length=0;
    while(a[length]!='\0') ++length;
    for(int i=0;i<length;++i){
        if(a[i]==c){
            for(int j=i;j<length-1;++j){
                a[j] = a[j+1];
            }
            length--;
            i--;
        }
    }
    a[length]='\0';
    return;
}
void pad_right(char a[],int n){
    int length=0;
    while(a[length]!='\0') ++length;
    if(length < n){
        for(int i=length;i<n;++i){
            a[i]='_';
        }
    }
    a[n]='\0';
    return;
}
void pad_left(char a[], int m){
     int length=0;
    while(a[length]!='\0') ++length;
    if(length<m){
        int j=length-1;
        for(int i=m-1;i>=m-length;--i){
            a[i]=a[j];
            j--;
        }
        a[m]='\0';
        for(int i=0;i<m-length;++i){
            a[i]='_';
        }
    }
    return;
}
void truncate(char a[],int x){
    int length=0;
    while(a[length]!='\0') ++length;
    if(length>x) a[x]='\0';
}
bool is_palindrome(char a[]){
    int length=0;
    while(a[length]!='\0') ++length;
    for(int i=0;i<=length/2;++i){
        if(a[i]!=a[length-i-1]) return false;
    }
    return true;
}
void trim_left(char a[]){
    int length=0;
    while(a[length]!='\0'){
       ++length;
    }
    for(int i=length-1;i>=0;--i){
        if(a[i]!='_') {a[i+1]='\0';
        break;
    }
    }
return;
}
void trim_right(char a[]){
    int length=0;
    while(a[length]!='\0'){
       ++length;
    }
    int cnt=0;
    for(int i=0;i<length;++i){
        if(a[i]!='_') break;
        cnt++;
    }
        int j=0;
    for(int i=cnt;i<length;++i){
        a[j]=a[i];
        j++;
    }
    a[length-cnt]='\0';
    return;
}

int main(){
char *a;
a = new char[1001];
cin >> a;
reversee(a);
cout << a<< endl;
char c;
cin >> c;
del(a,c);
cout << a<< endl;
int n;
cin >> n;
pad_right(a,n);
cout << a<< endl;
int m;
cin >> m;
pad_left(a,m);
cout << a << endl;
int x;
cin >> x;
truncate(a,x);
cout << a << endl;
if(is_palindrome(a)==1) cout << "True";
else cout << "false";
trim_left(a);
cout << a << endl;
trim_right(a);
cout << a << endl;
}

