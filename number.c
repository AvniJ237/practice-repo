#include<stdio.h>
int main ()
{int choice,num,div,rev=0;
printf("Enter 1 to find whether a number is divisible by a certain number,\n 2 to find reverse of the number\n and 0 to exit");
scanf("%d",&choice);
switch(choice)
   { case 1:printf("enter the number and the number to checks its divisiblity with");
        scanf("%d %d",&num, &div);
        if(div!=0)
        {if(num%div==0)
            {printf("divisible");
          }
           else
             {printf("not divisible");}
        }
        else
        {printf("Did you really type zero?");}
         break;
    case 2:printf("enter the number ");
           scanf("%d",&num);
           do
           {rev=rev*10+num%10;
           num=num/10;}
           while(num!=0);
           printf("reverse is %d",rev);
           break;
    case 0:printf("exiting...");
          break;
    default:
    printf("Invalid choice");
   }
 return 0;
}
