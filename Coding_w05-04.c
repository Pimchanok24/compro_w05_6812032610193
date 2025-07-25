#include <stdio.h>

int main() {
    // ประกาศตัวแปรเพื่อเก็บข้อมูลของผู้ใช้งาน 3 คน
    char name[3];           // เก็บชื่อเล่น (ตัวอักษร 1 ตัว)
    int age[3];             // เก็บอายุ
    float height[3];        // เก็บส่วนสูง (เซนติเมตร)
    float weight[3];        // เก็บน้ำหนัก (กิโลกรัม)
    char grade[3];          // เก็บรหัสเกรด (A, B, C)

    // รับค่าข้อมูลผู้ใช้งานทีละคน จำนวน 3 คน
    for (int i = 0; i < 3; i++) {
        printf("Enter data for person %d (Format: Name Age Height Weight Grade): ", i + 1);
        // รับข้อมูลทั้งหมดใน 1 บรรทัด โดยใช้ scanf ต่อเนื่อง
        scanf(" %c %d %f %f %c", &name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // แสดงหัวตารางข้อมูล
    printf("\n---------------------------------------------\n");
    printf("| %-4s | %-3s | %-10s | %-10s | %-10s |\n", 
           "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");
    printf("---------------------------------------------\n");

    // แสดงข้อมูลแต่ละคนในรูปแบบตาราง
    for (int i = 0; i < 3; i++) {
        printf("| %-4c | %-3d | %-10.1f | %-10.1f | %-10c |\n", 
               name[i], age[i], height[i], weight[i], grade[i]);
    }
    printf("---------------------------------------------\n");

    return 0;
}
