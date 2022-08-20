#ifndef SQUARE_H
#define SQUARE_H
int squarePassByValue(int val) {
    return val * val;
}

void squarePassByReference(int &ref) {
    ref = ref * ref;
}

void squarePassByPointer(int *ptr) {
    *ptr = (*ptr) * (*ptr);
}

#endif