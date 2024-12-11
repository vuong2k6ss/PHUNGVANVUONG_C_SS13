#include <stdio.h>

void nhapMaTran(int m, int n, int num[m][n]){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("nhap gia tri num[%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }
}

void inMaTran(int m, int n, int num[m][n]){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    printf("nhap so hang: ");
    scanf("%d", &m);
    printf("nhap so cot: ");
    scanf("%d", &n);
    int num[m][n];
    nhapMaTran(m, n, num);
    printf("ma tran vua nhap la:\n");
    inMaTran(m, n, num);

    return 0;
}

