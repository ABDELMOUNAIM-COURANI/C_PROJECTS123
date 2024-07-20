#include "unistd.h"
#include "stdio.h"

char *ft_strcpy(char *dest, char *src, int size){

	int i;

	i = 0;
	
	while (i < size){

		if (*(src + i) != '\0'){
			dest[i] = src[i];

		} 
		else {
			dest[i] = '\0';
		}
		i++;
	}
	
	i = 0; 
	while (i < size){
		write (1, &dest[i], 1);
		i++;
	}
}

