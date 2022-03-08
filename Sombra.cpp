#include<bits/stdc++.h>

using namespace std;

int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  vector<int> km(k, 0);
  int receive, noSombra = 0;
  
  for(int i = 0; i < n; i++){
    scanf("%d", &receive);
    km[receive-1] = 1;
  }

  /* cout << "a km ficou "; */
  for(int i = 0; i < k; i++){
    /* cout << "posicao " << i << ", " << km[i] << "\n"; */
    if(i == 0 && km[i] == 0){
      noSombra++;
    }else if(km[i] == 0 && km[i-1] != 0){
      noSombra++;
    } 
  }

  printf("%d\n", noSombra);

  return 0;
}

// erro: sr.sr