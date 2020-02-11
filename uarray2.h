#ifndef UARRAY2_INCLUDED
#define UARRAY2_INCLUDED
#include "array.h"
#define T UArray2_T
typedef struct T *T;

extern T UArray2_new(int length, int width, int size);
extern void UArray2_free(T *grid);
extern int UArray2_length(T grid);
extern int UArray2_width(T grid);
extern int UArray2_size(T grid);
extern void *UArray2_at(T grid, int x, int y);
extern void UArray2_map_col_major(T grid,
apply(int xIndex, int yIndex, T grid, void *indexPtr, void *cl), void *cl);
extern void UArray2_map_row_major(T grid, 
apply(int xIndex, int yIndex, T grid, void *indexPtr, void *cl), void *cl);

#undef T
#endif
