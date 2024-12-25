#include <stdio.h>

int main() {
    int arr[100], n = 0, chon;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Đem so luong so nguyen to co trong mang\n");
        printf("4. Tim gia tri nho thu 2 trong mang\n");
        printf("5. Them phan tu vao mang \n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu giam dan\n");
        printf("8. Tim kiem phan tu trong mang\n");
        printf("9. Xoa toan bo phan tu trung lap va hien thi phan tu doc nhat \n");
        printf("10. Dao nguoc thu tu cac phan tu trong mang\n");
        printf("Nhap lua chon: ");
        scanf("%d", &chon);
        switch (chon) {
            case 1: {
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                if (n > 100) {
                    printf("So phan tu vuot qua gioi han. Vui long nhap lai.\n");
                    n = 0;
                } else {
                    for (int i = 0; i < n; i++) {
                        printf("Nhap phan tu thu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
                break;
            }
            case 2: {
                printf("Cac phan tu trong mang: ");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d", i, arr[i]);
                    if (i < n - 1) {
                        printf(", ");
                    }
                }
                printf("\n");
                break;
            }
            case 3 :{
                printf("So luong so nguyen to trong mang: ");
                for (int i = 0; i < n; i++) {
                    int flag = 1;
                    if (arr[i] < 2)
                        flag = 0;
                    for (int j = 2; j * j <= arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            flag = 0;
                            break;
                        }
                    }
                    if (flag) printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 4 :{
                break ;
            }
            case 5:
                            printf("Nhap gia tri can them: ");
                            scanf("%d", &value);
                            pos = n / 2;
                            for (int i = n; i > pos; i--) {
                                arr[i] = arr[i - 1];
                            }
                            arr[pos] = value;
                            n++;
                            printf("Da them phan tu %d vao vi tri  %d.\n", value, pos);
                            break;

                        case 6:
                            printf("Nhap vi tri can xoa: ");
                            scanf("%d", &pos);
                            if (pos >= 0 && pos < n) {
                                for (i = pos; i < n - 1; i++) {
                                    arr[i] = arr[i + 1];
                                }
                                n--;
                                printf("da xoa phan tu tai vi tri %d.\n", pos);
                            } else {
                                printf("Vi tri khong hop le.\n");
                            }
                            break;
          
                
          
            case 6: {
                int viTriCanXoa;
                printf("Nhap vi tri can xoa : ");
                scanf("%d", &viTriCanXoa);
                if (viTriCanXoa >= 0 && viTriCanXoa < n) {
                    for (int i = viTriCanXoa; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai vi tri %d.\n", viTriCanXoa);
                } else {
                    printf("Vi tri khong hop le.\n");
                }
                break;
            }
            case 7 :{
                break;
            }
            case 8 :{
                int giaTri, flag = 0;
                printf("Nhap gia tri can tim: ");
                scanf("%d", &giaTri);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == giaTri) {
                        flag = 1;
                        break;
                    }
                }
                if (flag)
                    printf("Phan tu %d co trong mang.\n", giaTri);
                else
                    printf("Phan tu %d khong co trong mang.\n", giaTri);
                break;
            }
            case 9:{
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n;) {
                        if (arr[i] == arr[j]) {
                            for (int k = j; k < n - 1; k++) {
                                arr[k] = arr[k + 1];
                            }
                            n--;
                        } else {
                            j++;
                        }
                    }
                }
                printf("Da xoa phan tu trung lap.\n");
                break;
                
            }
            case 10:{
                for (int i = 0; i < n / 2; i++) {
                    int temp = arr[i];
                    arr[i] = arr[n - i - 1];
                    arr[n - i - 1] = temp;
                }
                printf("Mang da dao nguoc.\n");
                break;
                
            default:
                printf("Lua chon khong hop le.\n");
            }
        }
    }
        
        return 0;
    }
