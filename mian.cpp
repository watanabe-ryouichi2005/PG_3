#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>


typedef void (*PFunc)();
void CorrectAnwser() {
	printf("����");
}
void NotCorrectAnwser() {
	printf("�s����");
}
//void Judgement(PFunc result, int lottery, int num) {
//	
//
//}

//�R�[���o�b�N
void DispResult(int* second) {
	printf("%d�b�܂��Ď��s����܂���",*second);
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
	
	

	printf("��������͂��Ă�������\n");
	scanf_s("%d", &lottery);
	//Judgement(Answer, lottery, Dice);
	if (lottery == 2 && Dice % 2 == 0) {
		Answer= CorrectAnwser;
		/*printf("�����ł�\n");*/

	}
	else if (lottery == 1 && Dice % 2 != 0) {
		Answer = CorrectAnwser;

		/*printf("��ł�\n");*/

	}
	else {
		Answer = NotCorrectAnwser;
	}
	if (lottery != 1 && lottery != 2) {
		printf("�s���Ȑ��������͂��ꂽ�̂ŃQ�[�����I�����܂��B");
		return lottery;

	}
	SetTimeout(Answer, 3000);
	//�T�C�R���̏o���̖ڂ�����
	printf("\n�U�����T�C�R���̏o���ڂ� : %d", Dice);




	return 0;
}