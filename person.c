#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *person_create(char *name, int age, int height, int weight) {
    struct Person *who = malloc(sizeof(struct Person));

    assert(who != NULL);
    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void person_destroy(struct Person *who) {
    assert(who != NULL);

    free(who->name);
    free(who);
}

void person_print(struct Person *who) {
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main() {
    // make two people
    struct Person *joe = person_create("Joe Alex", 32, 60, 140);
    struct Person *frank = person_create("Frank Blank", 20, 72, 180);

    // print them out and their location
    printf("Joe is at memory location %p:\n", joe);
    person_print(joe);

    printf("Frank is at memory location %p:\n", frank);
    person_print(frank);

    // make everyone age 20 years and print them
    joe->age += 20;
    joe->weight += 20;
    person_print(joe);
    
    frank->age += 20;
    frank->weight += 20;
    person_print(frank);

    // destroy them both so we clean up
    person_destroy(joe);
    person_destroy(frank);

    return 0;
}
