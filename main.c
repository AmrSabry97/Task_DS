#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task.h"

void Display(TaskEntry e)
{
    printf("=> %s\n", e);
}

int main(void)
{
    Task todo, completed;
    char buffer[100];

    CreateTask(&todo);
    CreateTask(&completed);

    scanf("%99s", buffer);

    TaskEntry new = malloc(strlen(buffer) + 1);
    if (!new)
        return 1;
    strcpy(new, buffer);

    AddTask(new, &todo);

    TraverseTask(&todo, &Display);

    MoveTask(0, &todo, &completed);

    TraverseTask(&completed, &Display);

    return 0;
}
