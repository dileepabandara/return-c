/*
 * Dileepa Bandara
 */
#include <stdio.h>
#define MAX 10
#define MAXSIZE 5

void insert();
void delete();
void display();

int queue_array[MAX];
int rear = - 1;
int front = - 1;

struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack STACK;
STACK s;

void push(void);
int  pop(void);
void display(void);

void customer()
{
    int choice;
    while (1)
    {
        printf("*************** CUSTOMER MODE **********************\n");
        printf("    1.View CD play list \n");
        printf("    2.Buy CD\n");
        printf("    3.Recommend a new CD to play list \n");
        printf("    9.Quit from CUSTOMER MODE\n");
        printf("****************************************************\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            display();
            break;
            case 2:
            delete();
            break;
            case 3:
            recommend();
            break;
            case 9:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    }
}

void admin()
{
    int choice;
    while (1)
    {
        printf("*************** ADMIN MODE **********************\n");
        printf("    1.Add new CD to play list \n");
        printf("    2.Remove CD from play list \n");
        printf("    3.Display all CD of play list \n");
        printf("    9.Quit from ADMIN MODE\n");
        printf("****************************************************\n");
        printf("    Enter your choice : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 9:
            main();
            default:
            printf("    Wrong choice \n");
        }
    }
}


main()
{
    int choice;
    while (1)
    {
        printf("*************** WELCOME TO MUSIC CD SHOP **********************\n");
        printf("    1. Customer \n");
        printf("    2. Admin \n");
        printf("    9. Quit \n");
        printf("****************************************************\n");
        printf("    Enter your choice : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
            case 1:
            customer();
            break;
            case 2:
            admin();
            break;
            case 9:
            exit(1);
            default:
            printf("    Wrong choice \n");
        }
    }
}

void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Play list is Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("    Inset the CD no in play list : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("    Play list Underflow \n");
        return ;
    }
    else
    {
        printf("    CD deleted from play list is : %d\n", queue_array[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == - 1)
        printf("    Currently play list is empty \n");
    else
    {
        printf("    Play list is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}

void buy()
{
    int choice;
    while (1)
    {
        printf("    1.Buy all \n");
        printf("    2.Buy top 5 \n");
        printf("    9.Quit from buy\n");
        printf("****************************************************\n");
        printf("    Enter your choice : ");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
            case 1:
            //insertcart();
            break;

            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 9:
            customer();
            default:
            printf("    Wrong choice \n");
        }
    }
}

void recommend()
{
    int choice;
    int option = 1;
    s.top = -1;

    printf ("RECOMMEND A NEW CD\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    Add New               \n");
        printf ("      2    -->    Remove Latest               \n");
        printf ("      3    -->    View Recommendations               \n");
        printf ("      4    -->    Exit           \n");
        printf ("------------------------------------------\n");

        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display2();
            break;
        case 4:
            return;
        }
        fflush (stdin);
        printf ("Press 1 to continue and Press 0 to close)?\n");
        scanf    ("%d", &option);
    }
}

/*  Function to add an element to the stack */
void push ()
{
    int num;
    if (s.top == (MAXSIZE - 1))
    {
        printf ("Recommendation is Full\n");
        return;
    }
    else
    {
        printf ("Enter the CD no to be recommend\n");
        scanf ("%d", &num);
        s.top = s.top + 1;
        s.stk[s.top] = num;
    }
    return;
}
/*  Function to delete an element from the stack */
int pop ()
{
    int num;
    if (s.top == - 1)
    {
        printf ("Recommendation is Empty\n");
        return (s.top);
    }
    else
    {
        num = s.stk[s.top];
        printf ("Removed CD is = %dn", s.stk[s.top]);
        s.top = s.top - 1;
    }
    return(num);
}
/*  Function to display the status of the stack */
void display2 ()
{
    int i;
    if (s.top == -1)
    {
        printf ("Recommendation is empty\n");
        return;
    }
    else
    {
        printf ("\n The status of the Recommendation is \n");
        for (i = s.top; i >= 0; i--)
        {
            printf ("%d\n", s.stk[i]);
        }
    }
    printf ("\n");
}

//Inset to Cart

/*void insertcart(int data) {
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->leftChild = NULL;
   tempNode->rightChild = NULL;

   if(root == NULL) {
      root = tempNode;
   } else {
      current = root;
      parent  = NULL;

      while(1) {
         parent = current;

         if(data < parent->data) {
            current = current->leftChild;

            if(current == NULL) {
               parent->leftChild = tempNode;
               return;
            }
         }

         else {
            current = current->rightChild;

            if(current == NULL) {
               parent->rightChild = tempNode;
               return;
            }
         }
      }
   }
}*/
