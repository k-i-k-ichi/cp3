#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <stack>
#include <queue>
#include <deque>
#include <iterator>
#include <bitset>
#include <algorithm>

using namespace std;

typedef long int int32;
typedef long long int int64;
typedef unsigned long int uint32;
typedef unsigned long long int uint64;

const double pi = acos(-1.0);

#define PI 3.1415926535897932384626433832795
#define INF (int)1e9
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)


int main(){

  //freopen("input.txt","r", stdin);
  //freopen("output.txt","w", stdout);
  int n;
  scanf("%d", &n);
  int count = 0;
  while(n--){
    int p, q;
    scanf("%d%d", &p, &q);
    if ( (q - p) >= 2) count++; 
  }
  cout << count;
  return 0;
}