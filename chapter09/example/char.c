#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x;
    char a;

    printf("请输入一个整数："); scanf("%d", &x);
    // getchar();  
    printf("请输入一个字符："); 
    scanf(" %c", &a); /*%c前面的空格就是用来屏蔽空白符的*/
    printf("您输入的字符为：%c\n", a);

    return 0;
}