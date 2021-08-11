//int[] Add(int A[],int B[],int n)
//{
//    int C[n][n];
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            C[i][j]=C[i][j]+C[i][j];
//        }
//    }
//    return C[][];
//}

int main()
{
    int A[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    int B[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    int C[3][3];

    for(int i=0;i<3;i++)///////////////////---------------- n+1
    {
        for(int j=0;j<3;j++)//////////////////////////////--n*n+1
        {
            C[i][j]=0;////////////////////////////////////--n*n
            for(int k=0;k<3;k++)//////////////////----------n*n*n+1
            {
                C[i][j]=C[i][j]+A[i][k]*B[k][j];//////////--n*n*n
                //A[0][0]*B[0][0]
                //A[0][1]*B[1][0]
                //A[0][2]*B[2][0]


                //A[0][0]*B[0][1]
                //A[0][0]*B[1][1]
                //A[0][0]*B[1][2]
            }
        }
    }





//    printf("%d ",C[0][0]);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    printf("\n\n");


    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}

