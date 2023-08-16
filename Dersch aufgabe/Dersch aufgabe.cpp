#include <iostream>

double a = 0;
double b = 0;
double x = 0;
double y = 0;
int amount;
std::string actualinput;
std::string input;
std::string achecker;
std::string bchecker;
std::string xchecker;
std::string ychecker;



void UI(int a, int b, int x, int y) {
	system("CLS");
	std::cout << "                                      -----------------------------------------" << std::endl;
	std::cout << "                                      |    " << a << "    |    " << b << "    |    " << x << "    |    " << y << "    |" << std::endl;
	std::cout << "                                      -----------------------------------------" << std::endl;
	std::cout << "                                      |    A    |    B    |    X    |    Y    |" << std::endl;
	std::cout << "                                      -----------------------------------------" << std::endl;

	if (amount == 4) {
		std::cout << "Please leave one Variable free!" << std::endl;
		amount--;
		amount--;
	}
}

void limiter() {
	if (amount == 4) {
		if (actualinput == "A") {
			a = 0;
		}
		else if (actualinput == "B") {
			b = 0;
		}
		else if (actualinput == "X") {
			x = 0;
		}
		else if (actualinput == "Y") {
			y = 0;
		}
	}
}

void math() {

	if (a == 0) {
		UI(a, b, x, y);
		double sum = (x * y) / b;
		std::cout << "The Amount of A is: " << sum << std::endl;
	}

	if (b == 0) {
		UI(a, b, x, y);
		double sum = (a * y) / x;
		std::cout << "The Amount of B is: " << sum << std::endl;
	}

	if (x == 0) {
		UI(a, b, x, y);
		double sum = (y * a) / b;
		std::cout << "The Amount of X is: " << sum << std::endl;
	}

	if (y == 0) {
		UI(a, b, x, y);
		double sum = (x * a) / b;
		std::cout << "The Amount of Y is: " << sum << std::endl;
	}
}

void Reader(std::string input) {
	system("CLS");
	UI(a, b, x, y);
	std::cout << "Variable " << input << " selected! \n Select a number" << std::endl;
}

int main()
{
	do {


		do {
			UI(a, b, x, y);

			std::cout << "\nwhich Variable do you want to use? [A|B|X|Y]" << std::endl;
			std::cin >> actualinput;
			system("CLS");

			if (actualinput == "A") {
				Reader(actualinput);
				std::cin >> a;
				amount++;
			}
			else if (actualinput == "B") {
				Reader(actualinput);
				std::cin >> b;
				amount++;
			}
			else if (actualinput == "X") {
				Reader(actualinput);
				std::cin >> x;
				amount++;
			}
			else if (actualinput == "Y") {
				Reader(actualinput);
				std::cin >> y;
				amount++;
			}

			limiter();

			if (amount == 3) {
				UI(a, b, x, y);
				std::cout << "Ready for the calculation? [Y/N]" << std::endl;
				std::cin >> input;

				if (input != "N") {
					break;
				}
			}
		} while (true);
		math();

		std::cout << "Would you like to repeat the process? [Y/N]" << std::endl;
		std::string ans;
		std::cin >> ans;

		if (ans != "Y") {
			break;
		}

		a = 0;
		b = 0;
		x = 0;
		y = 0;

	} while (true);
}