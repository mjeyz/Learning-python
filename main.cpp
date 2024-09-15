#include<iostream>
#include<thread>
using namespace std;

void firstNumber() {
	for (int i = 1; i < 200; i++)
	{
		cout << "+";
	}
}
void secondNumber() {
	for (int i = 1; i <= 200; i++) 
	{
		cout << "-";
	}
}

int main() {
	thread t1(firstNumber);
	thread t2(secondNumber);
	return 0;
}
