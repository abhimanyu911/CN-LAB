#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int i,j;
void sender(int b[10], int k)
{
	int checksum, sum = 0;
	printf("\n****SENDER****\n");
	for(i=0;i<k;i++)
		sum+=b[i];
	printf("Sum is:%d\n",sum);
	checksum=~sum;
	printf("\nSender's Checksum is:%d", checksum);
}

int main()
{

    int a[100],m;
    printf("\nEnter size of the string:");
    scanf("%d",&m);
	printf("\nEnter the elements of the array:");
	for(i=0;i<m;i++)
		scanf("%d", &a[i]);
	sender(a,m);
	getch();
}
