#include<stdio.h>
int main ()
{int choice,num,div,rev=0,i,count=0;
printf("Enter 1 to find whether a number is divisible by a certain number,\n 2 to find reverse of the number\n 3 to find factors of a number and\n 4 for overview of number 0 to exit");
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
    case 3:printf("enter the number ");
           scanf("%d",&num);
           for(i=1; i<=num; i++)
           {if(num % i == 0)
           { printf("%d, ", i);}}
           break;
    case 4:printf("enter the number ");
           scanf("%d",&num);
           if(num % 2 == 0)
           { printf("Even Number\n");}
           else
           {printf("Odd Number\n");}
           if(num > 0)
           { printf("positive Number\n");}
           else if(num==0)
           {printf("its a zero!!!\n");}
           else
           {printf("negative Number\n");}
           if(num<0)
           {num=-num;}
           for(i=1; i<=num; i++)
           {if(num % i == 0)
           { count++;}}
           if (num==0)
           {printf("zero isnt prime or composite\n");}
           else if (count>2)
           {printf("Composite Number\n");}
           else if(count==1)
           {printf("one isnt prime or composite\n");}
           else 
           {printf("Prime Number\n");}
           break;
    case 0:printf("exiting...");
          break;
    default:
    printf("Intersting choice but nope...");
   }
 return 0;
}
