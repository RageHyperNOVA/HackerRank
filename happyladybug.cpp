#include <bits/stdc++.h>
using namespace std;
int main()
{
int k;
cin>>k;
while(k--)
{
    int n,flag=0,bin=0;
    cin>>n;
    int i=0,cs=0,cc=0;
    char b[n];
    cin>>b;
    while(i<n)
    {
     if(int(b[i]==95)) cs++;
     for(int j=0;j<n;j++)
     {
         if(int(b[i])==int(b[j]) && int(b[i])!=95) cc++;
     }
     //cout<<"count of b["<<i<<"] is "<<cc<<endl;
     if(cc>=2 && int(b[i])!=95) 
     {bin = 1;}
     else if(cc<2 && int(b[i])!=95)
     {bin=0;
     break;
     } 
      if(cs) flag=1;
     cc=0;
     i++;   
    }
    if(cs==0 && bin==1)
     {
         for(i=0;i<n;i++)
         {
             if(b[i]!=b[i+1] && b[i]!=b[i-1])
             {bin=0;}
         }
     }
    if(cs==n) bin=1;
    if(bin==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
return 0;
}
