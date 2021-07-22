#include <stdio.h>

int main(void) {

    char buff[10];
    int buffSize = sizeof(buff);
    char input = 0;

    for (int i = 0; i < buffSize; i++) {
        buff[i] = 48;
    }
    while (1) {

        sizeof buff;
        scanf(" %c", &input);
        printf("input: %c\n", input);


        for (int i = 0; i < buffSize - 1; i++) {
            buff[i] = buff[i + 1];
        }


        buff[buffSize - 1] = input;

        printf("String: ");
        for (int i = 0; i < buffSize; i++) {
            printf("%c", buff[i]);
        }
        printf("\n");

    }

}