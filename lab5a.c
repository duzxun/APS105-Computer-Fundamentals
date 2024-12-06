#include <stdio.h>
#include <math.h>
int getPairDivisor(int n,int q, int *mAddress,int* pAddress) {
	int i;
	for (i = 1; i <= sqrt(n); i++) {
		int t = n / i;
		if (n % i == 0 && q - i == t) {
			*mAddress = i;
			*pAddress = t;
			break;
		}
	}

	if(n%i !=0 || mAddress<=0 || pAddress<=0){
		return(0);
	}
	
}
int main (void){

	int n,q,m,p;
	printf("Please enter an input number n: ");
	scanf_s("%d",&n);	

	printf("Please enter a query number q: ");
	scanf_s("%d",&q);

	getPairDivisor(n,q,&m,&p);
	int g = getPairDivisor(n, q, &m, &p);

	if(g==0) {
		printf("The program could not find any pair divisors for these inputs");
	}
	else {
		printf("m = %d, p = %d, m*p = %d, and m+p = %d", m, p, n, q);
	}
	
	
	return(0);

}
