#include <bits/stdc++.h>

using namespace std;
int main()
{ 
    int n,m,s,t,f=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>m>>s;
        if(!((m+s-1)%n))
            cout<<n<<endl;
        else 
            cout<<((m+s-1)%n)<<endl;
    }
    return 0;
}
