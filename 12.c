// Binary to Decimal
#include <stdio.h>
int convert(int);

void main(){
    int bin,dec;
    printf("Enter the Number in Binary only : ");
    scanf("%d",&bin);
    dec = convert(bin);
    printf("The Conversion of %d in Decimal is %d",bin,dec);
}

int convert(int bin){
    if(bin==0){
        return 0;
    }else{
        return (bin%10+2*convert(bin/10));
    }
}