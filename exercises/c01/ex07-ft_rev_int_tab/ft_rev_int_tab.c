#include "stdio.h"
#include "unistd.h"


void ft_rev_int_tab(int *tab, int size){

	int i;
	int temp;

	i = '0' + 48;


	while (i < size){
		
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		
	}
}
