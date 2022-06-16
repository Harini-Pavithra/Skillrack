{int n,a[50],i,j;
    int s,count=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<=s)
        s=a[i];
    }
    for(i=2;i<=s;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]%i==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            count++;
        }
    }
    printf("%d",count);
    }
    
    Example 1:
Input:
2
100
75
 
Output:
2

Explanation:
The common factors excluding 1 are 5,25. Hence output is 2

Example 2:
Input:
3
10
20
30

Output:
3

Explanation:
The common factors excluding 1 are 2,5,10. Hence output is 3.