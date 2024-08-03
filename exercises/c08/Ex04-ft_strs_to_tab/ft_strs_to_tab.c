#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

char *ft_strdup(char *src){

	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;

	while (*(src + i)){

		i++;

	}

	ptr = (char *)malloc((i + 1)* sizeof(char));

	if (ptr == NULL){

		return NULL;

	}


	while (*(src + j)){

		*(ptr + j) = *(src + j);
		j++;

	}

	*(ptr + j) = '\0';

	return ptr;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av){
	
	char **arr;
	int i;
	int j;
	int p;
	int str_len;
	struct s_stock_str t_stock_str;

	i = 0;
	j = 0;
	p = 0;
	str_len = 0;

	while (*av && i < ac - 1) {
		
		str_len = 0;
		
		while (av[i][j] != '\0'){
			
			str_len++;
			j++;
		
		}
		
		if (str_len > 0) {
			
			arr[j] = (char *)malloc((str_len + 1) * sizeof(char));
			
			if (!arr[j]) {
				
				while (j > 0) {
					
					free(arr[--j]);
				}
				
				free(arr);
				
				return NULL;
			}

			t_stock_str.size = str_len;

			p = 0;
			
			while (p < str_len) {
				
				arr[i][p] = av[i][j];
				p++;
				j++;
			
			}

			t_stock_str.str = arr[i];
			t_stock_str.copy = ft_strdup(*arr);

		}
		i++;
		av++;
	
	}

	arr[i][p] = '\0';

	

	return arr;
}

int main(void){

	char **av;
	int ac;

	av[4] = {"summer", "winter", "autumn", "spring"};
	ac = 3;

	ft_strs_to_tab(ac, av);
}
