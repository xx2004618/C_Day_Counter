//
//  main.c
//  Day_Counter
//
//  Created by Xiao Xiang on 16/2/24.
//  Copyright © 2016年 Xiang Xiao. All rights reserved.
//
#include <stdio.h>
int main()
{
    /* 定义需要计算的日期 */
    int year = 2008;
    int month = 8;
    int day = 8;
    /*
     * 请使用switch语句，if...else语句完成本题
     * 如有想看小编思路的，可以点击左侧任务中的“不会了怎么办”
     * 小编还是希望大家独立完成哦~
     */
    switch (month){
        case 1:
            printf ("%d\n", day);
            break;
        case 2:
            printf("%d\n", day + 31);
            break;
        case 3:
            printf("%d\n", (year % 4 == 0)? 60 + day : 59 + day);
            break;
        case 4:
            printf("%d\n", (year % 4 == 0)? 91 + day : 90 + day);
            break;
        case 5:
            printf("%d\n", (year % 4 == 0)? 121 + day : 120 + day);
            break;
        case 6:
            printf("%d\n", (year % 4 == 0)? 152 + day : 151 + day);
            break;
        case 7:
            printf("%d\n", (year % 4 == 0)? 182 + day : 181 + day);
            break;
        case 8:
            printf("%d\n", (year % 4 == 0)? 213 + day : 212 + day);
            break;
        case 9:
            printf("%d\n", (year % 4 == 0)? 244 + day : 243 + day);
            break;
        case 10:
            printf("%d\n", (year % 4 == 0)? 274 + day : 273 + day);
            break;
        case 11:
            printf("%d\n", (year % 4 == 0)? 305 + day : 304 + day);
            break;
        case 12:
            printf("%d\n", (year % 4 == 0)? 335 + day : 334 + day);
            break;
        default:
            printf("it is not a number");
            break;
    }
    return 0;
}