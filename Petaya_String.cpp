#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[100],s2[100];
    cin>>s1>>s2;
    strlwr(s1);
    strlwr(s2); 
    
    for(int i=0; i<sizeof(s1); i++)
        {
            if(s1[i]>s2[i])
                {
                    cout<<"1\n";
                    return 0;
                }
            if(s1[i]>s2[i])
                {
                    cout<<"-1\n";
                    return 0;
                }
        }
        cout<<"0\n";
}    