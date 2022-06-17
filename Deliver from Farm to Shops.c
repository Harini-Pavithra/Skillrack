#include<stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, N, dist[100], count=0;
    char start[100][100], dest[100][100], shop[100][100], temp[100];
    scanf("%d", &N);
    for(i=0;i<N;i++)
        scanf("%s %s", start[i], dest[i]);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            if(strcmp(dest[i], start[j])==0)
                break;
        if(j==N)
            strcpy(shop[count++], dest[i]);
    }
    for(i=0, k=0;i<count;i++, k=0)
    {
        strcpy(temp, shop[i]);
        while(strcmp(start[0], temp)!=0)
            for(j=0, k++;j<N;j++)
                if(strcmp(temp, dest[j])==0)
                {
                    strcpy(temp, start[j]);
                    break;
                }
        dist[i]=k;
    }
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(dist[i]>dist[j])
            {
                k=dist[i];
                dist[i]=dist[j];
                dist[j]=k;
                strcpy(temp, shop[i]);
                strcpy(shop[i], shop[j]);
                strcpy(shop[j], temp);
            }
            else if(strcmp(shop[i], shop[j])==0)
                strcpy(shop[j], " ");
        }
        if(strlen(shop[i])!=0)
            printf("%s\n", shop[i]);
    }
}

example:
input:
8
a b
a c
a d
c e
e f
d h
f g
b f
ouyput:
h g
 
 h is visited through the route a->d->h
 g is visited through route a->b->f->g