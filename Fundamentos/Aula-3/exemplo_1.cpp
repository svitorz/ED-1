#include <iostream>

using namespace std;

int main(){

  int **p, // cria ponteiros de ponteiros 
  i ,j, N=2, M=3;

  p = new int*[N];

  for (i = 0; i < N; i++) {
    p[i] = new int[M];
    for (j = 0; j < M; j++) {
      cin >> p[i][j]; 
    }
  }
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      cout << p[i][j] << " "; 
    }
    cout << endl;
  }

  for(j=0; j<M; j++)
    delete[] p[j];

  delete[] p;
}
