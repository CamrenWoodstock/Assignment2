#ifndef UARRAY2_INCLUDED
#define UARRAY2_INCLUDED
#include "array.h"
#define T UArray2_T

typedef  struct T *T;
extern T UArray2_new(int length, int width, int size);
extern void UArray2_free(T *UArray2);
extern int UArray2_length(T UArray2);
extern int UArray2_width(T UArray2);
extern int UArray2_size(T UArray2);
extern void *UArray2_at(T UArray2, int x, int y);
extern void UArray2_map_col_major(T UArray2,
apply(int xIndex, int yIndex, T UArray2, void *indexPtr, void *cl), void *cl);
extern void UArray2_map_row_major(T UArray2, 
apply(int xIndex, int yIndex, T UArray2, void *indexPtr, void *cl), void *cl);

#undef T
#endif
