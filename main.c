#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x1, y, z, m;
	int a, b, c;
	
	x1 = 1;
	z = 3;
	a = 3;
	b = 4;
	c = 5;
	
	y = a*x1*x1 + b*x1 + c;
	m = (x1 + y + z)/3;
	
	printf("y=%d, m=%d\n\n", y, m);
	
	
	int x2 = 3;
	int cond1, cond2;
	
	cond1 = 2 < x2 && x2 < 5;
	cond2 = x2 > 1 || x2 < 4 && x2 > 3;
	
	printf("cond1=%d,cond2=%d", cond1, cond2);
	
	return 0;
}
