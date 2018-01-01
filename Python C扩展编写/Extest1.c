#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fac(int n){
	if(n<2)
		return 1;
	return n*fac(n-1);
}

char *reverse(char *s){
	register char t,
				*p = s,
				*q = s+strlen(s)-1;
	while(p<q){
		t = *p;
		*p++ = *q;
		*q-- = t;
	}
	return s;
}

int main()
{
	char s[BUFSIZ];

	printf("4! == %d\n",fac(4));
	printf("8! == %d\n",fac(8));
	printf("16! == %d\n",fac(16));

	printf("%d\n", BUFSIZ);

	strcpy(s,"abcdef");
	printf("%s\n",reverse(s));

	return 0;
}