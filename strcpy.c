char * strcpy(char * str_dest, const char * str_src)
{
	char * str_dest_cpy = str_dest;

	if ((NULL == str_dest)||(NULL == str_src)){
		printf("Invalid argument(s)");
	}

	while ((*str_dest++ = *str_src++) != '\0'){
		;
	}

	return str_dest_cpy;
}

