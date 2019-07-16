#include <iostream>
using namespace std;
void main()
{
	float score;
	cout << "Let's Check Your Grade \n";
	cout << "Enter Your Score :  ";
	cin >> score;
	cout << "Your Score Is :" << score << endl;
	cout << "And Your Have (";
	if (score < 0.00){
		cout << " Error )" << endl;
	}
	else if (score <= 59.99){
		cout << " F )" << endl;
	}
	else if (score <= 69.99){
		cout << " D )" << endl;
	}
	else if (score <= 79.99){
		cout << " C )" << endl;
	}
	else if (score <= 89.99){
		cout << " B )" << endl;
	}
	else if (score <= 100){
		cout << " A )" << endl;
	}
	else if (score >= 100.01){
		cout << " Error )" << endl;
	}
	else {
		cout << " Error )" << endl;
	}
	cout << endl;
}