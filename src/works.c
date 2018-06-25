#include <stdio.h>

int n;
int k;
int A[100000];

int p ( int x ) {
    int c = 1 , b = 0 , i;
    for( i=0 ; i<n ; i++ ) {
        if ( A[i] > x ) return 0;
        else if ( b+A[i] <= x ) { b = b+A[i];}
        else { c = c+1;
                  b = A[i];}
    }
    if ( c <= k ) return 1;
    else return 0;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  while ( ub - lb > 1 ) {
    int m = ( lb + ub ) / 2;
    if ( p(m) ) {
        ub = m ;
    }
    else {
        lb = m ;
    }
}
printf ( "%d\n" , ub );

  return 0;
}
