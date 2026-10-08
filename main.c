#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "task.h"

void Display(int index, TaskEntry e)
{
    printf("%d => %s\n", index + 1, e);
}

int main(void)
{
    Task todo, completed;
    char buffer[100];
    int choice, n;
    int Green = 0;

    CreateTask(&todo);
    CreateTask(&completed);

    /*scanf("%99s", buffer);

    TaskEntry new = malloc(strlen(buffer) + 1);
    if (!new)
        return 1;
    strcpy(new, buffer);

    AddTask(new, &todo);

    TraverseTask(&todo, &Display);

    MoveTask(0, &todo, &completed);

    TraverseTask(&completed, &Display);*/
    do
    {
        printf("\n=== GRB_To-Do-List ===\n\n");
        printf("1. Add Task \n2. Complete Task \n3. Show Tasks \n4. Destroy \n5. Exit\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            scanf("%99s", buffer);

            TaskEntry newTask = malloc(strlen(buffer) + 1);
            if (!newTask)
                return 1;
            strcpy(newTask, buffer);

            AddTask(newTask, &todo);

            /*if (!AddTask(newTask, &todo))
            {
                free(newTask);
                printf("Could not add task\n");
            }*/
            break;
        }

        case 2:
        {
            printf("Task number: ");
            if (scanf("%d", &n) == 1)
            {
                if (MoveTask(n - 1, &todo, &completed))
                {
                    Green++;
                    printf("Green Points : %d", Green);
                }
                else
                {
                    printf("Invalid task number\n");
                }
            }
            break;
        }
        case 3:
        {
            printf("\n=== TO-DO ===\n");
            TraverseTask(&todo, &Display);

            printf("\n=== COMPLETED ===\n");
            TraverseTask(&completed, &Display);

            printf("\nand you got %d green points.\n", Green);
            break;
        }

        case 4:
        {
            DestroyTask(&todo);
            DestroyTask(&completed);
            CreateTask(&todo);
            CreateTask(&completed);
            printf("All tasks destroyed\n");
            break;
        }

        case 5:
            printf("Exiting...\n");
            break;

        default:
            printf("Error 404");
        }
    } while (choice != 5);

    printf("GoodBye!");

    return 0;
}
