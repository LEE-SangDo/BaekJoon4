#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio;

	int a, b;

	while (1)
	{
		cin >> a >> b;

		if (a == 0 && b == 0)
			break;

		else
			cout << a + b << '\n';
	}

	return 0;
}