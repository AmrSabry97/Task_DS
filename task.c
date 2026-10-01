#include "task.h"
#include <stdlib.h>

void CreateTask(Task *pt)
{
    pt->head = NULL;
    pt->current = pt->head;
    pt->size = 0;
}

int AddTask(int pos, TaskEntry e, Task *pt)
{
    pos = pt->size;
    TaskNode *p;
    p = malloc(sizeof(TaskNode));

    if (p)
    {
        p->entry = e;
        p->next = NULL;

        if (pos == 0)
        {
            p->next = pt->head;
            pt->head = p;
            pt->current = pt->head;
        }
        else
        {
            p->next = pt->current->next;
            pt->current->next = p;
        }
        pt->size++;
        return 1;
    }
    else
        return 0;
}

int CompletedTask(Task *pt)
{
}

int TaskSize(Task *pt)
{
    return pt->size;
}
