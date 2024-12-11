#include <stdio.h>
#include <math.h>

void nhapMang(int arr[][100], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("Nhap gia tri cho arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMang(int arr[][100], int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void inGocMang(int arr[][100], int n, int m){
    printf("Cac phan tu o goc ma tran:\n");
    printf("%d %d %d\n", arr[0][0], arr[0][m-1], arr[n-1][0]);
    if (n > 1 && m > 1){
        printf("%d\n", arr[n-1][m-1]);
    }
}

void inBienMang(int arr[][100], int n, int m){
    printf("Cac phan tu o duong bien ma tran:\n");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i][0]);  
        if (m > 1){
            printf("%d ", arr[i][m-1]); 
        }
    }
    for (int j = 1; j < m - 1; j++){
        printf("%d ", arr[0][j]);  
        if (n > 1) {
            printf("%d ", arr[n-1][j]); 
        }
    }
    printf("\n");
}

void inCheoMang(int arr[][100], int n, int m){
    printf("Cac phan tu o duong cheo chinh va cheo phu:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i == j || i + j == n - 1){
                printf("%d ", arr[i][j]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int kiemTraSoNguyenTo(int num){
    if (num <= 1) return 0;
    for (int i = 2; i <= num; i++){
        if (num % i == 0) return 0;
    }
    return 1;
}


void inSoNguyenToMang(int arr[][100], int n, int m){
    printf("Cac phan tu la so nguyen to:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (kiemTraSoNguyenTo(arr[i][j])){
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(){
    int arr[100][100];
    int n, m;
    int choice;
    printf("Nhap so dong (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    do {
        printf("MENU\n");
        printf("1.Nhap gia tri cac phan tu cua mang\n");
        printf("2.In ra gia tri cac phan tu cua mang theo ma tran\n");
        printf("3.In ra cac phan tu o goc theo ma tran\n");
        printf("4.In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5.In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6.In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7.Thoat\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                nhapMang(arr, n, m);
                break;
            case 2:
                inMang(arr, n, m);
                break;
            case 3:
                inGocMang(arr, n, m);
                break;
            case 4:
                inBienMang(arr, n, m);
                break;
            case 5:
                inCheoMang(arr, n, m);
                break;
            case 6:
                inSoNguyenToMang(arr, n, m);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while(choice != 7);

    return 0;
}

