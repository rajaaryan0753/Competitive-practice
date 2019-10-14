#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n1,n2,m;
        cin>>n1>>n2>>m;
        long long minimum=min(n1, min(n2, m*(m+1)/2));
        cout<<(n1+n2-2*minimum)<<endl;
    }
	return 0;
}
