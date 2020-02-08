#ifndef BIT2_T
#define BIT2_T
#include "array.h"
#include "bit.h"
#define T Bit2_T

typedef struct T *T;
extern T   Bit2_new   (int length,int width);
extern int Bit2_length(T Bit2);
extern int Bit2_width(T Bit2);
extern int Bit2_area(T Bit2);
extern void Bit2_free(T *Bit2);
extern void Bit2_size(T Bit2);
extern int Bit2_get(T Bit2, int x, int y);
extern int Bit2_put(T Bit2, int x, int y, int bit);
extern void Bit2_map_col_major(T Bit2,
 	int apply(int x, int y, T Bit2, int *idxPtr, void *cl), void *cl);
extern void Bit2_map_row_major(T Bit2,
 	int apply(int x, int y, T Bit2, int *idxPtr, void *cl), void *cl);
#undef T
#endif