#include "task.h"
#include <stdlib.h>

void CreateTask(Task *pt)
{
    pt->head = NULL;
    pt->size = 0;
}

int AddTask(TaskEntry e, Task *pt)
{
    TaskNode *p;
    p = malloc(sizeof(TaskNode));

    if (!p)
        return 0;

    p->entry = e;
    p->next = NULL;

    if (pt->size == 0)
    {
        pt->head = p;
    }
    else
    {
        TaskNode *last = pt->head;
        while (last->next != NULL)
            last = last->next;
        last->next = p;
    }
    pt->size++;
    return 1;
}

int MoveTask(int pos, Task *todo, Task *completed)
{
    TaskNode *target;
    TaskNode *previous;

    if (pos < 0 || pos >= todo->size)
        return 0;
    else
    {
        if (pos == 0)
        {
            target = todo->head;
            todo->head = todo->head->next;
        }
        else
        {
            previous = todo->head;

            for (int i = 0; i < pos - 1; i++)
            {
                previous = previous->next;
            }
            target = previous->next;
            previous->next = target->next;
        }
        todo->size--;

        target->next = NULL;

        if (completed->head == NULL)
        {
            completed->head = target;
        }
        else
        {
            TaskNode *last = completed->head;

            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = target;
        }
        completed->size++;
        return 1;
    }
}

int TaskSize(Task *pt)
{
    return pt->size;
}

void TraverseTask(Task *pt, void (*Show)(int, TaskEntry))
{
    TaskNode *p = pt->head;
    int i = 0;

    while (p)
    {
        (*Show)(i++, p->entry);
        p = p->next;
    }
}

void DestroyTask(Task *pt)
{
    TaskNode *p = pt->head;

    while (pt->head)
    {
        p = pt->head->next;
        free(pt->head->entry);
        free(pt->head);
        pt->head = p;
    }
    pt->size = 0;
}
