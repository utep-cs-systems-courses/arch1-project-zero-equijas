#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

//Prints an arrow
void print_arrow(int leftCol, int size)
{
  for (int row = 0; row <= size*2; row++) {

    
    if (row < size) {
      for (int col = 0; col <= row*2; col++) {
	if (col >= row) {
	  putchar('*');
	}
	else {
	  putchar(' '); 
	}
      }
      putchar('\n');
    }
    if (row >= size) {
      int minCol = leftCol+10 + size*2 - row, maxCol = leftCol+10 + size*2 + row;
      int col;
      for (col = 13; col < minCol+10; col++) {
	if (col > minCol) {
	  putchar('*'); 
	} else {
	  putchar(' ');
	}
      }
      for (       ; col <= maxCol+10; col++) {
	if (col >= maxCol) {
	  putchar(' '); 
	}
 
      }
      putchar('\n');
    }
  }
}

