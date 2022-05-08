#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
        puts("");
    else if (argc == 2)
        fputs(argv[1], stdout);

    else
    {
        size_t maxLen = 0, len;
        int increment, max_Index = 0;
        for (increment = 1; increment < argc; increment++)
            {
                len = strlen(argv[increment]);
                if (len > maxLen)
                    {
                        maxLen = len;
                        max_Index = increment;
                    }
                }
        fputs(argv[max_Index],stdout);
    }
    return EXIT_SUCCESS;
}