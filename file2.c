#include<stdio.h>
int main(){
    FILE *f = fopen("Data.txt" , "r");
    if ( f == NULL)
        printf("file not found ");

    
else
    printf("opened\n");
    fclose(f);

  
}