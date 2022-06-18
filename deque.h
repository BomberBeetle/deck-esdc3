#include <stdbool.h>

struct _noDeque {
    int valor;
    struct _noDeque* next;
    struct _noDeque* prev;
};
typedef struct _noDeque noDeque;

struct _Deque{
    noDeque* front;
    noDeque* rear;
};
typedef struct _Deque Deque;

Deque* criaDeque();
void destroiDeque(Deque*);
bool isEmptyDeque(Deque*);
void printDeque(Deque*); //Imprime todos el.
void insereFrenteDeque(Deque*, noDeque*);
void insereFimDeque(Deque*, noDeque*);
noDeque* removeFrenteDeque(Deque*);
noDeque* removeFimDeque(Deque*);
noDeque* alocaNo(int);
void destroiNo(noDeque*);
