#include "sort.h"

int compare(const void* a, const void* b)
{
    double diff =  *(double*)a - *(double*)b;
    return diff > 0 ? 1 : diff < 0 ? -1 : 0;
}

void quicksort(double* arr, long arr_size)
{
    qsort(arr, arr_size, sizeof(double), compare);
}

void selectionsort(double* arr, long arr_size)
{
     int i, j, min;
     double x;
     for(i = 0; i < arr_size - 1; i++){
         min = i;
         for(j = i + 1; j <= arr_size; j++){
             if(arr[j] < arr[min]){
                 min = j;
             }

         }
             x = arr[min];
            arr[min] = arr[i];
            arr[i] = x;
     }
 }

void insertionsort(double* arr, long arr_size)
{
    int i, j;
    double x;
    for(i = 1; i <= arr_size; i++){

        x = arr[i];
        j = i - 1;

        while(j >= 0 && x < arr[j]){

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

void radixsort(double* arr, long arr_size)
{
    //obter o maior elemento do vetor
    double max = arr[0];
    for (int i = 1; i < arr_size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // descobrir a quantidade de digitos do maior numero
    int contador = 0;
    double temp_max = max;
    while (temp_max >= 1)
    {
        temp_max /= 10.0;
        contador++;
    }


    int expoente = 1;

    expoente *= 10;
    }
}
