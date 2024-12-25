#include <stdio.h>

int main() {
    int arr[100], n = 0, choice = -1, value, pos, i, j, temp;

    while (choice != 0) {
        printf("\nMENU:\n");
        printf("1. Nhap so phan tu\n");
        printf("2. In ra cac phan tu \n");
        printf("3. Dem so luong so nguyen to\n");
        printf("4. Tim gia tri nho thu hai\n");
        printf("5. Them phan tu\n");
        printf("6. Xoa phan tu\n");
        printf("7. Sap xep mang theo thu tu tang dan\n");
        printf("8. Tim kiem phan tu\n");
        printf("9. Xoa phan tu trung lap\n");
        printf("10. dao nguoc thu tu phan tu\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                printf("Nhap gia tri phan tu:\n");
                for (i = 0; i < n; i++) {
                    printf("arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
                break;
                
            case 2:
                printf("Cac phan tu trong mang: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
                
            case 3: {
                int count = 0;
                for (i = 0; i < n; i++) {
                    int isPrime = 1;
                    if (arr[i] < 2) isPrime = 0;
                    for (j = 2; j * j <= arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) count++;
                }
                printf("So luong so nguyen to: %d\n", count);
                break;
            }
                
            case 5:{
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                pos = n / 2;
                for (i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
                printf("Da them %d vao vi tri %d.\n", value, pos);
                break;
            }
            case 6:{
                printf("Nhap vi tri can xoa: ");
                scanf("%d", &pos);
                if (pos >= 0 && pos < n) {
                    for (i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai vi tri %d.\n", pos);
                } else {
                    printf("Vi tri khong hop le.\n");
                }
                break;
            }
                
                
            case 8:{
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                int found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        found = 1;
                        break;
                    }
                }
                if (found)
                    printf("%d co trong mang.\n", value);
                else
                    printf("%d khong co trong mang.\n");
                break;
            }
                
            case 9:{
                for (i = 0; i < n - 1; i++) {
                    for (j = i + 1; j < n;) {
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

            default:
                printf("Lua chon khong hop le.\n");
            }
        }

    return 0;
}
