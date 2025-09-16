#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 10


int list[SIZE];

int* make_an_random_number_list() {
    for (int i = 0; i < SIZE; ++i) {
        list[i] = rand() % 100;
    }
    return list;
}

int first_task() {
    printf("Task_1\n");
    srand(time(NULL));
    int* numbers = make_an_random_number_list();
    printf("A tomb: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}

int second_task() {
    printf("Task_2\n");
    srand(time(NULL));
    int* numbers = make_an_random_number_list();
    printf("A tomb: ");
    for (int i = 0; i < SIZE; i++) {
        printf(" [%d]=%d ",i,numbers[i]);
    }
    printf("\n");
    return 0;
}

int third_task() {
    printf("Task_3\n");
    srand(time(NULL));
    int* numbers = make_an_random_number_list();
    printf("A tomb: ");
    int minium_value = numbers[0];
    int index_of_minimal_value = 0;
    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] < minium_value) {
            minium_value = numbers[i];
            index_of_minimal_value = i;
        }
    }
    printf("A legkisebb szam %d\n",minium_value);
    printf("A legkisebb indexe %d\n",index_of_minimal_value);

}
char* fourth_task_name_list() {

return "Pitagorasz";


}

int fourth_task() {
    printf("Task_4\n");
    char*  pitagorasz = fourth_task_name_list();
    int length = strlen(pitagorasz);
    for (int i = 0; i <= 10; ++i) {
        for (int j = 0; j < length; ++j) {
            int index = ( i + j) % length;
            printf("%c ", pitagorasz[index]);
        }
        printf("\n");
    }
    printf("atment\n");
    return 0;
}
int input_value() {
    int input;
    printf("Kerem az erteket: \n");
    scanf("%d", &input);
    return input;
}

int five_task() {
    printf("Task_5\n");
    int* number_list = make_an_random_number_list();
    for (int i = 0; i < SIZE; ++i) {
            printf("[index: %d] = [%d] \n",i,number_list[i]);
    }
    int input = input_value();
    int trueOrFalse = 0;
    int index = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (number_list[i] == input) {
            trueOrFalse = 1;
            index = i;
        }
    }
    if (trueOrFalse == 1) {
        printf("Keresett %d ertek\nIndexe: %d\n",input,index);
    } else {
        printf("Nincs amit megadtal keresett ertek");
    }

    return 0;
}

int six_task() {
    int* list_numbers = make_an_random_number_list();
    printf("Kerem az erteket:\n");
    int input = input_value();
    for (int i = 0; i < SIZE; ++i) {
        if (list_numbers[i] > input) {
            printf(" %d > %d \n",list_numbers[i],input);
        } else if (list_numbers[i] < input) {
            printf(" %d < %d \n",list_numbers[i],input);
        } else {
            printf(" %d = %d \n", list_numbers[i],input);
        }
    }
    return 0;
}

int easier_tasks() {
    first_task();
    third_task();
    second_task();
    fourth_task();
    return 0;
}

int harder_tasks() {
    five_task();
    six_task();
    return 0;
}
int tasks_container() {
    easier_tasks();
    harder_tasks();
    return 0;
}

int main(void) {
    tasks_container();


    return 0;
}
