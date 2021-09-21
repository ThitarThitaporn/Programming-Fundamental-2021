
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main()
{
	FILE* fp;
	int i;
	struct player {
		char name[50];
		int level;
		int score;
	};
	fp = fopen("playerpoint.txt", "w");
	player p[10], * ptr;
	for (i = 0; i < 10; i++) {
		strcpy(p[i].name, "Anonymous");
		p[i].level = i;
		p[i].score = i * 100;
	}
	for (i = 0; i < 10; i++) {
		fprintf(fp, "name : %s\t", p[i].name);
		fprintf(fp, "level : %d\t", p[i].level);
		fprintf(fp, "score : %d\n", p[i].score);
	}
	fclose(fp);
	return 0;
}