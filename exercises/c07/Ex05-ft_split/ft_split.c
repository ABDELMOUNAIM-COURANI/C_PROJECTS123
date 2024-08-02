#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str){

	int i;

	i = 0;

	while (str[i] != '\0'){

		write(1, &str[i], 1);
		i++;
	}

}

char is_sep(char c, char *charset){

	int i;

	i = 0;

	while (charset[i] != '\0'){

		if (c == charset[i]){

			return (1);

		}
		i++;
	}

	return (0);

}

int ft_nofstrs (char *str, char *charset){

	int counter;
	int i;
	int j;

	i = 0;
	j = 0;
	counter = 0;

	while (str[i] != '\0'){
		
		j = 0;
		
		while(charset[j] != '\0'){
			
			if (str[i] != charset[j]){
				
				counter++;
			
			}

			else{

				return counter;

			}
			
			j++;
		
		}
		
		i++;
	
	}
	
	return counter;
}

int ft_nofseps(char *str, char *charset){

	int i;
	int sepscounter;

	i = 0;
	sepscounter = 0;

	while (str[i] != '\0'){

		while(is_sep(str[i], charset)){

			sepscounter++;
		
		}
		
		i++;
	}

	return sepscounter;

}

char **ft_split(char *str, char *charset){

	char **arr;
	int size;
	int i;
	int j;
	int word_len;
	int p;

	i = 0;
	j = 0;
	p = 0;
	word_len = 0;

	size = ft_nofseps(str, charset);

	arr = (char **)malloc((size + 1) * sizeof(char *));

	if (!arr){

		return NULL;

	}

	while (str[i] != '\0'){

		while (str[i] != '\0' && is_sep(str[i], charset)){

			i++;
		}
		
		word_len = 0;

		while (str[i] != '\0' && !is_sep(str[i], charset)){

			word_len++;
			i++;

		}

		arr[j] = (char *)malloc((word_len + 1) * sizeof(char));

		i++;
	}

	if (!arr){

		while (j > 0){

			free(arr[i - 1]);
			j--;
		}

		free(arr);
		return NULL;

	}

	while (p < size){
		
		while (word_len--){
			
			arr[p][j] = str[j];
			j++;

		}

		p++;

	}

	return arr;

}

int main(void){

	char *str;
	char *charset;
	char *r;
	
	str = "apple,banana,tomato,melon,orange";
	charset = "',;|\\?/";

	r = *ft_split(str, charset);

	ft_putstr(r);
	
}















