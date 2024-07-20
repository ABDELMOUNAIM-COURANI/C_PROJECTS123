#include <unistd.h>

int ft_atoi(char *str){

	int i;
	int n;
	int sign;
	long integer;

	i = 0;
	n = 0;
	integer = 0;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32){

		i++;
	}

	while (str[i] == '-' || str[i] == '+'){
		
		if (str[i] == '-'){
			
			sign = -1;
		}
		
		else{
			
			sign = 1;
		
		}
		i++;
	}
	
	while (str[i] >= '0' && str[i] <= '9'){
		
		integer = integer * 10 + (str[i] - 48);

		i++;
	
	}
	
	return sign * integer;

}

int main(void){

	char *str;
	char buffer[100];
	int length;
	long r;

	str = "   ---+--+1234ab567";
	length = 0;


	r = ft_atoi(str);
	
	if (r == 0){
		
		buffer[length++] = '0';
	}
	
	if (r < 0){
		
		r *= -1;
		write(1, "-", 1);
	
	}
	
	while (r != 0){
		
		buffer[length++] = r % 10 + '0';
		r /= 10;	
	}

	while (length > 0){
		
		write (1, &buffer[--length], 1);
	
	}

}
