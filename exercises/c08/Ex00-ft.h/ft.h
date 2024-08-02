#include <unistd.h>

void ft_putchar (char c){

	write (1,&c,1);

}

void ft_swap (int *a, int *b){

	int n;

	n = *a;

	*a = *b;
	
	*b = n;

}

void ft_putstr(char *str){
	
	while (*str != '\0'){
		
		ft_putchar(*str);
		
		str++;
	}		
}

int ft_strlen (char *str){

	int temp;
	temp = 0;

	while (*str != '\0'){

		temp++;

	}
	return temp;

}

int	ft_strcmp(char *s1, char *s2) {
	
	int	 i;

	i = 0;
	
	while ((s1[i] || s2[i]) && s1[i] == s2[i]){
		
		i++;

	}

	return (s1[i] - s2[i]);

}
