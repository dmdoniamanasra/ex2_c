#include <stdio.h>
#include "my_mat.h"

int min (int x, int y)
{
    return (x > y) ? y : x;
}

void FW_algo(int mat[10][10])
{
    for(int k = 0; k < 10; k++)
    {
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                if(mat[i][j] != 0 && mat[i][k] != 0 && mat[k][j] !=0)
                {
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
                }
                if(i != j && mat[i][j] == 0 && mat[i][k] != 0 && mat[k][j] != 0)
                {
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }

}
void func_A(int mat[10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
            scanf("%d" , &mat[i][j]);
    }
    FW_algo(mat);
}

void func_B(int index_1, int index_2, int mat[10][10])
{
    if(mat[index_1][index_2] != 0)
    {
        printf("True"); 
    }
    else 
    {
        printf("False");
    }
}
void func_C(int index_1, int index_2, int mat[10][10])
{
    if(mat[index_1][index_2] !=0)
    {
        printf("%d" , mat[index_1][index_2]);
    }
    else
    {
        printf("-1");
    }
}