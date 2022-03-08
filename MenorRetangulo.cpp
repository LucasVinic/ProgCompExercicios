#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
  int n;
  int m;
  int checkOne = 0;
  cin >> n >> m;

  char seq[n][m];

  int minX = n;
  int maxX = 0;
  int minY = m;
  int maxY = 0;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> seq[i][j];

      if(minX == n && seq[i][j] == '1'){
        minX = min(i, minX);
      }else if(minX != n && seq[i][j] == '1'){
        maxX = max(i, maxX);
      }
      if(minY == m && seq[i][j] == '1'){
        minY = min(j, minY);
      }else if(minY != m && seq[i][j] == '1'){
        maxY = max(j, maxY);
      }
      if(seq[i][j]=='1'){
        checkOne = 1;
      }
    }
  }

/*   cout << "valores: minX = " << minX << " maxX = " << maxX << " minY = " << minY << " maxY = " << maxY << "\n";  */
  if(checkOne == 1){
    cout << (max(maxY,minY)-min(maxY, minY))+1 << "x" << (max(maxX,minX)-min(maxX, minX))+1 << "\n";
  }else{
    cout << "0x0\n";
  }
  return 0;
}


/*
1 4   -> 3 12
3 10  -> 3 10

2 3   -> 6 9
3 5   -> 6 10
*/