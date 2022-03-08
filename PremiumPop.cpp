#include<bits/stdc++.h>

using namespace std;

int main(){
  int p, n;
  stack<int> prod;
  cin >> p >> n;
  int valor = p;

  int a, b;
  for(int i = 0; i < n; i++){
    cin >> a >> b;
    int c;
    if(a == 1){
      valor += b;
      prod.push(b);
    }else if(a == 2){
      for (int j = 0; j < b; j++){
        c = prod.top();
        valor -= c;
        /* cout << "desconto, valor em " << valor << " e pop é " << c << endl; */
        prod.pop();
      }
    }
    /* cout << "valor esta em " << valor << endl; */
  }

  cout << valor << "\n";

  return 0;
}

// erro: sr.sr