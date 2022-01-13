// Developed by Dileepa Bandara

#include <stdio.h>

int main()
{
	int t1=0, t2=0, t3=0, i, c, j, operator;

    for(j = 1; j < 4; j++)
        {
            printf("\n **************************************** ");
            printf("\n Enter student %d", j);
            printf(" module marks \n\n");
            printf("\n Enter 4 module marks \n");

            switch(j)
            {
                case 1:

                    for(i = 1; i < 5; i++)
                        {
                            printf("\t -> Module %d  : ", i);
                            scanf("%d", &c);
                            t1 = t1 + c;
                        }
                    break;

                case 2:

                    for(i = 1; i < 5; i++)
                        {
                            printf("\t -> Module %d  : ", i);
                            scanf("%d", &c);
                            t2 = t2 + c;
                        }
                    break;

                case 3:

                    for(i = 1; i < 5; i++)
                        {
                            printf("\t -> Module %d  : ", i);
                            scanf("%d", &c);
                            t3 = t3 + c;
                        }
                    break;

                default:
                    printf("Error");
            }

        }

        printf("\n **************************************** ");
        printf("\n\t\a Total for student 1 =  %d", t1);
        printf("\n\t\a Total for student 2 =  %d", t2);
        printf("\n\t\a Total for student 3 =  %d", t3);
        printf("\n **************************************** \n");

        if (t1 >= t2 && t1 >= t3)
            printf("\n\t\a Highest total mark =  %d", t1);

        else if (t2 >= t1 && t2 >= t3)
            printf("\n\t\a Highest total mark =  %d", t2);

        else
            printf("\n\t\a Highest total mark =  %d", t3);

        printf("\n\n **************************************** \n");


	return 0;
}


