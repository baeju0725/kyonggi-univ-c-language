#include <stdio.h>
#include "utils.h"


int main() {
    while(1){
        int choose_num;
        printf("안녕하세요 경기 pc 방입니다. 무엇을 하시겠습니까?!?!\n");
        printline();
        printf("1. 로그인 하기 2. 회원가입 하기. 3. 피시방 나가기");
        scanf("%d", &choose_num);
        switch (choose_num) {
            case 1:
                start_sign_in();
                break;
            case 2:
                start_sign_up();
                break;
            case 3:
                return 0;
            default:
                printf("유효하지 않은 번호입니다. 다시 입력해주세요!\n");
                continue;
        }
        
    }
    return 0;
}

