#include "main.h"

/**
 * _strncat - Concatenate two strings using at most n bytes from src
 * @newDest: The destination string
 * @newSrc: The source string
 * @n: The maximum number of bytes to concatenate
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *newDest, char *newSrc, int n)
{
    int i = 0;
    int j = 0;

    while (newDest[i] != '\0')
    {
        i++;
    }

    while (j < n && newSrc[j] != '\0')
    {
        newDest[i] = newSrc[j];
        i++;
        j++;
    }

    newDest[i] = '\0';
    return (newDest);
}
