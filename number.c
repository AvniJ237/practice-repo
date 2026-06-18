#include<stdio.h>
#include<conio.h>
void main ()
{int choice,num,div;
printf("Enter 1 to find whether a number is divisible by a certain number and 0 to exit");
scanf("%d",&choice);
switch(choice)
   { case 1:printf("enter the number and the number to checks its divisiblity with");
        scanf("%d %d",&num, &div);
        if(num>=div)
          {if(num%div==0)
            {printf("divisible");
          }
           else
             {printf("not divisible");}
          }
        else
        {printf("pls enter correct numbers");}
         break;
    case 0:printf("exiting...");
          break;
   }
  getch();
}
