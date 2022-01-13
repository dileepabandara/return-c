// Developed by Dileepa Bandara

#include <stdio.h>

int main()
{
	int t=0, i, c;

    printf("\n **************************************** ");
	printf("\n Enter 4 module marks \n");

    for(i = 1; i < 5; i++)
        {
            printf("\t -> Module %d  : ", i);
            scanf("%d", &c);
            t = t + c;
        }

    printf("\n **************************************** ");
    printf("\n\t\a Total =  %d \n", t);
    printf("\n **************************************** ");

	return 0;
}

