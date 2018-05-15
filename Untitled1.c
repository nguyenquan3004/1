#include <conio.h>

int f(int a, int b){
	return a + b;
}
int main(){
	int b = 10;
	int x = 10;
	printf("%d", f(x++,x));
	return 0;
}

