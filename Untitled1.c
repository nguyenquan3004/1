#include <conio.h>

int f(int a, int b){
	return a + b;
}
int main(){

	int d = 4;

	int x = 10;
	printf("%d", f(x++,x));
	printf("haha");
	return 0;
}

