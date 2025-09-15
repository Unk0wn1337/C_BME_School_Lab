#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define SIZE 10

// global array of ints
int list[SIZE];

int* make_an_random_number_list() {
    for (int i = 0; i < SIZE; ++i) {
        list[i] = rand() % 100;
    }
    return list;
}

int first_task() {
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
    char*  pitagorasz = fourth_task_name_list();
    int length = strlen(pitagorasz);
    for (int i = 0; i <= 10; ++i) {
        for (int j = 0; j < length; ++j) {
            int index = ( i + j) % length;
            printf("%c ", pitagorasz[index]);
        }
        printf("\n");
    }
    printf("atment");
    return 0;
}

int tasks_container() {
    first_task();
    second_task();
    third_task();
    fourth_task();

    return 0;
}

int main(void) {
    tasks_container();


    return 0;
}
