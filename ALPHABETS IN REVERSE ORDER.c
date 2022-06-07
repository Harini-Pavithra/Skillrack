#include <stdio.h>
#include <conio.h>
#include <string.h>
    void main()
    {
        char a[40],t;
        int i,j;
        clrscr();
        printf("\n Enter the String :- ");
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            for(j=i+1;a[j]!='\0';j++)
            {
                if(a[i]<a[j])
                {
                    t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                }
            }
        }
        printf("the alphabet wise is :- %s",a);
        getch();
    }
    
    i/p
   Enter the String : orange
   
   o/p
   the alphabet wise is : rongea
   
   i/p
   Enter the String : sweet
   
   o/p
   the alphabet wise is : wtsee
   
   
   
   
   