#include <stdio.h>
#include "my_mat.h"
int main()
{
    char ch;
    scanf("%c", &ch);
    int mat[10][10];
    int ind_1, ind_2;
     while(ch != 'D')
     {
         if(ch == 'A')
         {
            func_A(mat);
         }
         else if(ch == 'B')
         {
             scanf("%d" "%d", &ind_1, &ind_2);
             func_B(ind_1, ind_2, mat);
             printf("\n");
         }
         else if(ch == 'C')
         {
             scanf("%d" "%d", &ind_1, &ind_2);
             func_C(ind_1, ind_2, mat);
             printf("\n");
         }
         scanf("%c", &ch);
     }
     return 0;
}