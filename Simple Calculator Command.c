int main()
{
int a,b;
    char o[1];
    scanf("%d%[^-0-9]%d",&a,o,&b);
    switch(toupper(o[0]))
    {
        case 'A':
        printf("%d",a+b);
        break;
        case 'S':
        printf("%d",a-b);
        break;
        case 'M':
        printf("%d",a*b);
        break;
        case 'D':
        printf("%d",a/b);
        break;
    }
    }
    
Example Input/Output 1:
Input:
5A11

Output:
16

Explanation:
As the alphabet is A, 5 and 11 are added giving 16.

Example Input/Output 2:
Input:
120D6

Output:
20

Example Input/Output 3:
Input:
1405d10

Output:
140