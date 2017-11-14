#include <iostream>
#include <assert.h>
#include <iostream>
#include <assert.h>
#include <stdio.h>
#include <cmath>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <list>
#include <unordered_map>
#include <sstream>
#include <stack>
#include <queue>
#include <deque>
#include <iterator>
#include <bitset>
#include <algorithm>
#include <tuple>
#include <functional>
#include <ctime>

using namespace std;
typedef long int int32;
typedef long long int int64;
typedef unsigned long int uint32;
typedef unsigned long long int uint64;
const double pi = acos(-1.0);

#define PI 3.1415926535897932384626433832795
#define INF (int)1e9
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define LOOP(n) for (int z = 0; z < n; ++z)
#define MAX(a, b) ( (a > b ) ? a : b )
#define MIN(a, b) ( (a < b ) ? a : b )

void swap(int* a, int *b){
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;
}

//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  int n;
  string s;
  cin >> n >> s;

  int count = 0, code =0;

  vector<int> encode;
  s.push_back('W');

  for(int i = 0; i<s.size(); ++i){
    if (s[i] == 'B'){
      code++;
    }
    else if (code > 0 && s[i] == 'W'){
      count++;
      encode.push_back(code);
      code = 0;
    }

  }

  cout << count << endl;
  for(int i = 0; i < encode.size(); ++i){
    cout << encode[i];
    if (i < encode.size() -1) cout << " ";
    else cout << endl;
  }
  return 0;
}

