#include <stdio.h>
#include <string.h>

/**< Get rid of comma or whatever you want */

int main(void)
{
    char text[] = "ankara,izmir,adana,eskisehir";
    char *str;
    str = strtok(text, ",");
    while (str != NULL)
    {
        puts(str);
        str = strtok(NULL, ",");
    }
return 0;
}


