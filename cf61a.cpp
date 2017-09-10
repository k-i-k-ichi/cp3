#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
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

using namespace std;

typedef long int int32;
typedef long long int int64;
typedef unsigned long int uint32;
typedef unsigned long long int uint64;

const double pi = acos(-1.0);

#define PI 3.1415926535897932384626433832795
#define INF (int)1e9
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define MAX(a, b) ( (a > b ) ? a : b )
#define MIN(a, b) ( (a < b ) ? a : b )


int main(){
  freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdin);
  char c = getchar();
  bool one[100]; 
  int count=0;
  while (c != '\n'){
    one[count] = c - '0';
    count++;
    c = getchar();
  }
  for(int i=0; i<count;i++){
    c = getchar();
    cout <<( one[i] ^ (c -'0'));
  }
  return 0;
}
