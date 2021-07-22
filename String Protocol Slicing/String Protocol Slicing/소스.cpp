#include <stdio.h>



char buff[10];
int buffSize = sizeof(buff);

void reset() {
    for (int i = 0; i < buffSize; i++) {
        buff[i] = 48;//모든 배열 요소를 48("0")으로 초기화
    }

    
}


int main(void) {
    char input = 0;
    char key = 52;
    int lenKey = 3;
    reset();
    
    while (1) {
        
        scanf(" %c", &input); //입력 받기
        printf("input: %c\n", input); // 입력한내용 확인


        for (int i = 0; i < buffSize - 1; i++) {
            buff[i] = buff[i + 1];
        }


        buff[buffSize - 1] = input;


        for (int i = 0; i < buffSize - lenKey; i++) {
            if (buff[i] == 107 && buff[i + 1] == 101 && buff[i + 2] == 121) {
                key = buff[i + 3];
                printf("key 인식\nkey는 %c 입니다.", key);
            }
        }


        printf("String: ");
        for (int i = 0; i < buffSize; i++) {
            printf("%c", buff[i]);
        }
        printf("\n");

    }

}