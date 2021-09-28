// จงเขียนโปรแกรม Copy ไฟล์ข้อมูลโดยให้นักศึกษาป้อนข้อมูลของไฟล์ต้นทาง และข้อมูลไฟล์ปลายทาง (Level 4)
#include <stdio.h>
int main()
{
    char in[100];
    printf("Input: ");
    scanf("%[^\n]", in); 
    FILE *inputFile = fopen(in, "r"); 
    if (inputFile == NULL) 
    {
        printf("There is no such file.");
        return 0;
    }

    char out[100];
    printf("Output: ");
    scanf(" %[^\n]", out); 
    FILE *outFile = fopen(out, "w");
    
    char ch;
    while ((ch = fgetc(inputFile)) != EOF)
    {
        fprintf(outFile, "%c", ch);
    }

    fcloseall();
    return 0;
}