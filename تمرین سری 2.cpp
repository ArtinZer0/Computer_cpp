//1
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int N=n;
    for (int i=1,j=1;i<=n;n--,j=j+2)
    {
      for (int a=1;a<=(2*n-2)/2;a++)
      {
        cout<<" ";
      }
      for(int b=1;b<=j;b++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
    for (int x=1;x<=N;x++)
    {
      for(int q=1;q<=x;q++)
      {
        cout<<" ";
      }
      for (int p=1,Q=2*(N-x)-1;p<=Q;p++)
      {
        cout<<"*";
      }
      cout<<endl;
    }
}
//2
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int S=1;
    for(int j=1;j<=i;j++)
    {
      S*=j;
      
    }
    cout<<S<<endl;
  }
}
//3
#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  for ( int i=1;n>=i;i++)
  {
    for (int a=n-i,j=1;a>=j;j++)
    {
      cout<<" ";
    }
    for (int b=1;b<=i;b++)
    {
      if (b!=i)
      {
        
        cout<<b<<" ";
      }
      else
      {
        cout<<b;
      }
    }
    cout<<endl;
  }
}

//4

  #include <iostream>
using namespace std;
int main() 
{ 
  int n;
  cin>>n;
  if (n%2==0)
  {
    for(int i=1,o=n-2;i<=n/2;i++,o=o-2)
    {
      for(int a=i-1;a>=1;a--)
      {
        cout<<" ";
      }
      cout<<"x";
      for(int b=1;b<=o;b++)
      {
        cout<<" ";
      }
      cout<<"x ";
      cout<<endl;
    }
    for(int i=n/2,o=0;i>=1;i--,o=o+2)
    {
      for(int a=i-1;a>=1;a--)
      {
        cout<<" ";
      }
      cout<<"x";
      for(int b=1;b<=o;b++)
      {
        cout<<" ";
      }
      if(i!=1)
      {
        cout<<"x ";
      }
      else
      {
        cout<<"x";
      }
      cout<<endl;
    }
    
  }
  else
  {
    for (int i=1;i<=(n-1)/2;i++)
    { 
      for(int f=i-1,s=1;f>=s;s++)
      {
        cout<<" ";
      }
      cout<<"x";
      for(int a=n-(2*(i)),b=1;a>=b;b++)
      {
        cout<<" ";
      }
      cout<<"x ";
      cout<<endl;
    }
    for(int e=(n-1)/2;e>=1;e--)
    {
      cout<<" ";
    }
    cout<<"x ";
    cout<<endl;
    for(int i=(n-1)/2;i>=1;i--)
    {
      for(int f=i-1,s=1;f>=s;s++)
      {
        cout<<" ";
      }
      cout<<"x";
      for(int a=n-(2*(i)),b=1;a>=b;b++)
      {
        cout<<" ";
      }
      if(i!=1)
      {
        cout<<"x ";
      }
      else
      {
        cout<<"x";
      }
      cout<<endl;
    }
  }
}
