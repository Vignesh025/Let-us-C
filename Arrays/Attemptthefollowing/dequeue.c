#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

char dequeue[MAX_SIZE];
int left = -1, right = -1;

void insertLeft(char element) {
    if ((left == 0 && right == MAX_SIZE - 1) || (left == right + 1)) {
        printf("Dequeue is full\n");
        return;
    }
    if (left == -1) {
        left = right = 0;
    } else if (left == 0) {
        left = MAX_SIZE - 1;
    } else {
        left--;
    }
    dequeue[left] = element;
}

void insertRight(char element) {
    if ((left == 0 && right == MAX_SIZE - 1) || (left == right + 1)) {
        printf("Dequeue is full\n");
        return;
    }
    if (left == -1) {
        left = right = 0;
    } else if (right == MAX_SIZE - 1) {
        right = 0;
    } else {
        right++;
    }
    dequeue[right] = element;
}

char retrieveLeft() {
    if (left == -1) {
        printf("Dequeue is empty\n");
        return '\0';
    }
    char element = dequeue[left];
    if (left == right) {
        left = right = -1;
    } else if (left == MAX_SIZE - 1) {
        left = 0;
    } else {
        left++;
    }
    return element;
}

char retrieveRight() {
    if (left == -1) {
        printf("Dequeue is empty\n");
        return '\0';
    }
    char element = dequeue[right];
    if (left == right) {
        left = right = -1;
    } else if (right == 0) {
        right = MAX_SIZE - 1;
    } else {
        right--;
    }
    return element;
}

int main() {
    insertLeft('a');
    insertRight('b');
    insertLeft('c');
    insertRight('d');
    printf("Retrieved from left: %c\n", retrieveLeft());
    printf("Retrieved from right: %c\n", retrieveRight());
    printf("Retrieved from left: %c\n", retrieveLeft());
    printf("Retrieved from right: %c\n", retrieveRight());
    insertLeft('e');
    insertRight('f');
    printf("Retrieved from left: %c\n", retrieveLeft());
    printf("Retrieved from right: %c\n", retrieveRight());
    return 0;
}