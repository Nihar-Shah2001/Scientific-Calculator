#include<stdio.h>

//User defined function  Declaration
void readmat(int mat[10][10],int n,int m);
void printmat(int mat[10][10],int n,int m);
void mat_add_diff(int mat1[10][10],int mat2[10][10],int n,int m,int flag);
void scalar_mul(int mat1[10][10],int n,int m,int scalar);
void transform(int mat1[10][10],int n,int m);
void mat_mul(int mat1[10][10],int mat2[10][10],int n1,int m1,int m2);
void inverse(int mat1[10][10],int mat2[10][10],int n1,int m1,int m2);
//main funtion for matrix algebra mode defination
int matrixalgebra(void)
{
    //menu to display
    int i,j,k; //for use in loops
    int mat1[10][10]; // initialized 10 just to have it initialized
    int mat2[10][10];
    int n1, m1;//n is row and m is column
    int n2, m2;
    int code;//used in switch statements
    char again = 'Y';
    int scalar = 0;
    int add = 1;
    int sub = -1;
    while (again == 'Y'){
    printf("\tWhat operation you want to perform?");
    printf("\n\t1 : Add two matrix\n\t2 : Find Difference between two matrix\n\t3 : Multiply scalar to Matrix\n\t4 : Find Transform of the matrix\n\t5 : Multiply two matrices\n\n");
    scanf("%d",&code);//scan choice of user.
    switch(code)
    {
    case 1:
         printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &n1, &m1);//scan number of rows and column for matrix A

            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &n2, &m2);//scan number of rows and column for matrix A

            while ((n1 != n2) || (m1 != m2)){
                printf("\nMatrices must be the same size\n");
                printf("\nEnter the #rows and #cols for matrix A: ");
                scanf("%d%d", &n1, &m1);//scan number of rows and column for matrix A

                printf("Enter the #rows and #cols for matrix B: ");
                scanf("%d%d", &n2, &m2);//scan number of rows and column for matrix A
            }

            printf("\nEnter elements of Matrix A a %d x %d matrix.\n", n1, m1);
            readmat(mat1,n1,m1);//Scan matrix entries.
            printf("\n\t\tMatrix A\n\n");
            printmat(mat1, n1, m1);// print scanned matrix


            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", n2, m2);
            readmat(mat2, n2, m2);//Scan matrix entries.
            printf("\n\t\tMatrix B\n\n");
            printmat(mat2, n2, m2);// print scanned matrix



            printf("\nThe Sum of matrixA + matrixB is : \n");
           mat_add_diff(mat1, mat2, n1, m1, add);//print answer matrix

        break;
  case 2:

      printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &n1, &m1);

            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &n2, &m2);

            while ((n1 != n2) && (m1 != m2)){
                printf("\nMatrices must be the same size\n");
                printf("\nEnter the #rows and #cols for matrix A: ");
                scanf("%d%d", &n1, &m1);
                printf("Enter the #rows and #cols for matrix B: ");
                scanf("%d%d", &n2, &m2);
            }
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", n1, m1);
            readmat(mat1,n1,m1);
            printf("\n\t\tMatrix A\n\n");
            printmat(mat1, n1, m1);
            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", n2, m2);
            readmat(mat2, n2, m2);
            printf("\n\t\tMatrix B\n\n");
            printmat(mat2, n2, m2);
            printf("\nThe Sum of matrixA - matrixB is : \n");
            mat_add_diff(mat1, mat2, n1, m1, sub);//print answer matrix

         break;
   case 3:
            printf("\nEnter the scalar with which you want to multiply: ");
            scanf("%d", &scalar);
            printf("\nThe scalar is: %d ", scalar);
            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &n1, &m1);
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", n1, m1); // with the %d we remember the user the dimentions of the array
            readmat(mat1, n1, m1);
            printf("\n\t\tMatrix A\n\n");
            printmat(mat1 , n1 , m1);
            printf("\nThe scalar multiplication between matrixA * %d is: \n", scalar);
            scalar_mul(mat1, scalar, n1, m1);//print answer matrix
            break;
    case 4:
            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &n1, &m1);
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", n1, m1); // with the %d we remember the user the dimentions of the array
            readmat(mat1, n1, m1);
            printf("\n\t\tMatrix A\n\n");
            printmat(mat1 , n1 , m1);
            transform(mat1,n1,m1);//print answer matrix
        break;
   case 5:
        //when multiplying arrays matrixA column # has to equal matrixB row #
            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &n1, &m1);

            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &n2, &m2);

            // Column of first matrix should be equal to column of second matrix and
            while (m1 != n2)
            {
                printf("\n\nError! column of first matrix not equal to row of second.\n\n");
                printf("\nEnter the #rows and #cols for matrix A: ");
                scanf("%d%d", &n1, &m1);

                printf("Enter the #rows and #cols for matrix B: ");
                scanf("%d%d", &n2, &m2);
            }

            // Storing elements of first matrix.
            printf("\n\tEnter elements of Matrix A a %d x %d matrix.\n", n1, m1);
            readmat(mat1, n1, m1);
            printf("\n\t\tMatrix A\n\n");
            printmat(mat1, n1, m1);

            // Storing elements of second matrix.
            printf("\n\tEnter elements of Matrix B a %d x %d matrix.\n", n2, m2);
            readmat(mat2, n2, m2);
            printf("\n\t\tMatrix A\n\n");
            printmat(mat2, n2, m2);
            //multiplying arrays
            mat_mul(mat1, mat2, n1, m1, m2);
        break;
    default :
        printf("Enter valid code.");
    }
          printf("\n\nTo Calculate again in same Mode Press Y\nTo go to Main Menu Press M\n");
        scanf(" %c", &again);
        again = toupper(again);//to change case of char scaned to upper
    }
    }

void readmat(int ary[10][10],int rows,int columns)
{
    int i, j;
        for( i = 0 ; i < rows ; i++)
        {
            printf("Enter row# %d of matrix: \n",i+1);
            for( j = 0; j < columns ; j++){
                scanf("%d",&ary[i][j]);
        }
}

}
void printmat(int ary[10][10],int rows,int columns)
{
    int i, j;
    printf("Your entered matrix is :\n");
        for( i = 0 ; i < rows ; i++)
        {
            for( j = 0; j < columns ; j++){
                printf("\t%d",ary[i][j]);
        }printf("\n");
        }
}

void mat_add_diff(int mat1[10][10], int mat2[10][10], int n, int m, int flag){
    int i, j;
    int sumM[10][10];
    int scaM[10][10];
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            scaM[i][j] = flag * mat2[i][j];
            }
        }
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            sumM[i][j] = mat1[i][j] + scaM[i][j];
            printf("\t%d" ,sumM[i][j]);
        }
        printf("\n");
    }
}
void scalar_mul(int array[10][10], int scalar, int rows, int columns){
    int i, j;
    int scaM[10][10];
    for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
            scaM[i][j] = scalar * array[i][j];
            printf("%d\t", scaM[i][j]);
        }
        printf("\n");
    }
}
void transform(int array[10][10],int rows,int columns){
int i, j;
int transform[columns][rows];
for (i = 0; i < rows; i++){
        for (j = 0; j < columns; j++){
                transform[j][i]=array[i][j];
        }
        printf("\n");
}
for (i = 0; i < columns; i++){
        printf("\t");
        for (j = 0; j < rows; j++){
           printf("%d\t",transform[i][j]);
        }
        printf("\n");
}
}
void mat_mul(int arrayone[10][10], int arraytwo[10][10], int rowsA, int columnsA,int columnsB)//multiplying scanned matrices
{
    int i, j, k;
    int mulM[10][10];

    // Initializing all elements of result matrix to 0
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columnsB; ++j)
        {
            mulM[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for (i = 0; i < rowsA; ++i)
        for (j = 0; j < columnsB; ++j)
            for (k = 0; k < columnsA; ++k)
            {
                mulM[i][j] += arrayone[i][k] * arraytwo[k][j];
            }
    printf("\nOutput Matrix:\n");
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columnsB; ++j)
        {
            printf("\t%d ", mulM[i][j]);
            if (j == columnsB - 1)
                printf("\n\n");//to leave line
        }
}

