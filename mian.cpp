#include<cstdio>
#include<iostream>
#include<Windows.h>

using namespace std;


class Enemy {
public:
	void Update();

	void Shoot();
	void Approach();
	void Escape();

	// �����o�֐��|�C���^�̃e�[�u��
	static void (Enemy::* table[])();

private:
	// �����o�֐��|�C���^�̃e�[�u�����Q�Ƃ���C���f�b�N�X
	int index = 0;
};

void Enemy::Approach() {
	cout << "�G�̐ڋ߁I" << endl;
	
}

void Enemy::Shoot() {
	cout << "�G�̍U���I" << endl;
	
}

void Enemy::Escape() {
	cout << "�G�̌�ށI" << endl;
	
}

void Enemy::Update() {
	int num = 0;
	(this->*table[index])();
	printf("����0�����\n");
	scanf_s("%d", &num);
	if (num == 0) {
		index++;
	}
	

	/*if (num==0) {
		index=+1;


	}*/
	// �֐��|�C���^�̃e�[�u������֐������s
	/*�X�y�[�X�����ꂽ�H*/
		/*�G�̏�ԁi�֐��|�C���^�z��̃C���f�b�N�X�j��+1*/
		/*�C���f�b�N�X���z��̍Ō�̗v�f�Ȃ瑼�̒l������*/
	/*for (int i = 0; table; i++) {
		table[i];
		
	}*/
	
}

// static�Ő錾���������o�֐��|�C���^�e�[�u���̎���
void (Enemy::* Enemy::table[])() = {
  &Enemy::Approach, // �C���f�b�N�X�ԍ�0
  &Enemy::Escape, // �C���f�b�N�X�ԍ�1
  &Enemy::Shoot  // �C���f�b�N�X�ԍ�2
};
/*��Ԋ֐�1�̖��O*/
/*��Ԋ֐�2�̖��O*/
/*��Ԋ֐�3�̖��O*/


int main() {

	Enemy my;

	while (1) {
		my.Update();
	};

	return 0;
}

