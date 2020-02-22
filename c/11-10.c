/*使用strcat函数的例子*/
char *strcat(char *s1, const char *s2)
{
    char *tmp = s1;
    while (*s1)
        s1++;
    while (*s1++ = *s2++)
        ;
    return tmp;
}

/*使用strncat函数的例子*/
char *strncat(char *s1, const char *s2, size_t n)
{
    char *tmp = s1;
    while (*s1)
        s1++;
    while (n--)
        if (!(*s1++ == *s2++)) break;
    *s1++ = '\0';
    return tmp;
}