#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2) 
{
	char *concat_str;
	int concat_index = 0;
	int len_s1 = 0;
	int len_s2 = 0;
	int index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	while (s1[len_s1] != '\0')
		len_s1++;
			    	
	while (s2[len_s2] != '\0')
		len_s2++;

	concat_str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
			    
	if (concat_str == NULL)
		return NULL;			                                                

	for (index = 0; index < len_s1; ++index)
		concat_str[concat_index++] = s1[index];
			                                                                                                
	for (index = 0; index < len_s2; ++index) 
		concat_str[concat_index++] = s2[index];

	return (concat_str);
}
