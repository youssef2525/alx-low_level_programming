#include "main.h"
/**
 * _strcat - concatenates two strings
 * @newDest: input value
 * @newSrc: input value
 *
 * Return: void
 */
char *_strcat(char *newDest, char *newSrc)
{
    int i = 0;
    int j = 0;

    while (newDest[i] != '\0')
    {
        i++;
    }

    while (newSrc[j] != '\0')
    {
        newDest[i] = newSrc[j];
        i++;
        j++;
    }

    newDest[i] = '\0';
    return newDest;
}
