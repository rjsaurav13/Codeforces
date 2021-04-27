#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase,count=0;
    scanf("%d",&tcase);
    while(tcase--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c>=2){
            count++;
        }
        
    }
    printf("%d",count);

}