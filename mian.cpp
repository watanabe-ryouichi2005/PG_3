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

	// メンバ関数ポインタのテーブル
	static void (Enemy::* table[])();

private:
	// メンバ関数ポインタのテーブルを参照するインデックス
	int index = 0;
};

void Enemy::Approach() {
	cout << "敵の接近！" << endl;
	
}

void Enemy::Shoot() {
	cout << "敵の攻撃！" << endl;
	
}

void Enemy::Escape() {
	cout << "敵の後退！" << endl;
	
}

void Enemy::Update() {
	int num = 0;
	(this->*table[index])();
	printf("数字0を入力\n");
	scanf_s("%d", &num);
	if (num == 0) {
		index++;
	}
	

	/*if (num==0) {
		index=+1;


	}*/
	// 関数ポインタのテーブルから関数を実行
	/*スペース押された？*/
		/*敵の状態（関数ポインタ配列のインデックス）を+1*/
		/*インデックスが配列の最後の要素なら他の値を入れる*/
	/*for (int i = 0; table; i++) {
		table[i];
		
	}*/
	
}

// staticで宣言したメンバ関数ポインタテーブルの実体
void (Enemy::* Enemy::table[])() = {
  &Enemy::Approach, // インデックス番号0
  &Enemy::Escape, // インデックス番号1
  &Enemy::Shoot  // インデックス番号2
};
/*状態関数1の名前*/
/*状態関数2の名前*/
/*状態関数3の名前*/


int main() {

	Enemy my;

	while (1) {
		my.Update();
	};

	return 0;
}

