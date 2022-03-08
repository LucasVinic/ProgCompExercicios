#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int useSocks(int i, int j, int diasTotaisMaintain, int days){
  int diasTotais = diasTotaisMaintain;
  diasTotais = diasTotais+i;
  if(days+i >= j){
    int newSocks = (days+i)/j;
    int daysLeft = (days+i)%j;
    useSocks(newSocks, j, diasTotais, daysLeft);
  }else{
    return diasTotais;
  }

}

int main(){
  int n, m;
  scanf("%d %d", &n, &m);

  int resul = useSocks(n, m, 0, 0);
  printf("%d\n", resul);
  return 0;
}

/*
22 2
---------
22 dias, 11 pares, 0 dias de sobra 
11 2
11 dias, 5 pares, 1 dia de sobra
5 2
5 dias, 3 pares, 0 dias de sobra
3 2
3 dias, 1 par, 1 dia de sobra
1 2
1 dia, 1 par, 0 dias de sobra
1 2
1 dia, 0 pares, 0 dias de sobra
43
*/