#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("\n----------ex00----------\n");
	char ex00_str1[] = "abcd", ex00_str2[] = "abCd", ex00_str3[] = "abcd";
	int result;

	printf("\n-Expected-\n");
	result = strcmp(ex00_str1, ex00_str2);
	printf("strcmp(str1, str2) = %d\n", result);
	result = strcmp(ex00_str1, ex00_str3);
	printf("strcmp(str1, str3) = %d\n", result);

	printf("\n-Output-\n");
	result = ft_strcmp(ex00_str1, ex00_str2);
	printf("strcmp(str1, str2) = %d\n", result);
	result = ft_strcmp(ex00_str1, ex00_str3);
	printf("strcmp(str1, str3) = %d\n", result);

	printf("\n----------ex01----------\n");
	char ex01_str1[15];
	char ex01_str2[15];
	int ex01_res;

	strcpy(ex01_str1, "abcdef");
	strcpy(ex01_str2, "ABCDEF");

	printf("\n-Expected-\n");
	ex01_res = strncmp(ex01_str1, ex01_str2, 4);

	if(ex01_res < 0) {
		printf("str1 is less than str2");
	} else if(ex01_res > 0) {
		printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}

	printf("\n-Output-\n");
	ex01_res = ft_strncmp(ex01_str1, ex01_str2, 4);

	if(ex01_res < 0) {
		printf("str1 is less than str2");
	} else if(ex01_res > 0) {
		printf("str2 is less than str1");
	} else {
		printf("str1 is equal to str2");
	}




	printf("\n----------ex02----------\n");
	char orig_str1[100] = "This is a ";
	char my_str1[100] = "This is a ";
	char str2[] = "correct example";
	strcat(orig_str1, str2);
	printf("\n-Expected-\n");
	puts(orig_str1);
	puts(str2);

	ft_strcat(my_str1, str2);
	printf("\n-Output-\n");
	puts(my_str1);
	puts(str2);


	printf("\n----------ex03----------\n");
	char ex03_src1[100] = "This is an example";
	char ex03_src2[] = "Add symbols";
	char ex03_my_src1[100] = "This is an example";
	char ex03_my_src2[] = "Add symbols";
	unsigned int nb = 100;

	strncat(ex03_src1, ex03_src2, nb);
	printf("Strncmp result: %s\n", ex03_src1);
	ft_strncat(ex03_my_src1, ex03_my_src2, nb);
	printf("My result: %s\n", ex03_my_src1);

	printf("\n------------ex04------------\n");
	char haystack[20] = "This is and example";
	char needle[10] = "";

	printf("Strstr result: %s\n", strstr(haystack, needle));
	printf("My result: %s\n", ft_strstr(haystack, needle));

	printf("\n----------ex05----------\n");
   
	char first[] = "This is ";
    char last[] = "a potentially long string";
    int orig;
    int size = 64;
    char buffer[size];

    strcpy(buffer,first);
    orig = strlcat(buffer,last,size);
	printf("\n-Expected-\n");
    puts(buffer);
    printf("Value returned: %d\n", orig);
    if( orig > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    int my;
    char my_buffer[size];

    strcpy(my_buffer,first);
    my = ft_strlcat(my_buffer,last,size);
    printf("\n-Output-\n");
    puts(my_buffer);
	printf("Value returned: %d\n", my);
    if( my > size )
        puts("String truncated");
    else
        puts("String was fully copied");


	
	return (0);
}
