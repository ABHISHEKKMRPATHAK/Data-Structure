/* insertion Sort */

#include<stdio.h>
int main()
{
    int length,i,j,A[20],key;
    printf("enter length of string :\n");
    scanf("%d",&length);
    for(i=0;i<length;i++){
        printf("A[%d] : \n",i);
        scanf("%d",&A[i]);
    }
      for(j=1;j<length;j++)
      {
          key=A[j];
          i=j-1;
            while(i>=0 && A[i]>key)
            {
                A[i+1]=A[i];
                i=i-1;
            }
        A[i+1] = key;
      }
      for(i=0;i<length;i++){
        printf("A[%d] : %d\n",i,A[i]);
    }
      return 0;
}