#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
  int n, g, f, c;
  cin >> n >> g >> f >> c;

/*   int minTalher = min(g, f);
  int totalTalher = minTalher+c;

  cout << min(totalTalher, n); */

  cout << min(min(g, f)+c, n) << "\n";

  return 0;
}


/*
1 4   -> 3 12
3 10  -> 3 10

2 3   -> 6 9
3 5   -> 6 10
*/