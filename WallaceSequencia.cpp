#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
  int nQuestoes;
  int n1, n2, n3, n4, n5, n6, n7;

  scanf("%d", &nQuestoes);
  int array [nQuestoes] [3];

  for (int i = 0; i < nQuestoes; i++){
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
    array[i][0] = n1;
    array[i][1] = n2;
    array[i][2] = n7-(n1+n2);

/*     printf("teste n: %d %d %d\n", n1, n2, n7);
    printf("teste array: %d %d %d\n", array[i][0], array[i][1], array[i][2]); */
  }


  for (int i = 0; i < nQuestoes; i++){
    
    printf("%d %d %d\n", array[i][0], array[i][1], array[i][2]);

  }


  return 0;
}
