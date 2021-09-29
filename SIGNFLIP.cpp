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
		int n,k;
		cin>>n>>k;
		int arr[n];
		forn(n) {
			cin>>arr[i];
		}
		sort(arr,arr+n);
		forn(k) {
			if(arr[i]>0)
				break;
			arr[i]*=-1;
		}
		sort(arr,arr+n);
		int sum=0;
		for(int i=n-1;i>=0;i--) {
			if(sum<(sum+arr[i])) {
				sum+=arr[i];
			}
		}

		cout<<sum<<'\n';
	}
	return 0;
}
