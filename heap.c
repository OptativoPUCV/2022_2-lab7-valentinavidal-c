#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include "heap.h"

typedef struct nodo{
   void* data;
   int priority;
}heapElem;

typedef struct Heap{
  heapElem* heapArray;
  int size;
  int capac;
} Heap;


void* heap_top(Heap* pq){
  if(pq->size==0) return NULL;
  return pq->heapArray[0].data;
}



void heap_push(Heap* pq, void* data, int priority){
  int now = pq->size;

  while(now>0 && pq->heapArray [(now-1)/2].priority < priority){
    pq->heapArray[now] = pq->heapArray[(now-1)/2];
    now = (now-1)/2;
  }
}


void heap_pop(Heap* pq){

}

Heap* createHeap(){
  Heap * new = (Heap *)malloc(sizeof(Heap));
  new->heapArray=(heapElem *)malloc(3*sizeof(heapElem));
  new->size = 0;
  new->capac = 3;
  return new;
}
