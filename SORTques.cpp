//Implement square root using searching.


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

int binsearch(int arr,int x) {
	int left=0;
	int right=arr;
	while(left<=right) {
		int mid = (left+right)/2;

		if(mid*mid == arr) {
			return mid;
		}
		else if(mid*mid < arr) {
			left=mid+1;
		}
		else if(mid*mid > arr) {
			right=mid-1;
		}
	}
	return -1;
}

int main() {
	fastio;tie;
	int n;
	cin>>n;
	cout<<binsearch(n,1);
	return 0;
}

