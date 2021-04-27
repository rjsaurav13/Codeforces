#include<bits/stdc++.h>
using namespace std;
int main(){
   
    int len,k,count=0;
    scanf("%d%d",&len,&k);
    int num[len];
    for(int i=0;i<len;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<len;i++){
		if(num[i]>=num[k-1]&&num[i]!=0){
			count++;
		}
	}
    cout<<count;

}