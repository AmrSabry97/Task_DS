#ifndef TASK_H
#define TASK_H

typedef char *TaskEntry;

typedef struct tasknode
{
    TaskEntry entry;
    struct tasknode *next;
} TaskNode;

typedef struct task
{
    TaskNode *head;
    int size;
} Task;

void CreateTask(Task *pt);
int TaskSize(Task *pt);
int AddTask(TaskEntry e, Task *pt);
int MoveTask(int pos, Task *todo, Task *completed);
void TraverseTask(Task *pt, void (*Show)(TaskEntry));
void DestroyTask(Task *pt);

#endif