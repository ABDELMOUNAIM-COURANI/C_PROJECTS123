#include <stddef.h>
#include <unistd.h>

void ft_putstr(char *str){

	int i;

	i = 0;

	while (str[i] != '\0'){

		write(1, &str[i], 1);
		i++;
	}

}

int main(void){

	char *str;
	
	str = "this string is your way to pass this exercise";
	
	ft_putstr(str);

}
