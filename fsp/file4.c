#include <stdio.h>
int main()
{
    FILE *f;
    int l, i;
    char data[25] = "learning is essential";
    l = strlen(data);
    f = fopen("wrtie.txt", "w");
    if (f == NULL)
        printf("unable to create or open a file");
    else
    {
        {
            for (i = 0; i < l; i++)
            {
                printf("writing the character %c \n", data[i]);
                fputc(data[i], f);
            }
            printf("data written.......");
            fclose(f);
        }
    }
    return 0;
}