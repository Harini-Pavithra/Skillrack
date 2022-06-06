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
                if(a[i]>a[j])
                {
                    t=a[I];
                    a[I]=a[J];
                    a[J]=t;
                }
            }
        }
        printf("the alphabet wise is :- %s",a);
        getch();
    }
    
    I/P
    enter the string : sweet
    
    o/p
    the string is : eestw
    
    i/p
    enter the string : orange
    
    o/p
    the string is :aegnor
