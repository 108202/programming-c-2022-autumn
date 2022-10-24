#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;

	std::cin >> n;

	switch (n / 100)
	{
	case 1: std::cout << "sto "; break;
	case 2: std::cout << "dvesti "; break;
	case 3: std::cout << "trista "; break;
	case 4: std::cout << "chetiresta "; break;
	case 5: std::cout << "pyatsot "; break;
	case 6: std::cout << "shestsot "; break;
	case 7: std::cout << "semsot "; break;
	case 8: std::cout << "vosemsot "; break;
	case 9: std::cout << "devyatsot "; break;
	}

	switch ((n % 100) / 10)
	{
	case 2: std::cout << "dvadsat "; break;
	case 3: std::cout << "tridsat "; break;
	case 4: std::cout << "sorok "; break;
	case 5: std::cout << "pyatdesyat "; break;
	case 6: std::cout << "shestdesyat "; break;
	case 7: std::cout << "semdesyat "; break;
	case 8: std::cout << "vosemdesyat "; break;
	case 9: std::cout << "devyanosto "; break;
	}

	if (n % 100 >= 10 and n % 100 < 20)
	{
		switch (n % 100)
		{
		case 10: std::cout << "desyat "; break;
		case 11: std::cout << "odinnadtsat "; break;
		case 12: std::cout << "dvenadsat "; break;
		case 13: std::cout << "trinadsat "; break;
		case 14: std::cout << "chetirnadsat "; break;
		case 15: std::cout << "pyatnadsat "; break;
		case 16: std::cout << "shestnadsat "; break;
		case 17: std::cout << "semnadsat "; break;
		case 18: std::cout << "vosemnadsat "; break;
		case 19: std::cout << "devyatnadsat "; break;
		}

	}
	else {
		switch (n % 10)
		{
		case 0: std::cout << "nul "; break;
		case 1: std::cout << "odin "; break;
		case 2: std::cout << "dva "; break;
		case 3: std::cout << "tri "; break;
		case 4: std::cout << "chetire "; break;
		case 5: std::cout << "pyat "; break;
		case 6: std::cout << "shest "; break;
		case 7: std::cout << "sem "; break;
		case 8: std::cout << "vosem "; break;
		case 9: std::cout << "devyat "; break;
		}
	}

	if (n % 100 >= 11 and n % 100 <= 14)
	{	
		std::cout << "bananov";
	}

	if ((n >= 0 and n <= 10) or (n >= 15)) 
	{	switch (n % 10)
		{
		case 0: std::cout << "bananov"; break;
		case 1: std::cout << "banan"; break;
		case 2: std::cout << "banana"; break;
		case 3: std::cout << "banana"; break;
		case 4: std::cout << "banana"; break;
		case 5: std::cout << "bananov"; break;
		case 6: std::cout << "bananov"; break;
		case 7: std::cout << "bananov"; break;
		case 8: std::cout << "bananov"; break;
		case 9: std::cout << "bananov"; break;
		}
	}
	return EXIT_SUCCESS;
}