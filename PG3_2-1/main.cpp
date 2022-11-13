#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <list>

using namespace std;

int main() {
	//1970�N���_�̎R���
	const char* yamanoteLine[28] = {
		"Tokyo",
		"Kanda",
		"Akihabara",
		"Okachimachi",
		"Ueno",
		"Uguisudani",
		"Nippori",
		"Tabata",
		"Komagome",
		"Sugamo",
		"Ootuka",
		"Ikebukuro",
		"Mejiro",
		"Takadanobaba",
		"Sinookubo",
		"Sinjyuku",
		"Yoyogi",
		"Harajyuku",
		"Sibuya",
		"Ebisu",
		"Meguro",
		"Gotanda",
		"Oosaki",
		"Sinagawa",
		"Tamachi",
		"Hamamatucyou",
		"Sinbasi",
		"Yuurakucyou",
	};

	//�R����̃��X�g
	list<const char*> lst(28);
	auto itr = lst.begin();
	for (int i = 0; i < 28; i++) {
		*itr = yamanoteLine[i];
		itr++;
	}

	//1970�N�̎R����̕\��
	printf("1970�N�̎R���\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		cout << *itr << "\n";
		printf("  |\n");
	}

	printf("--------------------------\n");
	printf("1971�N�A�����闢�w�J�ƁI\n");
	printf("--------------------------\n");

	//�����闢�w�̑}��
	const char* newstaoion = "Nisi-Nippori";
	for (list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = lst.insert(itr, newstaoion);
			++itr;
		}
	}
	
	//2019�N�̎R����̕\��
	printf("2019�N�̎R���\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		cout << *itr << "\n";
		printf("  |\n");
	}

	printf("--------------------------------\n");
	printf("2020�N�A���փQ�[�g�E�F�C�w�J�ƁI\n");
	printf("--------------------------------\n");

	//���փQ�[�g�E�F�C�w�̑}��
	const char* newstaoion2 = "Takanawa-Gateway";
	for (list<const char*>::iterator itr = lst.begin(); itr != lst.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = lst.insert(itr, newstaoion2);
			++itr;
		}
	}

	//2022�N�̎R����̕\��
	printf("2022�N�̎R���\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		cout << *itr << "\n";
		printf("  |\n");
	}

	return 0;
}