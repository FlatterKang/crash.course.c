/*
显示所选动物的叫声
*/
#include <stdio.h>
enum animal {Dog, Cat, Monkey, Invalid};

int main(void) {
    enum animal selected;

    do {
        printf("0……狗 1……猫 2……猴 3……结束：");
        scanf("%d", &selected);
    } while (selected < Dog || selected > Invalid);

    switch (selected) {
    case Dog: puts("汪汪！！！"); break;

    case Cat: puts("喵喵～～～"); break;

    case Monkey: puts("唧唧---"); break;

    case Invalid: break;
    }

    return 0;
}