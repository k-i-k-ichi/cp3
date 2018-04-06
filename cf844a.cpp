#include <bits/stdc++.h>

using namespace std;

#define LIMIT 100
#define PLIMIT 10000010
#define MOD 1000000007ll
#define INF 1e9
typedef long long ll;
typedef pair<ll, ll> ii;
int gcd(ll a, ll b) { return (b==0)?a:gcd(b, a%b); }
int lcm(ll a, ll b) { ll i=(a/gcd(a,b))*b; assert(i>0); return i; }
int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};

//  ***** MAIN *****
int main(){
    //ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int k; cin >> k;
    if(s.size() < k){
        std::cout << "impossible" << std::endl;
        return 0;
    }
    set<char> x;
    for(char c : s) x.insert(c);
    std::cout << max(k-(int)x.size(), 0) << std::endl;

  return 0;
}

