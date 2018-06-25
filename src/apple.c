#include <stdio.h>

int n;
int k;
int A[100000];

int p ( int x ) {
	
	int b , d , i;
	
	b = 0;
	for( i=1 ; i <= n ; i++){
	d = A[i] / x;
	if ( d > 0 ) {b = b+d+1;}
	else { b = b+d ;} }
	 
	if ( d > k ) return 0;
	else return 1; 
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 10^9;
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
