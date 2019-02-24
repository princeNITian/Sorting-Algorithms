#include <stdio.h>
#include <stdlib.h>

// merge function
 void merge(int arrayA[],int sizeA,int arrayB[],int sizeB,int arrayC[])
    {
        int aDex=0, bDex=0, cDex=0;
        int count=0;
        
        while(aDex<sizeA && bDex<sizeB){
        
            if(arrayA[aDex] < arrayB[bDex])
            arrayC[cDex++]=arrayA[aDex++];
            else
            arrayC[cDex++]=arrayB[bDex++];
        count++;
        }
        while(aDex<sizeA){
        arrayC[cDex++]=arrayA[aDex++];
        count++;
        }
        while(bDex<sizeB){
        arrayC[cDex++]=arrayB[bDex++];
        count++;
        }
        printf("No. of times loop is running is: %d\n\n---------------------------\n",count);
    }

// display function
  void display(int newArray[],int size)
    {
        for(int j=0;j<size;j++)
        printf("%d\n",newArray[j]);
    }



int main(){
int arrayA[4]={23,47,82,95};
int arrayB[6]= {7,14,39,55,62,74};
int arrayC[10];
merge(arrayA,4,arrayB,6,arrayC);
display(arrayC,10);
    return 0;
}

