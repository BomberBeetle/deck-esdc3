#include "deque.h"

#include <stdlib.h>
#include <stdio.h>

Deque* criaDeque(){
    Deque* deck_pointer = malloc(sizeof(Deque));
    deck_pointer->front = NULL;
    deck_pointer->rear = NULL;
    return deck_pointer;
}

void destroiDeque(Deque* deck){
    noDeque* current = deck->front;
    noDeque* buf;
    while(current != NULL){
        buf = current;
        current = current->next;
        free(buf);
    }
    free(deck);
}

bool isEmptyDeque(Deque* deck){
    if(!deck->front && !deck->rear){
        return true;
    }
    return false;
}

void printDeque(Deque* deck){
    noDeque* current = deck->front;
    noDeque* buf;
    while(current != NULL){
        printf("[%d]", current->valor);
        current = current->next;
    }
}

void insereFrenteDeque(Deque* deck, noDeque* toIns){
    deck->front->prev = toIns;
    deck->front = toIns;
}

void insereFimDeque(Deque* deck, noDeque* toIns){
    deck->rear->next = toIns;
    deck->rear = toIns;
}

noDeque* removeFrenteDeque(Deque* deck){
    noDeque* buf;
    buf = deck->front;
    buf->next = NULL;

    deck->front = deck->front->next;
    deck->front->prev = NULL;

    return buf;
}

noDeque* removeFimDeque(Deque* deck){
    noDeque* buf;
    buf = deck->rear;
    buf->prev = NULL;

    deck->rear = deck->rear->prev;
    deck->rear->next = NULL;

    return buf;
}

noDeque* alocaNo(int val){
    noDeque* newNode = malloc(sizeof(noDeque));
    newNode->valor = val;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void destroiNo(noDeque* node){
    if(node != NULL){
        free(node);
    }
}