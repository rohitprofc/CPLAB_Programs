#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c values:\n");
    printf("-------------------\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b&&b==c&&c==a)
    printf("%d %d %d is an Equilateral triangle\n",a,b,c);
    else if (a==b||b==c||c==a)
    printf("%d %d %d is an Isoceles triangle\n",a,b,c);
    else 
    printf("%d %d %d is an Scalene triangle\n",a,b,c);
    return 0;
}
/*
Output:-
Enter a,b,c values:
-------------------
2
3
4
2 3 4 is an Scalene triangle
*/
