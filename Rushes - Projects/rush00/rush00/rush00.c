#include <unistd.h>
#include "ft_putchar.c"

int top (int x, int y){
	
	int i;

	i = 0;

	while (i < y - 2 || i < 1){
		
		ft_putchar('o');
		
		while (i < x - 2){

			ft_putchar('-');
			
			i++;
		}

		if(x == 1){
			
			y = 1;

		}

		else { 
			
			ft_putchar('o');

		}

		i++;

	}

	ft_putchar('\n');
	
	return (0);

}

int middle(int x, int y){
	
	int i;
	int j;

	i = 0;
	
	
	while (i < y - 2) {
		
		ft_putchar('|');

		j = 0;
		while (j < x - 2){
			
			ft_putchar(' ');
			j++;
		}	
		
		if (x != 1){
			
			ft_putchar('|');

		}
		
		ft_putchar('\n');
		
		i++;
	}
	
	return (0);
	
}

int bottom(int x, int y){

	int i;

	i = 0;

	while (i < y - 2){
		
		ft_putchar('o');

                while (i < x - 2){

                        ft_putchar('-');

                        i++;
                }

                if (x == 1){
			
			y = 1;
		
		}
		else{

			ft_putchar('o');

		}
		
		i++;
	}
	
	return (0);

}

int rush (int x, int y){
	
	top(x,y);	
	
	middle(x,y);

	bottom(x,y);

	ft_putchar('\n');
		
	return (0);

}
