#include <stdio.h>

typedef struct Person Person, *pnt;

struct Person {
    char name[24];
    int age;
    char profession[32];

    pnt (*display_info)(Person *);
};

pnt display_info_person(Person *prsn){
    printf("%s %d %s\n", prsn->name, prsn->age, prsn->profession);
    return 0;
}

int main() {
    Person prs = {.name = "Elliot", .age = 25, .profession = "Slave", .display_info = display_info_person};
    prs.display_info(&prs);
    return 0;
}
