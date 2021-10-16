#include<bits/stdc++.h>
#define ll long long int
#define fastio ios_base::sync_with_stdio(false)
#define tie cin.tie(NULL)
#define mod 1000000007
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
        int match[5];
        int ind=0,eng=0;
        forn(5) {
            cin>>match[i];
            if(match[i]==1) {
                ind++;
            }
            else if(match[i]==2) {
                eng++;
            }
        }
        if(ind>eng) {
            cout<<"INDIA\n";
        }
        else if(eng>ind) {
            cout<<"ENGLAND\n";
        }
        else {
            cout<<"DRAW\n";
        }
    }        
    return 0;
}
