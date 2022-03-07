#include <stdio.h>


int fac(int n) {
	if (n <= -1) {
		return -1;
	} else {
		if (n > 1) {
			return n*fac(n-1);
		} else {
			return 1;
		}
	}
}

int  main() {

	int n,k, bk;
	printf("Eingabe von n und k\n");
	scanf("%d%d", &n,&k);
	bk = fac(n) / (fac(k) * fac(n-k));
	printf("Binomialkoeffizient von %d über %d = %d\n", n,k,bk);

}