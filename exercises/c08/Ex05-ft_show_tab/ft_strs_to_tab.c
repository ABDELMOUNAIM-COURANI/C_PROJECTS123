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

	while (j < i){

		ptr[j] = src[j];
		j++;

	}

	return ptr;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av){
	
	int i;
	int j;
	int str_len;
	typedef struct s_stock_str t_stock_str;
	struct s_stock_str *arr;

	i = 0;
	j = 0;
	str_len = 0;

	if (ac <= 0 || av == NULL){

		return NULL;

	}

	arr = malloc(ac * sizeof(t_stock_str));

	while (i < ac) {
		
		str_len = 0;
		
		while (av[i][str_len] != '\0'){
			
			str_len++;

		}

		arr[i].size = str_len;
		
		arr[i].str = malloc((str_len + 1) * sizeof(char));
			
		if (arr[i].str == NULL) {
			
			j = 0;

			while (j < i) {
					
				free(arr[j].str);
				free(arr[j].copy);
				j++;
			
			}
			
			free(arr);
			return NULL;
		
		}
	
		j = 0;

		while (j < str_len) {
			
			arr[i].str[j] = av[i][j];
			j++;
		
		}
		
		arr[i].str[str_len] = '\0';

		arr[i].copy = ft_strdup(arr[i].str);

		if (arr[i].copy == NULL){

			j = 0;

			while(j <= i){

				free(arr[j].str);
				free(arr[j].copy);
				j++;

			}

			free(arr);
			return NULL;

		}
		
		i++;	
	}

	return arr;
}

int main(void){

	int ac;
	
	char *av[] = {"summer", "winter", "autumn", "spring"};
	ac = sizeof(av)/sizeof(av[0]);

	ft_strs_to_tab(ac, av);
	
	return 0;
}
