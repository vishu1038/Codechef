#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define tie cin.tie(NULL)
#define MOD 1000000007
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define forn(n) for(ll i=0;i<n;i++)
#define forin(n1,n2) for(ll i=n1;i<n2;i++)
using namespace std;

int main() {
	fastio;tie;
	int s;
	cin>>s;
	while(s--) {
		int n;
		cin>>n;
		int h[n];
		forn(n) {
			cin>>h[i];
		}
		if(n%2==0) {
			cout<<"no\n";
			continue;
		}
		if(h[0]!=1 || h[n-1]!=1) {
			cout<<"no\n";
			continue;
		}
		int flag=1;
		forin(1,n) {
			if(i<=n/2 && h[i]!=h[i-1]+1) {
				flag=0;
				break;
			}
			if(i>n/2 && h[i-1]!=h[i]+1) {
				flag=0;
				break;
			}
		}
		if(flag) {
			cout<<"yes\n";
		}
		else {
			cout<<"no\n";
		}
	}
}
