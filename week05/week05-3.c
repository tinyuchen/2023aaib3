#include <stdio.h>
#include <string.h> //step5: strchr(s,c) not used here!
#include <ctype.h>  //step4: tolower(c)
int main()
{
	//step3: keyboard keys
	char s[]="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	
	char c;
	
	//step1: input
	while(scanf("%c",&c)==1){
		c=tolower(c); //step4
		if(c==' '||c=='\n') printf("%c",c);
		else{
			for(int i=0;s[i]!=0;i++){  //step5
				if(c==s[i]) printf("%c",s[i-2]);
			}
		}
		//printf("%d",c);  //step2: output
	}
}