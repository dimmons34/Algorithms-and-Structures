
#include "geek.h"

int bracesCheck(char* expression) {
    const int TYPES = 3;
    char braces[][2] = {{'(', ')'},
                        {'{', '}'},
                        {'[', ']'}};

    OneLinkList *st = (OneLinkList*) malloc(sizeof(OneLinkList));
    initOneLinkList(st);
    int countIndex = 0;
    while (*expression != '\0') {
        for (int i = 0; i < TYPES; ++i) {
            if (*expression == braces[i][0])
                pushOneLinkStack(st, i);
        }
        for (int i = 0; i < TYPES; ++i) {
            if (*expression == braces[i][1]) {
                if (st->size == 0)
                    return countIndex;      // )(
                if (i == st->head->dat)
                    popOneLinkStack(st);
                else                        // {]
                    return countIndex;
            }
        }
        expression++;
        countIndex++;
    }
    if(st->size != 0) //(
        return 0;
    return -1;
}

void copyList(OneLinkList* from, OneLinkList* to) {
    int size = from->size;
    OneLinkNode *current = from->head;
    while (size != 0) {
        for (int i = 0; i < size - 1; ++i) {
            current = current->next;
        }
        pushOneLinkStack(to, current->dat);
        size--;
        current = from->head;
    }
}

boolean isSorted(OneLinkList *lst) {
    OneLinkNode *current = lst->head;
    while (current->next != NULL) {
        if (current->dat > current->next->dat)
            return false;
        current = current->next;
    }
    return true;
}

void Lesson_10() {
    bracesCheck("()");
    printf("(): %d \n", bracesCheck("()"));
    printf("(: %d \n", bracesCheck("("));
    printf("{}(]: %d \n", bracesCheck("{}(]"));
    printf("{ ( [ {} [] () ] ( }: %d \n", bracesCheck("{ ( [ {} [] () ] ( }"));
    printf("[2/{5*(4+7)}]: %d \n", bracesCheck("[2/{5*(4+7)}]"));

    OneLinkList* first = (OneLinkList*) malloc(sizeof(OneLinkList));
    initOneLinkList(first);
    OneLinkList* second = (OneLinkList*) malloc(sizeof(OneLinkList));
    initOneLinkList(second);
    for (int i = 9; i > 1; --i) {
        pushOneLinkStack(first, i);
    }
    printOneLinkIntList(first);
    copyList(first, second);
    printOneLinkIntList(second);
    printf("%s \n", isSorted(first) ? "true" : "false");

}

int main(){
   Lesson_10();
    return 0;
}
