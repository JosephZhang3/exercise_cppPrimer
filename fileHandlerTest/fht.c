#include "stdio.h"

void main(){
    FILE *fp0;
    fp0 = fopen("test0.txt","w");
    printf("%d \n",fp0);
}
