# include <stdio.h>
int main()
{
    int n, fifty, five, one;
    scanf("%d",&n);

    fifty= n/50;
    five= n%50/5;
    one= n%5;

    printf("%d=50*%d+5*%d+1*%d\n",n,fifty,five,one);
}