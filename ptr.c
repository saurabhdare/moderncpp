#include <stdio.h>

int main() {
    int ages[] = { 24, 43, 12, 89, 2 };
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages.
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    for (i = 0; i < count; ++i) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("----------------------------\n");

    // set up the pointers to the start of the arrays
    int *cur_age = ages;
    char **cur_name = names;

    for (i = 0; i < count; ++i) {
        printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    }

    printf("----------------------------\n");

    // pointers are arrays
    for (i = 0; i < count; ++i) {
        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    }

    printf("----------------------------\n");

    for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
        printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    }

    return 0;
}

