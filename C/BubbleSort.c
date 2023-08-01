#include<stdio.h>
void Bubble(int n, int A[])
{
    int i , j,temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if ( A[j+1]<A[j])
            {
                temp = A[j+1];
                A[j+1]= A[j];
                A[j] = temp;
            }
            
        }
    }
}
int main ()
{
    int  A[]={10,2,3,1,5,8,7,6,4} ,i=0 ;
    int n = sizeof(A) / sizeof(A[0]);
    Bubble(n,A);
    for(i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    return 0;
}