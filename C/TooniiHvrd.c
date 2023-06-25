/*Tüünii byatskhan okhin Mishyeli döngöj 2-r angid surdag.
Sayakhan tereer 1-ees 10 khürtelkh toony khürd zaajee.
Bagsh ni n toog khelekhed ürjüülekh khürdend baigaa esekhed ergelzdeg.
Mishyeli tanaas tuslamj khüssen. 
Tüünd zöv khariult olokhod ni tuslakh uu? Jisheelbel, 56 ni 7*8=56 bol TIIM gej khariulna. 
Gekhdee 23 ni yamar ch duguind baidaggüi tul khariult ni ÜGÜI.*/

/*Example :
input 1
45
output 1
YES*/

// C1 level 
#include<stdio.h>
int main()
{
    int i , j , n, NO=0 , a=0;
    scanf("%d",&n);
    for(i=1 ; i<11; i++){
        for(j=1; j<11; j++){
            if (n==i*j)
            {
                a = 1;
            }
            
        }
        if (n==i*j)
            {
                a=1;
            }
            NO = 1;
    }
    
    
    if (a == 1 &&  NO == 1){
        printf("YES");
    }
    else {
        printf("NO");
    }
    
    return 0;
}