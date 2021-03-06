#include <stdio.h>

int n;
int k;
int A[100000];

int p(x){
  int work = 0;
  int human = 1;
  for (int i = 0; i<n; i++){
    if (x < A[i]) return 0;
    if (work + A[i] > x){
      human++;
      work = A[i];
    }
    else{
      work += A[i];
    }
  }
  if (human <= k) return 1;
  else return 0;
}

int bin_search(int lb, int ub){

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
  ub = 1000000000; // n_max*a_i_max = 10^9
  printf("%d\n", bin_search(lb, ub));


  return 0;
}
