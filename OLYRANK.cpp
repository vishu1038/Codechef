#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define tie cin.tie(NULL)
#define mod 1000000007
#define X first
#define Y second
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define forn(n) for(ll i=0;i<n;i++)
#define forin(n1,n2) for(ll i=n1;i<n2;i++)
using namespace std;

int main() {
	fastio;tie;
	int t;
	cin>>t;
	while(t--) {
		int g1,g2,s1,s2,b1,b2;
		cin>>g1>>s1>>b1>>g2>>s2>>b2;
		int m1=g1+s1+b1;
		int m2=g2+s2+b2;
		if(m1>=m2) {
			cout<<"1\n";
		}	
		else {
			cout<<"2\n";
		}
	}
	
	return 0;
}

