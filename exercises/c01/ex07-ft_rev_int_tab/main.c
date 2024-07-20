#include "ft_rev_int_tab.c"

int main(){

        int *tab;
        int size;
	int i;

	i = 0;
	
	int arr[9] = {1,2,3,4,5,6,7,8,9};

        size = sizeof(arr) / sizeof(arr[0]);

	tab = arr;

        ft_rev_int_tab(arr, size);
	
	while (i < size) {
		write(1, &arr[i], sizeof(int));
		i++;
	}
	
	write(1, "\n", 1);
	
	return 0;
}
