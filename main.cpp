#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int *merge (int *a, int *b, int n, int m)
{
    int *c, i, j, s1,s2;
    s1=0;
    s2=0;
    i=0;
    c=(int*) malloc((n+m)*sizeof(int));
    while(s1<n && s2<m)
    {
        if(a[s1]<b[s2])
        {
            c[i]=a[s1];
            s1++;
        }
        else
        {
            c[i]=b[s2];
            s2++;
        }
        i++;
    }
    if(s1<n)
    {
        for(j=s1;j<n;j++)
        {
            c[i]=a[j];
            i++;
        }
    }
    else
    {
        for(j=s2;j<m;j++)
        {
            c[i]=b[j];
            i++;
        }
    }
    return c;
}
int main()
{
    int n, m, *c, *a, *b, i;
    printf("//");
    scanf("%d", &n);
    a=(int*) malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
       scanf("%d", &*(a+i));
    }
    printf("//");
    scanf("%d", &m);
    b=(int*) malloc(m*sizeof(int));
    for(i=0; i<m; i++)
    {
       scanf("%d", &*(b+i));
    }
    c=merge(a,b,n,m);
    for(i=0;i<n+m;i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
