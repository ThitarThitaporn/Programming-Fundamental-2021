#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    char in[100];
    printf("Input: ");
    scanf("%[^\n]", in); // รับที่อยู่ file
    FILE* inputFile = fopen(in, "r"); // อ่าน file จากที่อยู่ที่รับเข้ามา
    if (inputFile == NULL) // ถ้าไม่มี file
    {
        printf("There is no such file.");
        return 0;
    }

    char out[100];
    printf("Output: ");
    scanf(" %[^\n]", out); // รับที่อยู่ file สำหรับ copy ใส่
    FILE* outFile = fopen(out, "w");

    char ch;
    while ((ch = fgetc(inputFile)) != EOF)//EOF is End Of File
    {
        fprintf(outFile, "%c", ch);
    }

    _fcloseall();
    return 0;
}