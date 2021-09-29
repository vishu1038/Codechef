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
		int n,odd=0,even=0;
		cin>>n;
		ll arr[n];
		forn(n) {
			cin>>arr[i];
			if(arr[i]%2==0) {
				even++;
			}
			else {
				odd++;
			}
		}
		int msum=0;
		if(n%2==0) {
			if(even==odd) {
				msum=n;
			}
			else {
				msum=n/2+min(even,odd);
			}
		}
		else {
			if(even==odd+1) {
				msum=n;
			}
			else if(even>odd) {
				msum=n/2 + 1 + odd;
			}
			else {
				msum=n/2 + even;
			}
		}
		cout<<msum<<'\n';
	}
	return 0;
}

