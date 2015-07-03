/*
 * different in
 * 
 * char *p
 * char *p[10]
 * char (*p)[10]
 *
 *
 * July/03/2015
 * hpjju@live.com
 *
 */



#include <stdio.h>

int main() {
    char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
//    int *p[10];
    char *p[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
    *p = a;

//    char *   <<<<    char *[10]
//    char *t = a;
//    char (*tp)[10] = a;

    printf("&a   = %d\n", &a);

    int i;
    for (i = 0; i < 10; i++) {
        printf("p[%d] = %d\n", i, p[i]);
        if (p[i] != NULL) {
            printf("*p[%d] = %c\n", i, *p[i]);
        }
    }

    printf("--------------------s------\n");
    printf("&a    = %d\n", &a);

    for (i = 0; i < 10; i++) {
        printf("&a[%d] = %d, a[%d] = %c\n", i, &a[i], i, a[i]);
    }



    printf("--------------------------\n");
    printf("&a    = %d\n", &a);

    char (*pp)[10] = a;

    printf("*pp    = %d\n", *pp);
    printf("pp    = %d\n", pp);

    for (i = 0; i < 10; i++) {
        printf("pp[%d] = %d, ", i, pp[i]);

        printf("(*pp)[%d] = %c, ", i, (*pp)[i]);

        printf("&(*pp)[%d] = %d\n", i, &((*pp)[i]));
    }


    return 0;
}


