#include <iostream>
#include <conio.h>

void appShowHelp();
void appShowInfo();

int main(int argc, char* argv[])
{
	appShowInfo();

	#if defined(_DEBUG)
		printf("Press any key...\n");
		_getch();
	#endif
}

void appShowHelp()
{

}

void appShowInfo()
{
	std::cout << "DiffDir, 2021 Software" << std::endl;
}
