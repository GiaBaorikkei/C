#include <stdio.h>
#include <string.h>

// Khai bao cau truc de luu tru thong tin sinh vien
struct Student {
    char name[50];
    int score;
};

int main() {
    int n;

    // Nhap so luong sinh vien
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Kiem tra neu so luong sinh vien khong hop le
    if (n <= 0) {
        printf("Khong so sinh vien nao de tim kiem.\n");
        return 0;
    }

    // Khai bao mang cau truc
    struct Student students[n];

    // Nhap thong tin sinh vien
    printf("Nhap thong tin sinh viên (Ten va Diem):\n");
    for (int i = 0; i < n; i++) {
        printf("Sing vien %d:\n", i + 1);
        printf("Ten: ");
        scanf(" %[^\n]", students[i].name); 
        printf("Diem: ");
        scanf("%d", &students[i].score);
    }

    // Nhap ten sinh vien can tim
    char searchName[50];
    printf("Nhap ten sinh vien can tim: ");
    scanf(" %[^\n]", searchName);

    // Tim kiem sinh vien
    int found = 0; 
    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Diem cua %s là: %d\n", students[i].name, students[i].score);
            found = 1;
            break;
        }
    }

    //Neu khong tim thay sinh vien
    if (!found) {
        printf("Khong tim thay sinh vien");
	}
    return 0;
}

