#include "ft_strcpy_with_write_function.c"

int main(){

        char *src;
        char *dest;
	int size;
	
	char arr[33] = "Invite me to a hamburger banquet\0";
	char arrdest[33];
        
        src = arr;
	dest = arrdest;

	size = 33;

        *ft_strcpy(dest, src, size);

}
