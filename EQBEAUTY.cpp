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
        int n;
        cin>>n;
        ll a[n];
        forn(n) {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        ll move;
        if(n%2==0) {
            move=abs((a[0]-a[(n/2)-1])-(a[n/2]-a[n-1]));
        }
        else {
            if(abs((a[0]-a[(n/2)-1])-(a[n/2]-a[n-1])) >= abs((a[0]-a[n/2])-(a[(n/2)+1]-a[n-1])) ) {
                move=abs((a[0]-a[n/2])-(a[(n/2)+1]-a[n-1]));
            }
            else {
                move=abs((a[0]-a[(n/2)-1])-(a[n/2]-a[n-1]));
            }
        }
        cout<<move<<'\n';
    }
    return 0;
}