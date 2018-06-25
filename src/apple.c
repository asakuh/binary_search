#include <stdio.h>

int n;
int k;
int A[100000];

int p ( int x ) {
	int b = 0 , c , d , i;
	for( i=0 ; i < n ; i++){
	d = A[i] / x;
	c = A[i]%x;
	if ( c > 0 ) {b = b+d+1;}
	else { b = b+d ;} 
	}
	if ( b > k ) return 0;
	else return 1; 
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
