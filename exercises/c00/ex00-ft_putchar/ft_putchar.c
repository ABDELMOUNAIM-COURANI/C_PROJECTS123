#include <unistd.h>


int ft_putchar (char c){

	write (1,&c,1);
	write(1, "/n",1);
	return 0;
}

