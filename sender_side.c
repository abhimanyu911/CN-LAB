#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int i,j;
int main()
{
	char str[100], bstr[100], ar[50], b[50];
	int a[100],m,scheck;
	char choice;
	printf("\nYOUR OPTIONS:\n");
	printf("\na. Bit Stuffing\nb. Byte Stuffing\nc. Character Count\n");
	printf("\nEnter your choice:");
	scanf("%c", &choice);
	switch(choice)
	{
	//bit stuffing
	case 'a':
	{
		int count =0;
		printf("\nEnter the bit string: ");
		scanf("%s", str);
		for(i=j=0; str[i]; i++)
		{
			if(str[i]=='1')
				count++;
			else
				count = 0;
			bstr[i+j]= str[i];
			if(count==5)
			{
				j++;
				bstr[i+j]='0';
				count = 0;
			}
		}
		bstr[i+j] = '\0';
		printf("\nAfter Bit Stuffing: %s\n", bstr);

	}
	break;
	//byte Stuffing
	case 'b':
    {
        char ar[50], b[50];
        int i,n,j,k,p;
        printf("\nEnter the size of the data: ");
        scanf("%d", &n);
        p = n+1;
        printf("\nEnter the characters in frame: ");
        for (i=0;i<p;i++)
            scanf("%c", &ar[i]);
        printf("\n ******Input Data*****\n");
        k = 2*p;
        for(i=0;i<p;i++)
            printf("%c", ar[i]);
        for(i=0;i<k;i++)
        {
            if(ar[i]=='f'|| ar[i]=='s')
            {
               b[j] = 's';
               j++;
               b[j] = ar[i];
            }
            else
            {
                b[j] = ar[i];
            }

            j++;
        }
        printf("\n**********Byte Stuffed*********\n");
        printf("f");
        for(i=0;i<k;i++)
        {
            printf("\n");
            printf("%c", b[i]);

        }
        printf("\nf");
    }
    break;

	//Inserting character count code
	case 'c':
	{
		char arr[100];
		int x,y;
		printf("\nEnter the elements of the array:");
		scanf("%s", arr);
		printf("\n Resultant Frame using character count = %d%s\n", strlen(arr)+1,arr);
	}
	break;
	default:
		printf("\nInvalid Input! Run program again");
	}
	getch();
}

