
#include <stdio.h>
#include <stdlib.h>

// Hello Worldを表示する関数
void DrawHelloWorld()
{
	printf("Hello World!\n");
	// 今回は両方の編集を適用
	printf("ハローワールド！(WebUI)\n");
	printf("ハローワールド！（ローカル）\n");
}

int main()
{
	DrawHelloWorld();

	system("pause");
	return 0;
}

