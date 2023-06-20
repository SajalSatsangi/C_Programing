#include <stdio.h>

int f1(int a[], int i, int j)
{
    int k;
    if (j==i)return i;
    return (a[i] < a[k]) ?i : k;
}

void f2(int a[],int n,int jx)
{
    int k,px;
    if(jx == n)
    k = f1(a,jx,n-1);
    if(k!=jx)
    {
        px = a[k];
        a[k] = a[jx];
        a[jx] = px;
    }
    f2(a,n,jx+1);
}

int main()
{
    int A[2,3,4], N;
    f2(A,N,0);
}