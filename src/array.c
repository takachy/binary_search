#include <stdio.h>

int n;
int k;
int A[100000];


int bin_search(int lb, int ub){
  // int lb, ub;
  // lb = 0; 
  // ub = n-1; 
  if (A[ub] < k) return n;

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
  lb = 0;
  ub = n-1;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  int x = bin_search(lb,ub);
  printf("%d\n", x);

  return 0;
  // Atcoder みたいな問題形式ですね
}
