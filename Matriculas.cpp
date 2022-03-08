#include<bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  string aux;
  vector<pair<string, int>> nomes(n);
  int res[n];

  for(int i = 0; i < n; i++){
    cin >> aux;
    nomes[i].first = aux;
    nomes[i].second = i;
  }

  sort(nomes.begin(), nomes.end());

  for(int i = 0; i < n; i++){
    res[nomes[i].second] = i;
  }

  for(int i = 0; i < n; i++){
    cout << res[i] << " ";
  }
  cout << "\n";

  return 0;
}
