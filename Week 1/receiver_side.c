#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int i,j;
int main()
{
	char str[100], bstr[100], p[50];
	int a[100],m;
	char choice;
	printf("\nYour Options:\n");
	printf("\na. Bit Destuffing\nb. Byte Destuffing\nc. Character Count\n");
	printf("\nEnter your choice:");
	scanf("%c", &choice);
	switch(choice)
	{
	//bit destuffing
	case 'a':
	{
		int count = 0;
		printf("\nEnter the bit string: ");
		scanf("%s", &str);
		for(i=j=0;str[i];i++,j++)
		{
			if(str[i]=='1')
				count++;
			else
				count = 0;
			bstr[j]=str[i];
			if (count==5)
			{
				i++;
				count = 0;
			}
		}
		bstr[j] = '\0';
		printf("\nAfter Bit Destuffing: %s\n",bstr);
	}
	break;
	//byte destuffing
	case 'b':
    {
        char p[50], b[50], c[50];
        int i,n,k,d,j;
        printf("\nEnter stuffed frame size: ");
        scanf("%d", &n);
        printf("\nEnter stuffed frame: ");
        for(i=0;i<n;i++)
            scanf("%c", &p[i]);
        d = n-1;
        for(i=1;i<n;i++)
        {
            b[i] = p[i+1];
        }
        j=0;
        for(i=0;i<d;i++)
        {
            if(b[i]=='s' && b[i+1]=='s')
            {
                i++;
                c[j] = b[i];
            }
            else if(b[i]=='s' && b[i+1]=='f')
            {
                i++;
                c[j] = b[i];
            }
            else
                c[j] = b[i];
            j++;
        }
        printf("\n\n******Input Data*********\n");
        for(i=0;i<d;i++)
        {
            //printf("\n");
            printf("\n%c", b[i]);

        }
        printf("\n\n*********Destuffed**********\n");
        for(i=0;i<j;i++)
        {
            //printf("\n");
            printf("\n%c", c[i]);

        }
    }
	break;
	//Character Count
	case 'c':
    {
        char arr[100], barr[100];
        printf("\nEnter the elements of the array: ");
        scanf("%s", arr);
        for(i=0; i<strlen(arr); i++)
            {
                j=i+1;
                barr[i]=arr[j];
            }
            barr[i] = '\0';
            printf("\nExtracted Data using character count: %s\n", barr);

    }
    break;
    default:
        printf("\nInvalid Input! Run program again");
    }
    getch();
}





