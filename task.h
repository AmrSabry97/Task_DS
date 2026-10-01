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
    TaskNode *head, *current;
    int size, pos;
} Task;

void CreateTask(Task *pt);
int TaskSize(Task *pt);
int AddTask(int pos, TaskEntry e, Task *pt);
int CompletedTask(Task *pt);

#endif