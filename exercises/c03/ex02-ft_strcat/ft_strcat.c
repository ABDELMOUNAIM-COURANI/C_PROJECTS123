
char *ft_strncat(char *dest, char *src){
	
	size_t dest_len;
	size_t i;

	dest_len = 0;
	i = 0;

	while (dest[dest_len] != '\0'){

		dest_len++;

	}
	
	while (src[i] != '\0'){
		
		dest[dest_len + i] = src[i];

		i++;
	}

	
	dest[dest_len + i] = '\0';
	
	return dest;

}


