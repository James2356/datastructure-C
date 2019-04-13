#ifndef _ARRAY_LIST_H
#define _ARRAY_LIST_H

#include<stdio.h>
#include<stdlib.h>   //包含了exit函数
#include<stdbool.h>
#include<malloc.h>
//定义一个新的数据类型,并没有分配内存空间
struct Array
{
   int *pBase; //定义一个指向数组的指针
   int len;    //数组中能够存放的最大元素个数
   int cnt;    //当前数组中元素的个数
};
 
void Init_arr(struct Array *pArr,int len);//初始化数组
bool append_arr(struct Array *pArr,int val);//在数组后追加一个元素
bool Insert_arr(struct Array *pArr,int pos,int val);//指定位置插入元素
bool Delete_arr(struct Array *pArr,int pos,int *val);//指定位置删除元素
 
bool IsFull_arr(struct Array *pArr);//判断数组是否满
bool IsEmpty_arr(struct Array *pArr);//判断数组是否空
 
void show_arr(struct Array *pArr);//打印数组中的元素
void Inversion_arr(struct Array *pArr);//倒置数组中的元素
void SelectSort_arr(struct Array *pArr);//选择排序
void BubbleSort_arr(struct Array *pArr);//冒泡排序

#endif