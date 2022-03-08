#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
  int nQuestoes;
  float acertos = 0;
  char resp, correta;

  scanf("%d", &nQuestoes);

  for (int i = 0; i < nQuestoes; i++){
    cin >> resp >> correta;

    if(resp == correta){
      acertos++;
    }
  }

  acertos = acertos/nQuestoes;
  printf("Nota: %.2f\n", acertos*10);

  return 0;
}
