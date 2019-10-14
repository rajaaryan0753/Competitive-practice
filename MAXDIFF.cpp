#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >>T;
    while (T--)
    {

      int N,k,counter=0,ccounter=0;
      cin >> N>>k;
      int *A= new int[N];
      for (int i=0;i<N;i++)
      {

         cin >> A[i];
         counter +=A[i];
      }
      sort(A,A+N);
      if(k>(N/2))
      {
          k=N-k;
      }
      for (int i=0;i<k;i++)
      {
       ccounter +=A[i];
      }


      counter =counter -(2*(ccounter));
      cout << counter<<endl;


    }

    return 0;
}
