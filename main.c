#include <unistd.h>

void my_putchar(char c) {
	char output[2] = { c, '\n' };  
	write(1, output, 2);  
}
int main() {
	my_putchar('a');
	return 0;
}
