//C clear ver.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char s[]="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	while(scanf("%c",&c)==1){
		c=tolower(c);
		if(c==' '||c=='\n') printf("%c",c);
		else{
			c=*(strchr(s,c)-2);
			printf("%c",c);
		}
	}
}