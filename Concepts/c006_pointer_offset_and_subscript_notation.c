#include<stdio.h>
void main()
{
    int i,j;
     int arr[]={40,60,10,30,70};  
    int *ptr1,*ptr11;      void *ptr111=arr;// void pointers cannot be dereferenced so we need to typecast them
    ptr1=arr;                               // void pointer can be used with any datatype and any no of times we just need to typecast it to proper datatype while printing 
    ptr11=&arr[1]; //see line 15 now
    //arr == &arr == &arr[0] i.e. name of array is the base address of the array 

    printf("11. Array 1 is\n");
    for(i=0;i<5;i++)
        printf("%d ",arr[i]);
    printf("\n14. Base address of Array 1 is %d\n",arr);// we can also use (int *)ptr111 where (int *) is for type casting of void pointer 
    printf("15. %d\t%d\n",*(ptr11-1),*ptr11);
    printf("16. %d = %d\n",ptr1,arr);
    /* we can use the name of the array just like a pointer for all the dereferencing but its not same as a pointer variable
    in this we can say ptr1=arr (like in ine 7) but arr=ptr1 is compilation error  ####add comment terminator here */
    printf("19. %d = %d\n",*ptr1,*arr); //arr == arr[0]
    printf("20. %d = %d = %d = %d\n",*(ptr1+3),arr[3],*(arr+3),ptr1[3]); // *(arr+i) == arr[i] , these are alternate syntax
    printf("21. %d = %d\n",arr+2,&arr[2]); // arr+i == &arr[i] , these are alternate syntax
    printf("22. Subtraction of two addresses %d - %d = %d\n",&arr[2],&arr[0],&arr[2]-&arr[0]); //this will give no. of elements b/w them
   
    printf("\n24. %d\n",++*ptr1); //value at arr[0] is increased by 1 and no change in address
        for(i=0;i<5;i++)
        printf("%d ",arr[i]);
printf("\nUpadted value of ptr1 =  %d\n",ptr1);
    printf("\n28. %d\n",*(ptr1++)); // diplays value of arr[0] but ptr1 is now updated to address of arr[1] due to post increment
        for(i=0;i<5;i++)
        printf("%d ",arr[i]);
printf("\nUpadted value of ptr1 =  %d\n",ptr1);
    printf("\n32. %d\n",*ptr1++); // similar to line 28 and now ptr1 is updated to address of arr[2]
        for(i=0;i<5;i++)
        printf("%d ",arr[i]);
printf("\nUpadted value of ptr1 =  %d\n",ptr1);
    printf("\n36. %d\n",(*ptr1)++); // increase value of arr[2] by 1 but will display previous value due to post increment
        for(i=0;i<5;i++)
        printf("%d ",arr[i]);
printf("\nUpadted value of ptr1 =  %d\n",ptr1);
    printf("\n40. %d\n",*(++ptr1)); // similar to line 28 but now with pre increment
        for(i=0;i<5;i++)
        printf("%d ",arr[i]);
printf("\nUpadted value of ptr1 =  %d\n",ptr1);
    printf("\n44. %d\n",*++ptr1); // similar to line 28 as (see line 48)
        for(i=0;i<5;i++)
        printf("%d ",arr[i]);
printf("\n47. Upadted value of ptr1 =  %d\n",ptr1);
// So line 28 32 40 and 44 are similar.Reason - predence of ++ > * 
// But precedence of + < * so
printf("50. %d\t%d\t%d\t%d\n",*arr+3,*ptr1+4,*(&arr[2]+2),*&arr[2]+5); // *&arr[2]+5 is similar to *(&arr[2])+5 as precedence of & > * > +
     for(i=0;i<5;i++)
        printf("%d ",arr[i]);
printf("\nUpadted value of ptr1 =  %d\n",ptr1); 


    int arr2[3][4]={{3,1,5,8},{4,9,14,16},{10,13,2,7}};  
    int *ptr2=&arr2[0][0]; /* <- dont use this*/         int (* ptr22)[4]=arr2; // this one is preffered
        printf("\n\n58. Base address of Array 2 is %d\t%d\t%d\t%d\n",arr2,ptr2,ptr22,arr2[0]); 
        printf("59. Address of A[0][0] = %d\n",&arr2[0][0]);
         printf("60. Array 2 is\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            printf("%d ",arr2[i][j]);
            printf("\n");
        }

        printf("\n68. Address of Array 2 is\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            printf("%d ",&arr2[i][j]);
            printf("\n");
        }
    printf("\n75. %d\t%d\n",*(ptr2+5),*(*(ptr22+2)+1));
    printf("76. %d , %d , %d , %d\n",ptr2+2,ptr22+2,arr2[0]+2,arr2[2]);
    printf("77. %d\n",(*ptr22)[2]);    //this is equivalent to arr2[0][2] 
    printf("78. %d\n",(*(ptr22 + 1))[2]); // this is equivalent to arr2[1][2]
    ptr22++;
    printf("80. %d\n",ptr22);
}