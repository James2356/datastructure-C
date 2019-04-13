#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_


#include<stdio.h>
#include<malloc.h>
typedef int Item;//定义数据项类型
typedef struct node * PNode;//定义节点指针
//节点的定义
typedef struct node
{
	Item item;//数据域
	PNode next;//链域
	
}Node,*SList;

int SL_Creat(SList *p_list,int size);
int SL_Insert(SList list,int pos,Item item);
int SL_GetItem(SList list,int pos,Item *p_item);
int SL_Delete(SList list,int pos,Item * p_item);
int SL_SetItem(SList list,int pos,Item item);
int SL_Find(SList list,int *pos,Item item);
int SL_IsEmpty(SList list);
int SL_Size(SList list);
int SL_Clear(SList *p_list);

#endif
