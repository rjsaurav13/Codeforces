#include<bits/stdc++.h>
using namespace std;
int main(){
    int tcase,count=0;
    scanf("%d",&tcase);
    while(tcase--){
        string num;
        cin>>num;
        if(num[0]=='+'||num[num.length()-1]=='+'){
            count++;
        }else if(num[0]=='-'||num[num.length()-1]=='-'){
            count--;
        }
        
    }
    printf("%d",count);
}