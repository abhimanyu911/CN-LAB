#include <stdio.h>
#include <stdlib.h>

void parity(int n, int a[100])
{
   int i, p[100];
   printf("\nError is in position(No error if 0): ");

   if((a[7] + a[8] + a[9] + a[10] + a[11])%2 == 0)
      p[7] = 0;
   else
       p[7] = 1;
   printf("%d", p[7]);

   if((a[3] + a[4] + a[5] + a[6] + a[11])%2 == 0)
       p[3] = 0;
   else
       p[3] = 1;
   printf("%d", p[3]);

   if((a[1] + a[2] + a[5] + a[6] + a[9] + a[10])%2 == 0)
       p[1] = 0;

   else
       p[1] = 1;
   printf("%d", p[1]);

   if((a[0] + a[2] +  a[4] + a[6] + a[8] + a[10])%2 == 0)
       p[0] = 0;
   else
       p[0] = 1;
   printf("%d", p[0]);

}

int main()
{
    int m, r, i, n, input[100], b[100];
    n = 12;
    printf("\nPlease enter the Codeword:\n");
	for(i=n-1;i>=0;i--)
	{
		scanf("%d",&input[i]);
	}
	printf("Codeword is: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d", input[i]);
	}
    parity(n,input);
    getch();
}
