#include <stdio.h>
#include <string.h>

int main() {
    char name[50];       // ตัวแปรเก็บชื่อ
    int age;             // ตัวแปรเก็บอายุ
    float height;        // ตัวแปรเก็บส่วนสูง
    char subject[50];    // ตัวแปรเก็บชื่อวิชา
    float grade;         // ตัวแปรเก็บเกรด
    char symbol;         // ตัวแปรเก็บสัญลักษณ์เกรด

    // รับข้อมูลส่วนบุคคล
    printf("Enter your name: "); 
    scanf("%s", name); // รับชื่อ

    printf("Enter your age: ");
    scanf("%d", &age); // รับอายุ

    printf("Enter your height (in cm): ");
    scanf("%f", &height); // รับส่วนสูง

    // รับข้อมูลผลการเรียน
    printf("Enter subject name: ");
    scanf("%s", subject); // รับชื่อวิชา

    printf("Enter grade: ");
    scanf("%f", &grade); // รับเกรด

    // แปลงเกรดเป็นสัญลักษณ์
    if (grade > 3.5) {
        symbol = 'A';
    } else if (grade > 3.0) {
        symbol = 'B';
    } else if (grade > 2.5) {
        symbol = 'C';
    } else if (grade >= 2.0) {
        symbol = 'D';
    } else {
        symbol = 'F';
    }

    // แสดงผลรูปแบบที่ 1: ข้อมูลส่วนตัว
    printf("\n%s is %d years old and %.1f centimeters tall.\n", name, age, height);

    // แสดงผลรูปแบบที่ 2: ผลการเรียน
    printf("In subject %s, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol);

    return 0;
}