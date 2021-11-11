#include <stdio.h>





int main()

{
    int m, n, row, col, sum = 0, row_ind = 0, col_ind = 0;
    printf("Einlesen der Anzahl der Zeilen m, Spalten m:\n");
    scanf("%d %d",&m,&n);
    int row_arr[m]; // Zeilenarray mit der Länge m
    int i, j; // Indexvariablen i und j
    int mat[m][n]; // Deklaration der Matrix
    // Einlesen der Werte für die Matrix[m][n]
    for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
                scanf("%d",&mat[i][j]);
        }

    int z = 0; // 

    printf("Sum of rows is: ");
    for(row=0; row<m; row++)
        {
            sum = 0;
                for(col=0; col<n; col++)
                    {
                        sum += mat[row][col];
                    }
            printf("%d ",sum);
            row_arr[z++] = sum;
        }
    int temp_row = row_arr[0];
    for(i=1;i<m;i++)
        {
            if(temp_row < row_arr[i])
                {
                    temp_row = row_arr[i];
                    row_ind = i;
                }
}
    printf("\nRow %d has maximum sum with %d", row_ind + 1, temp_row);

    printf("\nSum of columns is ");
    sum = 0;
    int y = 0;
    int col_arr[n];
    for (i = 0; i < n; ++i)
        {
            sum = 0;
            for (j = 0; j < m; ++j)
                {
                    sum = sum + mat[j][i];
                }       
            printf("%d ",sum);
            col_arr[y++] = sum;
        }
    int temp_col = col_arr[0];
    for(i=1;i<n;i++)
        {
            if(temp_col < col_arr[i])
                {
                    temp_col = col_arr[i];
                    col_ind = i;
                }
        }
    printf("\nColumn %d has maximum sum\n", col_ind + 1);
    return 0;
}