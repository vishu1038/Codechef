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
        string s;
        cin>>s;
        int upper=0,lower=0;
        forn(s.length()) {
            if(isupper(s[i])) {
                upper++;
            }
            else {
                lower++;
            }
        }
        if(upper<=k && lower<=k) {
            cout<<"both\n";
        }
        else if(upper<=k) {
            cout<<"chef\n";
        }
        else if(lower<=k) {
            cout<<"brother\n";
        }
        else {
            cout<<"none\n";
        }
    }
    return 0;
}