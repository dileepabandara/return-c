// Developed by Dileepa Bandara

#include<stdio.h>

int totalCost;
int choice, c=1, cost[9];
 
void china_city ( )
{
   int ChinaChoice;

   printf("\n   Enter your destination and find the total expence\n\t1 - Shanghai City - $800/=\n\t2 - Diseney Land - $1000/=\n\t3 - Beijing City - $900/=\n\tPress any other number to exit\n");
   scanf("%d", &ChinaChoice);
    
   cost[0]=800;
   cost[1]=1000;
   cost[2]=900;
    
   switch(ChinaChoice)
   {
      case 1:
      {
         int num;
         printf("\n\tYou chose Shanghai City with $800/=\n\tAre you sure to confirm? If 'Yes' Enter 1 else any number\n");
         scanf("%d",&num);
            if(num==1)
            {
               totalCost+=800;
            }
         printf("\n\tYour Cost in Cart is $%d/=\n",totalCost);
         break;
      }
     case 2:
     {
         int num;
         printf("\n\tYou chose Diseney Land with $1000/=\n\tAre you sure to confirm? If 'Yes' Enter 1 else any number\n");
         scanf("%d",&num);
            if(num==1)
            {
               totalCost+=1000;
            }
         printf("\n\tYour Cost in Cart is $%d/=\n",totalCost);
         break;
      }
     case 3:
     {
         int num;
         printf("\n\tYou chose Beijing City with $900/=\n\tAre you sure to confirm? If 'Yes' Enter 1 else any number\n");
         scanf("%d",&num);
            if(num==1)
            {
               totalCost+=900;
            }
         printf("\n\tYour Cost in Cart is $%d/=\n",totalCost);
         break;
     }
     default:
     {
      printf("\nExit from Chaina\n");
      break;
     }
    }	
}

void india_city()
{
   int IndiaChoice;
   printf("\n   Enter your destination and find the total expence\n\t1 - Taj Mahal - $800/=\n\t2 - Agra City - $700/=\n\t3 - Chennai - $600/=\n\tPress any other number to exit\n");
   scanf("%d",&IndiaChoice);

   cost[3]=800;
   cost[4]=700;
   cost[5]=600;
   
   switch(IndiaChoice)
   {
      case 1:
      {
         int num;
         printf("\n\tYou chose Taj Mahal for $800/=\n\tAre you sure to confirm? If 'Yes' Enter 1 else any number\n");
         scanf("%d",&num);
            if(num==1)
            {
               totalCost+=800;
            }
         printf("\n\tYour Cost in Cart is $%d/=\n",totalCost);
         break;
      }
     case 2:
     {
         int num;
         printf("\n\tYou chose Agra City for $700/=\n\tAre you sure to confirm? If 'Yes' Enter 1 else any number\n");
         scanf("%d",&num);
            if(num==1)
            {
               totalCost+=700;
            }
         printf("\n\tYour Cost in Cart is $%d/=\n",totalCost);
         break;
      }
     case 3:
     {
      int num;
         printf("\n\tYou chose Chennai for $600/=\n\tAre you sure to confirm? If 'Yes' Enter 1 else any number\n");
         scanf("%d",&num);
            if(num==1)
            {
               totalCost+=600;
            }
         printf("\n\tYour Cost in Cart is $%d/=\n",totalCost);
         break;
     }
     default:
     {
         printf("\nExit from India\n");
         break;
     }
    }
 }
 
void sri_lanka_city()
{
   int Sri_LankaChoice;
   printf("\n   Enter your destination and find the total expence\n\t1 - Nuawara Eliya - $300/=\n\t2 - Polonnawaruwa - $400/=\n\t3 - Mirissa Beachl - $500/=\n\tPress any other number to exit\n");
   scanf("%d",&Sri_LankaChoice);
   
   cost[6]=300;
   cost[7]=400;
   cost[8]=500;
   
   switch(Sri_LankaChoice)
   {
      case 1:
      {
         int num;
         printf("\n\tYou chose Nuawara Eliya for $300/=\n\tAre you sure to confirm? If 'Yes' Enter 1 else any number\n");
         scanf("%d",&num);
            if(num==1)
            {
               totalCost+=300;
            }
         printf("\n\tYour Cost in Cart is $%d/=\n",totalCost);
         break;
      }
     case 2:
     {
         int num;
         printf("\n\tYou chose Polonnawaruwa for $400/=\n\tAre you sure to confirm? If 'Yes' Enter 1 else any number\n");
         scanf("%d",&num);
            if(num==1)
            {
               totalCost+=400;
            }
         printf("\n\tYour Cost in Cart is $%d/=\n",totalCost);
         break;
     }
     case 3:
     {
         int num;
         printf("\n\tYou chose Mirissa Beach for $500/=\n\tAre you sure to confirm? If 'Yes' Enter 1 else any number\n");
         scanf("%d",&num);
            if(num==1)
            {
               totalCost+=500;
            }
         printf("\n\tYour Cost in Cart is $%d/=\n",totalCost);
         break;
     }
     default:
     {
         printf("\nExit from Sri Lanka\n");
         break;
     }
    }
 }
 
void to_buy()
{
   printf("   Your total cost here, press 1 for buy and exit, press 2 for view & press any other key for buy another\n");
 	int buy_Choice;
   scanf("%d",&buy_Choice);

   switch(buy_Choice)
   {
      case 1:
      {
         printf("\a\a\a\a\n\t\t\t\t<<>> Your final cost is $%d/=\n",totalCost);
         printf("\n\n################################################################################");
         printf("\n\tThank you and visit us again.!!\n");
         printf("\n\tDPUL Tourism Service\n\n\tColombo Road\n\n\tKurunegala\n");
         printf("\n################################################################################\n\n\n\n\n\n\n\n\n");
         break;
     }
     case 2:
     {
         printf("\n\t\t\t\tYour final cost is $%d/= and if you want to buy more?\n",totalCost);
         break;
     }
     default:
     {
         printf("\nIf you want to buy another?\n");
         break;
     }
    }
 	
 }

void main()
{
   char str[100];
   char items[9][100] = {
      "Shanghai City",
      "Disney land",
      "Beijing City",
      "Taj Mahal",
      "Agra City",
      "Chennai",
      "Nuawara Eliya",
      "Polonnawaruwa",
      "Mirissa Beach"
   };

   printf("\n Hi there, What is your name?  ");
   gets(str);
   printf("\n###################################################################################################################################################################################################################");
   printf("\n\n\t\t Hello %s, Welcome to 'DPUL Tourism Service' to find the best tourist attractions in Asia! \n",str);
   printf("\n###################################################################################################################################################################################################################");
   
   do{
      if(c==1)
      {
         printf("\n >> Select the Country here :-\n    ~ Press 1 for China\n    ~ Press 2 for India\n    ~ Press 3 for Sri Lanka\n    ~ Press 4 to buy\n");
         scanf("%d",&choice);
       
         switch(choice)
         {
            case 1:
            {
               china_city();
               break;
            }
            case 2:
            {
               india_city();
               break;
            }
            case 3:
            {
               sri_lanka_city();
               break;
            }
            case 4:
            {
               to_buy();
               break;
            }
            default:
            {
               printf("\nEnter valid country choice\n");
               break;
            }
         }
 	   }
 	
      else if(c==2)
      {
         printf("Thanks");
      }
  
   }
 
   while(c==1 || c==2);
      printf("\a\a\a\a\a\a\n\t\t\t\t<<>> Your final cost is $%d/=\n",totalCost);
      printf("\n\n################################################################################");
      printf("\n\tThank you '%s' and visit us again.!!\n",str);
      printf("\n\tDPUL Industries\n\n\tColombo Road\n\n\tKurunegala\n",str);
      printf("\n################################################################################\n\n\n\n\n\n\n\n\n");
}