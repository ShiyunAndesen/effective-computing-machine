#include <stdio.h>
#include <stdlib.h>
int main()
{
	float x, y, a;
	for (y = 1.5f;y > -1.5f;y -= 0.1f)
	{
		for (x = -1.5;x < 1.5f;x += 0.05f)
		{
			a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');

		}
		system("color 04");
		putchar('\n');
	}
	printf("                     ϣ���Ž�¥703������ĸ�λ:\n");
	printf("                ���쿪��\n");
	printf("                ����ƽ��\n");
	return 0;
}