#include <stdio.h>

struct coordinate {
    int x;
    int y;
};

struct car {
    int engineSize;
    int colour;
    char *make;
    char *model;
};

struct operation {
    int code;
    char operator;

    double (*functionPtr)(double, double);
};

struct time {
    int s;
    int m;
    int h;
};

void printTime(struct time *T) {
    printf("\n%i:%i:%i", T->h, T->m, (*T).s);
}

struct time subtractTimes(struct time *time1, struct time *time2) {
    struct time diff;
    diff.h = time1->h - time2->h;
    diff.m = time1->m - time2->m;
    diff.s = time1->s - time2->s;
    return diff;
}

int main() {
    struct time t0;
    struct time t1;
    printf("Podaj pierwszy czas\n");
    printf("H =");
    scanf("%i", &t0.h);
    printf("M =");
    scanf("%i", &t0.m);
    printf("S =");
    scanf("%i", &t0.s);
    printTime(&t0);
    printf("\nPodaj drogi czas\n");
    printf("H =");
    scanf("%i", &t1.h);
    printf("M =");
    scanf("%i", &t1.m);
    printf("S =");
    scanf("%i", &t1.s);
    printTime(&t1);
    struct time difference = subtractTimes(&t0, &t1);
    printTime(&difference);
    return 0;
}
