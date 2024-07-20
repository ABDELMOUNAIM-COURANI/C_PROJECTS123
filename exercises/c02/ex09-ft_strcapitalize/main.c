#include "unistd.h"
#include "ft_strcapitalize.c"


int main (){

	char *str;
	char *r;
	

	char arr[61] = "/Apples,   uAnTe*/-+bt-+eT+un";

	str = arr;

	r = ft_strcapitalize(str);

	write (1, r, 61);

}

	
