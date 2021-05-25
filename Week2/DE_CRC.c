#include<stdio.h>
#include<string.h>
#define N strlen(g)
char t[28], cs[28], g[30],o[28];
int l,a,e,c,flag=0;
void exor()
{
	for(c=1;c<N;c++)
		cs[c]=((cs[c]==g[c])?'0':'1');
}
void crc()
{
	for(e=0;e<N;e++)
		cs[e]=t[e];
    do
    {
        if(cs[0]=='1')
            exor();
        for(c=0;c<N-1;c++)
            cs[c]=cs[c+1];
        cs[c]=t[e++];
    }
    while(e<=l);
}

int main()
{
	printf("\nEnter Received Data:");
	scanf("%s",t);
	l= strlen(t);
	printf("\nEnter generating polynomial in binary:");
	scanf("%s",g);
	crc();
	printf("\nChecksum is:%s",cs);
	for(e=0;e<N-1;e++)
    {
       if(cs[e]!='0')
        flag+=1;
    }
    if(flag!=0)
        printf("\nErrors caused during transmission!");
    else
    {
        printf("\nData Received without errors");
        for(e=0;e<l-N+1;e++)
            o[e]=t[e];
        printf("\nData word is: %s", o);
    }
	return 0;
}





