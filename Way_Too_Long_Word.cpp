#include<bits/stdc++.h>
using namespace std;
int main(){
    int tcase;
    scanf("%d",&tcase);
    while(tcase--){
        string str;
        cin>>str;
        int len=str.length();
        if(len>10){
            cout<<str[0]<<len-2<<str[len-1]<<"\n";
        }else{
            cout<<str<<"\n";
        }

    }
}