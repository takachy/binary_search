#include <stdio.h>

int n;
int k;
int A[100000];


int bin_search(int lb, int ub){
  while(ub - lb > 1) {
    int mid = (lb + ub) / 2;

    if(A[mid] >= k){
      ub = mid;
    }
    else {
      lb = mid;
    } 
  }

  return ub;
}


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = -1;
  ub = n;

  int x = bin_search(lb,ub);
  printf("%d\n", x);

  return 0;
  // Atcoder みたいな問題形式ですね
}
