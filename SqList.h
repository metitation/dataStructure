//
// Created by zwp on 2023/10/3.
//

#ifndef DATASTRUCTURE_SQLIST_H
#define DATASTRUCTURE_SQLIST_H

typedef int ElemType;
typedef unsigned int uint;
typedef struct {
    ElemType *elem;
    uint length;
    uint listSize;
}SqList;

#endif //DATASTRUCTURE_SQLIST_H
