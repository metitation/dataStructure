//
// Created by zwp on 2023/10/3.
// 顺序表
//

#include "SqList.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 顺序表的初始化
 * @param listSize
 * @return
 */
SqList init(uint listSize){
    SqList t;
    t.elem = (ElemType *)malloc(listSize * sizeof(ElemType));
    t.listSize = listSize;
    t.elem = 0;
    return t;
}

/**
 * 顺序表的输出打印
 * @param t
 */
void printSqList(SqList t) {
    printf("SqList print: ");
    for (int i = 0; i < t.length; ++i) {
        printf("%d ", t.elem[i]);
    }
    printf("\n");
}

/**
 * 顺序表的取值
 * @param t
 * @param index
 * @return
 */
ElemType getElem(SqList t, uint index) {

}

