/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
int main()
{ int n,m,s,t,f=0;
  cin>>t;
  for(int i=0;i<t;i++){
      cin>>n>>m>>s;
      if(!((m+s-1)%n))
      cout<<n<<endl;
      else 
      cout<<((m+s-1)%n)<<endl;
  }

return 0;
}
