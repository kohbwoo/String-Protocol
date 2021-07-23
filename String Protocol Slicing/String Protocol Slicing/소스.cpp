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
    reset(); //초기화   
    while (1) {
        printf("input: "); // 입력한내용 확인
        scanf(" %c", &input); //입력 받기

        for (int i = 0; i < buffSize - 1; i++) {//기존 문자열 한칸씩 밀기
            buff[i] = buff[i + 1];
        }
        buff[buffSize - 1] = input; //새로운 입력 가장 끝 자리에 넣기

        //만약 k,y,e 순으로 입력된 경우 이후 첫 문자를key에 저장하고 저장됨을 출력
        for (int i = 0; i < buffSize - lenKey; i++) { 
            if (buff[i] == 107 && buff[i + 1] == 101 && buff[i + 2] == 121) {
                key = buff[i + 3];
                printf("key 인식\nkey는 %c 입니다.", key);
            }
        }
        //버퍼에 있는 내용 출력
        printf("String: ");
        for (int i = 0; i < buffSize; i++) {
            printf("%c", buff[i]);
        }
        printf("\n");
    }
}