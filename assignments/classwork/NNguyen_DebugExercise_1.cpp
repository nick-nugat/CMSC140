#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	for (; i <= 3; i++){
		int times = i;
		cout << "Display \"Hello World\" for the " << times << " times" << endl;
		i = times;
	}
	cout << i - 1 << endl;
	return 0;
}