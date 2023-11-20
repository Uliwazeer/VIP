#include <stdio.h>
#include <stdlib.h>
int *array_scanDynamic(int *ptr_size)
{
    int i,size;
    printf("ENTER YOUR TOTAL NUMS:\n");
    scanf("%d",&size);
    int *arr=(int *)malloc(size * sizeof(int));
    if(arr != (void*)0){
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    }
    *ptr_size = size;
     array_print(arr,size);
     return arr;

}
int main()
{   char str[]="Ali Nour5!wazeer MohAmEed";
    char str2[100];
    string_copyNoRepeat(str,str2);
    string_print(str2);



    in
    return 0;
}
