//
//  utils.cpp
//  BaejuProject
//
//  Created by myungki cho on 2020/12/17.
//
#include <stdio.h>
#include <string.h>
#include "utils.h"
#include "data.h"
void printline(){
    printf("==================================\n");
}

void start_sign_in(){
    int user_key = -1;
    while(1){
        printf("로그인을 해주세요.\n");
        int current_user_key = login();
        if(current_user_key != -1){
            user_key = current_user_key;
            break;
        }
        printf("아이디 혹은 비밀번호가 틀렸습니다 다시 로그인 해주세요.\n");
    }
    start_order_process(user_key);
    
}

void start_sign_up(){
//  동적 메모리 할당.
    char *user_name = (char*)malloc(sizeof(char) * 30);
    int user_money = 0;
    char *user_id = (char*)malloc(sizeof(char) * 30);
    char *user_password = (char*)malloc(sizeof(char) * 30);
    
    
    printf("이름을 입력해주세요: ");
    scanf("%s", user_name);
    printf("user name = %s\n",user_name);
    printf("현재 가지고 있는 금액을 입력해주세요: ");
    scanf("%d", &user_money);
    
    
    while(1){
        printf("아이디를 입력해주세요: ");
        scanf("%s", user_id);
        for(int i = 0; i < user_list.size(); i++){
            if(strcmp(user_id, user_list[i].name) == 0){
                printf("현재 작성하신 아이디는 사용하실 수 없습니다.\n");
                continue;
            }
        }
        break;
        
    }
    printf("비밀번호를 입력해주세요: ");
    scanf("%s", user_password);
    printf("user name = %s\n",user_name);
    user_list.push_back({user_name, user_id, user_password, user_money});
    return;
    
}
void start_order_process(int user_key){
    int input_num;
    while (1) {
        printline();
        printf("%d %s %d", user_key, user_list[user_key].name, user_list[user_key].current_money);
        printline();
        printf("안녕하세요 %s 고객님 경기pc방 주문화면 입니다\n",user_list[user_key].name);
        printline();
        printf("1. 음식  2. 음료  3. 사이드\n");
        printline();
        printf("메뉴를 선택해주세요: ");
        scanf("%d", &input_num);
        switch (input_num)
        {
        case 1:
            customer(main_food, user_key);
            break;
        case 2:
            customer(side_food, user_key);
            break;
        case 3:
            customer(drink_food, user_key);
            break;
        default:
            printf("입력이 잘못되었습니다!");
        }
    }
}

int login(){
    
    int user_key = -1;
    
    char *id;
    char *password;
    printline();
    printf("아이디를 입력해주세요: ");
    scanf("%s", id);
    printf("비밀번호를 입력해주세요: ");
    scanf("%s",password);
    
    
//  아이디와 비밀번호의 유효성 검사
    for(int i = 0; i < user_list.size(); i++){
        if(strcmp(id, user_list[i].id) == 0){
            if(strcmp(password, user_list[i].password) == 0){
                user_key = i;
            }
        }
    }
    return user_key;
}

void customer(food* f, int user_key) //손님 메뉴
{
    int input_ct;
    printf("****음식주문화면 입니다****\n");
    printline();
    while(true){
    printf("무엇을 하시겠습니까?\n");
    printf("1. 음식메뉴보기  2. 음식 주문  3. 이전화면으로\n");
    scanf("%d", &input_ct);
    switch (input_ct)
    {
    case 1:
        showfood(f);
        break;
    case 2:
        money(f, user_key);
        break;
    case 3:
        return;
    default:
        printf("입력이 잘못 되었습니다!");
    }
    }
}

void worker(food* f,int user_key)// 종업원 직원 메뉴
{
    int input_wo;
    while (1)
    {
        printline();
        printf("*****직원 메뉴*****");
        printline();
        printf("1. 주문 현황  2. 계산  3. 이전화면으로");
        printline();
        printf("메뉴선택");
        scanf("%d", &input_wo);
        switch (input_wo)
        {
        case 1:
            showorder(f);
            break;
        case 2:
            money(f, user_key);
            break;
        case 3:
            return;
            default:
            printf("입력이 잘못되었습니다!");
        }
    }
}
void showfood(food* food)//음식보여주기
{
    int i = 0;
    printline();
    printf("----음식 목록입니다----");
    printline();
    for (i = 0; i < num_food; i++)
    {
        if (food[i].pctable == 0)
        {
            printf("번호 :%d\n", food[i].num);
            printf("음식 이름 :%s\n", food[i].name);
            printf("가격 :%d\n", food[i].price);
        }
    }
}

void orderfood(food* food)
{
    int i = 0;
    printline();
    printf("*****음식 주문 현황*****");
    printline();
    for (i = 0; i < num_food; i++)
    {
        if (food[i].pctable != 0)
        {
            printf("번호: %d\n", food[i].num);
            printf("음식 이름 : %s\n", food[i].name);
            printf("가격 : %d\n", food[i].price);
            printf("테이블 번호 :%d", food[i].pctable);
     }
    }
}

void showorder(food * food){
    
}
void money(food* f, int user_key) {
    int order_food_index;
    user_database *order_user = &user_list[user_key];
    while(true)
    {
        printf("주문할 음식의 번호를 입력해주세요: ");
        scanf("%d", &order_food_index);
        if(order_food_index <1 || order_food_index>num_food){
            printf("잘못된 숫자입니다. 다시 입력해주세요 \n");
            continue;;
        }
        break;
    }
    
    food order_food = f[order_food_index-1];
    
    int food_money = order_food.price;
    
    int user_money = order_user->current_money;
    
    if(food_money > user_money){
        printf("잔액이 부족합니다. 다른 음식을 선택해주세요.\n");
    }
    else{
        order_user->current_money -= food_money;
        printf("남은 잔액은 %d원입니다.\n",order_user->current_money);
    }
    
    
//    FILE* file;
//    file = fopen("receipt.txt", "w");
//    fputs("영수증" , file);
//    fclose(file);


}


