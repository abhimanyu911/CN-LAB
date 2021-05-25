#include <stdio.h>
#include <stdlib.h>

void parity(int n, int a[100])
{
   int i, p[100];
   for(i=0;i<n;i++)
   {
       p[i] = 0;
   }

   p[2] = a[0];
   for(i=1;i<4;i++)
   {
       p[i+3] = a[i];
   }
   for(i=4;i<n;i++)
   {
       p[i + 4] = a[i];
   }
   printf("\nParity bits are: ");
   if((a[0] + a[1] +  a[3] + a[4] + a[6])%2 == 0)
       p[0] = 0;
   else
       p[0] = 1;
   printf("%d", p[0]);

   if((a[0] + a[2] + a[3] + a[5] + a[6])%2 == 0)
       p[1] = 0;

   else
       p[1] = 1;
   printf("%d", p[1]);

   if((a[1] + a[2] + a[3] + a[7])%2 == 0)
       p[3] = 0;
   else
       p[3] = 1;
   printf("%d", p[3]);

   if((a[4] + a[5] + a[6] + a[7])%2 == 0)
      p[7] = 0;
   else
       p[7] = 1;
   printf("%d", p[7]);
   printf("\nFinal Codeword is: \n");

   for(i=n-1;i>=0;i--)
   {
       printf("%d", p[i]);
   }
}


int main()
{
    int m, r, i, n, input[100], b[100];
    m = 8;
	printf("\nPlease enter the Data Word:\n");
	for(i=m-1;i>=0;i--)
	{
		scanf("%d",&input[i]);
	}
	printf("Dataword is: ");
	for(i=m-1;i>=0;i--)
	{
		printf("%d", input[i]);
	}
	r = 4;
    n = m+r;
    printf("\nSize of Code: %d\n", n);
    parity(n,input);
    getch();


}
