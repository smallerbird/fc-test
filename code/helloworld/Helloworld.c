#include <conio.h>
void main()
{
	unsigned int i;
	cprintf("Hello World!");
	for (i = 1; i < 256; i ++) {
		cprintf("%c", (char)i);
	}
	while(1){}
}