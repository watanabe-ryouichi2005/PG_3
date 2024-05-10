#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>


typedef void (*PFunc)();
void CorrectAnwser() {
	printf("正解");
}
void NotCorrectAnwser() {
	printf("不正解");
}
//void Judgement(PFunc result, int lottery, int num) {
//	
//
//}

//コールバック
void DispResult(int* second) {
	printf("%d秒まって実行されました",*second);
}

void SetTimeout(PFunc resultlottery, int second) {
	Sleep(second);
	resultlottery();
	
}


int main() {
	printf("Start\n");
	srand((unsigned int)time(nullptr));
	int lottery = 0;
	int Dice = rand() % 6+1;
	PFunc Answer = 0;
	
	

	printf("数字を入力してください\n");
	scanf_s("%d", &lottery);
	//Judgement(Answer, lottery, Dice);
	if (lottery == 2 && Dice % 2 == 0) {
		Answer= CorrectAnwser;
		/*printf("偶数です\n");*/

	}
	else if (lottery == 1 && Dice % 2 != 0) {
		Answer = CorrectAnwser;

		/*printf("奇数です\n");*/

	}
	else {
		Answer = NotCorrectAnwser;
	}
	if (lottery != 1 && lottery != 2) {
		printf("不正な数字が入力されたのでゲームを終了します。");
		return lottery;

	}
	SetTimeout(Answer, 3000);
	//サイコロの出たの目をだす
	printf("\n振ったサイコロの出た目は : %d", Dice);




	return 0;
}