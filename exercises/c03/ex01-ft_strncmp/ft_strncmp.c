
int	ft_strncmp(char *s1, char *s2, unsigned int n) {
	
	unsigned int i;

	i = 0;

	if (n == 0){

		return(0);

	}
	
	while (i < n - 1 && (s1[i] || s2[i]) && s1[i] == s2[i]){
		
		i++;
	}

	return (s1[i] - s2[i]);

}

