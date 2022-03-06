#pragma once
#include "elevio.h"
#include "con_load.h"
#include <stdbool.h>



/*
Hvis buttonType = CAB: floor er etasjen som vi skal til.
Hvis buttonType = UP/DOWN: floor er etasjen der knappen har blitt trykket.
*/

typedef struct {
    ButtonType buttonType;
    int floor;
} Request;       // Navn: request

Request buttonCheck();

void leftShiftQueue(Request* queue_ptr, int size);

bool checkIfInQueue(Request* queue_ptr, Request element, int size);

void addToQueue(Request* queue_ptr, Request element, int size);

void resetQueue(Request* queue_ptr, int size);

bool checkNoRequests(Request* queue_ptr, int size);

void printQueue(Request* queue_ptr, int size);

void removeDuplicates(Request* queue_ptr, int size);

int numRequestsAtFloor(Request* queue_ptr, int floor);

void requestLights(Request* queue_ptr, int size);

void removeFloorRequest(Request* queue_ptr, int size, int floor);

bool requestOnTheWay(Request* queue_ptr, ButtonType direction, int floor, int size);    // 1 up, 0 down


//void removeDuplicateNeighboursInQueue(Request* queue_ptr, int size);




// Request queue[g_queueSize]; Skal være global i main.

