// จงเขียนโปรแกรม Copy ไฟล์ข้อมูลโดยให้นักศึกษาป้อนข้อมูลของไฟล์ต้นทาง และข้อมูลไฟล์ปลายทาง (Level 4)
#include <stdio.h>
int main()
{
    FILE *fp;
    char in[100];
    printf("Input: ");
    scanf("%[^\n]", in); // รับที่อยู่ file
     FILE *inputFile; fp  = fopen(in, "r"); // อ่าน file จากที่อยู่ที่รับเข้ามา
    if (fp==(FILE*) NULL) // ถ้าไม่มี file อยู่ inputFile จะเท่ากับ NULL
    {
        printf("There is no such file.");
        return 0;
    }

    char out[100];
    printf("Output: ");
    scanf(" %[^\n]", out); // รับที่อยู่ file สำหรับ copy ใส่
    FILE *outFile = fopen(out, "w");
    
    char ch;
    while ((ch = fgetc(inputFile)) != EOF)
    {
        fprintf(outFile, "%c", ch);
    }

    fcloseall();
    return 0;
}