/*Өгөгдсөн А төгрөгийг аравт, тавт, нэгжийн дэвсгэрт ашиглан хамгийн цөөндөө хэдэн дэвсгэртээр задлах вэ?
INPUT
1 бүхэл тоо (int) өгөгдөнө.
    OUTPUT
хамгийн цөөн дэвсгэртийн тоог хэвлэнэ.
    Example
    input
57
    output
8*/
#include<stdio.h>
int main()
{
    int n , m =0,i;
    scanf("%d",&n);
    if(n>=10){
        while (n>=10)
        {
            n=n-10;
            m++;
        }
        
    }
    if(n>=5){
        n=n-5;
        m++;
    }
     if(n>=1){
        while (n>=1)
        {
            n=n-1;
            m++;
        }
        
    }
    printf("%d",m);
    return 0 ;
}