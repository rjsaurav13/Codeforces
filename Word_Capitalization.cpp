#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    string str;
    cin>>str;
    char ch=toupper(str[0]);
    cout<<ch;
    cout<<str.substr(1, str.length()-1);
}