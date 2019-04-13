#include "list/linkedlist.h"

int main()
{
    SList *list;
    SL_Creat(list,10);
    SL_Insert(*list,1,1);
    Item item;
    SL_GetItem(*list,1,item);
    printf(item);
}