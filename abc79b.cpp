#include <bits/stdc++.h>

using namespace std;

#define LIMIT 100
typedef pair<int64_t, int64_t> ii;
typedef int64_t ll;
int gcd(ll a, ll b) { return (b==0)?a:gcd(b, a%b); }
int lcm(ll a, ll b) { ll i=(a/gcd(a,b))*b; assert(i>0); return i; }

//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n; cin >> n;

  ll f[93];
  f[0] = 2;
  f[1] = 1;

  for (int i = 2; i <= 92; ++i) {
    f[i] = f[i-1] + f[i-2];
  }

  std::cout << f[n] << std::endl;

  return 0;
}
