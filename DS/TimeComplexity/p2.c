#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>


#define SIZE 100000
#define NOT_FOUND -1

typedef int ElementType;
typedef int Position;

void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


void BubbleSort_r(ElementType arr[],Position size)
{    
    	int i, pass, j, temp;
	//Code for bubble sort
	for(pass=1;pass<=size-1;pass++)
	{
		int flag=0;
		for(j=0;j<=size-pass-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}//End of 'if'
		}//End of 'j' loop
		if(flag==0)
			break;
	}//End of 'pass' loop

}

void SelSort_r(ElementType arr[],Position size)
{
	int i, j, min_index;
	//Code for Selection sort
	for(i=0; i<=size-1; i++)
	{
		min_index = i;
		for(j=i+1; j<=size-1; j++)
			if(arr[j] < arr[min_index])
				min_index = j;
		swap(&arr[i], &arr[min_index]);
	}//End of 'for'
}


void populate(ElementType aCollection[], int size, int start, int end)
{
  assert(start < end);

  srand( time(NULL) ); //srand(time(NULL)); makes use of the computer's internal clock to control the choice of the seed.  Since time is continually changing, the seed is forever changing.  Remember, if the seed number remains the same, the sequence of numbers will be repeated for each run of the program.
  int i;

  for(i=0; i < size; i++) {
    aCollection[i] = (rand() % (end - start)) + start; //In order to produce random integer numbers within a specified range,
  }

}

void print_array(ElementType aCollection[], int from, int to)
{
    int i;
  assert(from >= 0);
  assert(from < to);
  assert(to <= SIZE);

  printf("<");
  for (i=from; i < to; i++) {
    printf("%d; ", aCollection[i]);
  }
  printf(">\n");
}

int int_compare(const void * e1, const void * e2)
{
  int * ele1 = (int *) e1;
  int * ele2 = (int *) e2;

  if (*ele1 > *ele2)
    return 1;
  if (*ele1 < *ele2)
    return -1;
  return 0;
}


int main()
{
  ElementType arr[SIZE];
  ElementType key;

  populate(arr, SIZE, 0, 1000000);

  print_array(arr, 0, SIZE);


    clock_t start, end;
    double cpu_time;

    start = clock();
    BubbleSort_r(arr,SIZE);
    end = clock();
    cpu_time = ((double) (end - start)) / CLOCKS_PER_SEC;

      printf("\nBubbleSort found took %f seconds\n", cpu_time);

    start = clock();
    SelSort_r(arr,SIZE);
    end = clock();
    cpu_time = ((double) (end - start)) / CLOCKS_PER_SEC;

      printf("\nSelSort found took %f seconds\n", cpu_time);

  return 0;
}
