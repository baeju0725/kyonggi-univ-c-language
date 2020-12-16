//
//  utils.h
//  BaejuProject
//
//  Created by myungki cho on 2020/12/17.
//

#ifndef utils_h
#define utils_h
#include "datatype.h"

#define num_food 10
#define num_user 10

void customer(food*, int);
void worker(food*);
void showfood(food*);
void orderfood(food*);
void showorder(food*);
void money(food*, int);
int login();
void printline();
void start_sign_up();
void start_sign_in();
void start_order_process(int);
#endif /* utils_h */
