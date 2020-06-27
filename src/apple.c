#include <stdio.h>

int n;
int k;
int A[100000];

int p(x){
  int bag = 0;
  for (int i = 0; i<n; i++){
    bag += (A[i] / x);
    if (A[i] % x != 0){
      bag++;
    }
  }
  if (bag <= k) return 1;
  else return 0;
}

int bin_search(int lb, int ub){
  // int lb, ub;
  // lb = 0;
  // ub = 100000; 

  while(ub - lb > 1) {
    int mid = (lb + ub) / 2;
    if(p(mid)){
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
  lb = 0;
  ub = 100000;

  printf("%d\n", bin_search(lb, ub));

  return 0;
}
