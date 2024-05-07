#include <stdio.h>
 int main()
 {
     int a, b, c;
     printf("podaj 3 liczby calkowite:\n");
     scanf("%d%d%d", &a, &b, &c);
     if (a > b && a > c)
        if (b > c)
            printf(c, b, a);
        else
            printf(b, c, a);
    if (b > a && b > c)
        if (a > c)
            printf(c, a, b);
        else
            printf(a, c, b);
    if (c > a && c > b)
        if (a > b)
            printf(b, a, c);
        else
            printf(a, b, c);
    return 0;
 }
