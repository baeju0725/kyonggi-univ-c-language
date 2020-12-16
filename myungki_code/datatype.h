//
//  datatype.h
//  BaejuProject
//
//  Created by myungki cho on 2020/12/17.
//

#ifndef datatype_h
#define datatype_h

typedef struct{
    const char* name;
    const char* id;
    const char* password;
    int current_money;
}user_database;

typedef struct //음식 구조체 선언
{
    int num;
    const char* name;
    int price;
    int pctable;
}food;
#endif /* datatype_h */
