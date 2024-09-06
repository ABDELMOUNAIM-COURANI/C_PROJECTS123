#include "ft_stock_str.h"
#include "ft_strs_to_tab.c"

void ft_show_tab(struct s_stock_str *par){
	
	int i;
	int j;
	int l;
	int num;
	int ac;
	struct s_stock_str *result;
	char buffer[10];

	i = 0;
	j = 0;
	l = 0;

	result = par;
	
	ac = sizeof(par);

	while (i < ac){

		write(1, result[i].str, result[i].size);
		write(1, "\n", 2);
		
		if (result[i].size >= 48 && result[i].size <= 57){
			
			num = result[i].size;
			
			if (num == 0){
				
				write(1, "0", 1);
			}
			
			if (num < 0){
				
				write(1, "-", 1);
				num = -num;
			}
			
			while (num > 0) {
				
				buffer[j++] = (num % 10) + '0';
				num /= 10;
			}
			
			while (j > 0){
				
				write(1, &buffer[--j], 1);
			}

		}
		
		else{
			
			l = 0;
			
			while (result[i].size != '\0'){
				
				l++;
			}
			
			write(1, &num, l);

		}

		write(1, "\n", 2);

		write(1, result[i].str, result[i].size);
		write(1, "\n", 2);
		i++;

	}
}
