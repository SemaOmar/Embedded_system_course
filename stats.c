/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test);
  print_array(test,10);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char data[SIZE])
{    
  printf("El numero maximo es: %u \n",find_maximum(data,SIZE));
  printf("El numero minimo es: %u \n",find_minimum(data,SIZE));
  printf("La mediana es: %u \n",find_median(data,SIZE));
  printf("La media es: %u \n",find_mean(data,SIZE));
  return;
}
void print_array(unsigned char data[SIZE], unsigned int len){
  for (int i = 0; i < len;i++){
    printf("%u \n",data[i]);
  }
  return;
}
unsigned char find_median(unsigned char data[SIZE], unsigned int len){
  unsigned char aux = 0;
  aux = len/2;
  aux = aux + 1;
  return data[aux];
}
unsigned char find_mean(unsigned char data[SIZE], unsigned int len){
  unsigned int media = 0;
  unsigned char mean = 0;
  for (int i = 0; i< len;i++){    
      media = media + data[i];
  }
  media = media/len;
  mean = (char)media;
  return mean; 
}
unsigned char find_maximum(unsigned char data[SIZE], unsigned int len){
  unsigned char max = data[0];
  for (int i = 0; i< len;i++){
    if (data[i] > max){
      max = data[i];
    }   
  }  
  return max;
}
unsigned char find_minimum(unsigned char data[SIZE], unsigned int len){
unsigned char min = data[0]; 
  for (int i = 0; i< len;i++){      
    if (data[i] < min)
    {
      min = data[i];
    }      
  }
  return min;   
}