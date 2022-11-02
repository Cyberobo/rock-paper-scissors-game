#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main()
{
   int rock=1 , paper=2 , scissors=3;
   int round=0 , pc , choice , x=0 , y=0;
   srand(time(NULL));

   printf("rock=1 , paper=2 , scissors=3\n");

   printf("\n");

   for(round;round<100;round++)
   {
       printf("enter your choice: ");
       scanf("%d",&choice);
       printf("\n");

       pc=rand()%3+1;

       if(choice==1)
       {
            if(pc==3)
            {
                printf("the value you entered: rock\n");
                printf("\n");
                printf("value entered by pc: scissors\n");
                printf("\n");
                printf("you won\n");
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
            }

            else if(pc==2)
            {
                printf("the value you entered: rock\n");
                printf("\n");
                printf("value entered by pc: paper\n");
                printf("\n");
                printf("you lost\n");
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
            }

            else if(pc==1)
            {
                printf("the value you entered: rock\n");
                printf("\n");
                printf("value entered by pc: rock\n");
                printf("\n");
                printf("draw\n");
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
            }

       }

       else if(choice==2)
       {
            if(pc==1)
            {
                printf("the value you entered: paper\n");
                printf("\n");
                printf("value entered by pc: rock\n");
                printf("\n");
                printf("you won\n");
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
            }

            else if(pc==3)
            {
                printf("the value you entered: paper\n");
                printf("\n");
                printf("value entered by pc: scissors\n");
                printf("\n");
                printf("you lost\n");
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
            }

            else if(pc==2)
            {
                printf("the value you entered: paper\n");
                printf("\n");
                printf("value entered by pc: paper\n");
                printf("\n");
                printf("draw\n");
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
            }

       }

       else if(choice==3)
       {
            if(pc==2)
            {
                printf("the value you entered: scissors\n");
                printf("\n");
                printf("value entered by pc: paper\n");
                printf("\n");
                printf("you won\n");
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
            }

            else if(pc==1)
            {
                printf("the value you entered: scissors\n");
                printf("\n");
                printf("value entered by pc: rock\n");
                printf("\n");
                printf("you lost\n");
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
            }

            else if(pc==3)
            {
                printf("the value you entered: scissors\n");
                printf("\n");
                printf("value entered by pc: scissors\n");
                printf("\n");
                printf("draw\n");
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
            }

       }

        if(choice!=1 && choice!=2 && choice!=3)
        {
            printf("you entered wrong value\n");
            printf("\n");
            printf("-----------------------------------------------------------------------\n");
            printf("\n");
        }

        while(1)
        {
            if(choice==1 && pc==3 || choice==2 && pc==1 || choice==3 && pc==2)
            {
                x++;
                printf("score = %d-%d\n",x,y);
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
                break;
            }

            else if(choice==1 && pc==2 || choice==2 && pc==3 || choice==3 && pc==1)
            {
                y++;
                printf("score = %d-%d\n",x,y);
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
                break;
            }

            else
            {
                printf("score = %d-%d\n",x,y);
                printf("\n");
                printf("-----------------------------------------------------------------------\n");
                printf("\n");
                break;
            }

        }

        if(x==3)
        {
            printf("congratulations you won\n");
            printf("\n");
            break;
        }

        else if(y==3)
        {
            printf("you lost the game\n");
            printf("\n");
            break;
        }




    }


    return 0;

   }
