#include <conio.h>

int f(int a, int b){
	return a + b;
}
int main(){

	int x = 100;
	x = 10;
	int b = 10;
	printf("%d", f(x++,x));
	return 0;
}

