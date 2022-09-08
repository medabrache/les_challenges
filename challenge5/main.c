#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fah,cel;
    printf("please enter the temperature in fh:");
    scanf("%",&fah);
     cel = (fah-32)/1.8;
     if(cel<0){
        printf("tres froid");
     }else if(cel>40){
         printf("tres chaud");
     }else if(cel<14){
         printf("froid");
     }else(cel>25{
     printf("chaud");
     }

return 0;
}
