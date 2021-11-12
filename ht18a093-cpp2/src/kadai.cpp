#include <iostream>
using namespace std;
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。

bool is_prime(int num) {
	if (num == 1) return false;

	for (int i = 2; i < num - 1; i++) {

		if (num % i == 0) {
			return false;
		}
	}
	return true;

/* --------------------------------------------------------------- */
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
*/
/* -------------------------------------------------------------- */
int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
    int curtent = 0;
	int num = 0;
	while (num <= CPP2_PRIME_UPPER_LIMIT) {
		if (is_prime(curtent)) {

			num++;

			if (num == n) {
				return curtent;
			}
			curtent += d;
		}
	}
	return(-1);
}
int main() {
 std::cout << nth_prime(367, 186, 151) << std::endl;
 std::cout << nth_prime(11,31,42) << std::endl;
 std::cout << nth_prime(43,53,95) << std::endl;
 std::cout << nth_prime(12,10,5) << std::endl;
 // 以下、同様に、入出力例通りになるか確認せよ。
return 0;
}
