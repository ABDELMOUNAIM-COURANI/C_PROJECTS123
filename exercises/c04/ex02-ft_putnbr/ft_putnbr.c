#include <unistd.h>

void ft_putnbr(int nb){

	long nbr;
	int buffer[10];
	int i;

	nbr = nb;

	i = 0;

	if (nbr == 0){

		write(1, "0", 1);

	}

	if (nbr < 0){

		nbr *= -1;
		write (1, "-", 1);

	}

	while (nbr != 0){

		buffer[i++] = (nbr % 10) + '0';
		nbr /= 10;

	}

	while (i >= 0){
		
		write (1, &buffer[--i], 1);

	}

}

int main (void){

	ft_putnbr(42);
	write (1,"\n",1);
	ft_putnbr(-4623);
	write (1,"\n",1);
	ft_putnbr(-49494949);
	write (1,"\n",1);
	ft_putnbr(123);
	write (1,"\n",1);


}

	
