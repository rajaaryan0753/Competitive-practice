#include <bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >>T;

    while(T--)
    {
     int p,counter=0;
     cin >>p;
     
      if (p>2048)
       {
        counter =(p/2048);
        p =p%2048;
       }
       while (p>0)
       {
           if ((p%2)==1)
          {
           counter +=1;
          }
         p =p/2;
      
       }
     cout <<counter<<endl;

    }
    return 0;
}

