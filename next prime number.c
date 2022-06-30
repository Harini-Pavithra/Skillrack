int n,f=0;
scanf("%d",&n);
for(int i=n+1;i<=n+100;i++)
{
    f=0;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("%d",i);
        break;
    }
}

Example Input/Output 1:
Input:
11

Output:
13

Example Input/Output 2:
Input:
2

Output:
3
