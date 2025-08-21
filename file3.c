#include <stdio.h>
int main()
{
    // FILE *f = fopen("namee.txt", "w+");
    // fprintf(f, "ABC123456789");
    FILE *f = fopen("name.txt", "a");

    rewind(f);
    char ch;
    while ((ch = fgetc(f)) != EOF)
        printf("%c", ch);

    fprintf(f, "\nHellooo!");
    
    fclose(f);
    return 0;
}