#include <stdio.h>
#include<string.h>
int main()
{
    FILE *f;
    
    char data[25] = "learning is essential";
   
    f = fopen("fputs.txt", "w");
    if (f == NULL)
        printf("unable to create or open a file");
    else
    {
        printf("Enter the text that to be written to the file \n");
        gets(data);
        fputs(data,f);
        printf("data written totthe file successfully");
        fclose(f);
    }  
    return 0;
}