#include<stdio.h>
#include<string.h>

main(){

    char str[] = "hello";

    char *ans = strchr(str, 'l');
    printf("%s", ans);
}