#include<bits/stdc++.h>

using namespace std;

int main(){
  unsigned long long int a;
  cin >> a;
  int numLog  = log2(a);
  unsigned long long int mask    = pow(2, (numLog+1)) - 1; 

  unsigned long long int b = ~a&mask;

  printf("%llu %llu\n", a, b);

  return 0;
}
