//น้มุ 2884
#include <iostream>
using namespace std;

int h, m;

void check(int& hh, int& mm) {
	if (mm - 45 >= 0) {
		mm = mm - 45;
	}
	else if (mm - 45 < 0) {
		mm = 60 - (45 - mm);
		if (hh - 1 >= 0) {
			hh = hh - 1;
		}
		else {
			hh = 24 + (hh - 1);
		}
	}
	cout << hh << " " << mm;
}

int main() {
	cin >> h >> m;
	check(h, m);
	return 0;
}