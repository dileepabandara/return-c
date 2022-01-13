// Developed by Dileepa Bandara

#include <stdio.h>

int main()
{
	int a,b,c,d;

	printf("Input 3 marks: \n");

		scanf(" %d", &a);
		scanf(" %d", &b);
		scanf(" %d", &c);

	if(a<b<c)
    {
        if(b<c)
        {
            d = c;
        }
        else
        {
            d = b;
        }
    }
    else
    {
        if(a<c)
        {
            d = c;
        }
        else
        {
            d = a;
        }
    }

	printf("Highest mark: %d\n", d);
	return 0;
}
