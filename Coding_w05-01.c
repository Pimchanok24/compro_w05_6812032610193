#include <stdio.h>  

int main() {
    char name = 'P';        // ประกาศตัวแปร name เป็นตัวอักษร ใช้เก็บชื่อเป็นตัวพิมพ์ใหญ่ 'P'
    int age = 19;           // ประกาศตัวแปร age เป็นจำนวนเต็ม เก็บค่าอายุเป็น 19
    float weight = 100.5;   // ประกาศตัวแปร weight เป็นเลขทศนิยม เก็บค่าน้ำหนักเป็น 100.5

    // แสดงผลบรรทัดแรก: แสดงชื่อและอายุ โดยใช้ตัวแปร name และ age
    printf("Student %c is %d years old.\n", name, age);

    // แสดงผลบรรทัดที่สอง: แสดงน้ำหนัก โดยใช้ตัวแปร weight แสดงทศนิยม 1 ตำแหน่ง
    printf("His weight is %.1f kg.\n", weight);

    return 0;  
}