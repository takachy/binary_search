#include <stdio.h>

int n;
int k;
int A[100000];

int p(x){
  int num = 0;
  for (int i = 0; i<n; i++){
    num += (A[i] / x);
  }
  if (num >= k) return 1;
  else return 0;
}

int bin_search(int lb, int ub){

  while(ub - lb > 1) {
    int mid = (lb + ub) / 2;
    if(p(mid) == 0){
      ub = mid; 
    }
    else {
      lb = mid;
    } 
  }

  return lb;
}



int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000001; // = 10^9 + 1
  printf("%d\n", bin_search(lb, ub));


  return 0;
}
