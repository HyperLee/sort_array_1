//
//  main.c
//  sort_array_1
//
//  Created by HyperLee on 2022/2/18.
//  bubble sort , sort array
//  https://dangerlover9403.pixne.net/blog/post/27914239-%5B%E6%95%99%E5%AD%B8%5D-(c++-c-)sort-(%E6%8E%92%E5%BA%8F%E6%B3%95)

#include <stdio.h>
#include <stdlib.h>
void PrintArray (int nSize, int A[]);

void BubbleSort(int nsize, int a[])
{
    int i , j , t ;

    for (i = 1 ; i< nsize; i++)
    {
        for (j = 0 ; j < nsize - 1 ;j++)
        {
            if (a[j] > a[j+1])
            {
                t        = a[j] ;
                a[j]    = a[j+1] ;
                a[j+1]    = t;

                //print
                //PrintArray(nsize , a) ;

            }
        }
    }
}


void PrintArray (int nSize, int A[])
{
    //驗證
    printf("\n");
    for (int i = 0 ; i< nSize ; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {

    int A[] = {6,1,3,2,8} ;

    int nSize  = sizeof (A) /sizeof (A[0]) ;
    
    printf("Before: ");
    PrintArray(nSize,A) ;
    BubbleSort(nSize,A) ;
    printf("After: ");
    PrintArray(nSize,A);
    
    return 0;
}
