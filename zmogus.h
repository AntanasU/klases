#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<iomanip>
#include<random>
#include <numeric>      
#include <fstream>
#include <chrono>
#include<list>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::list;
using std::endl;
using std::setw;
using std::setprecision;
using std::fixed;
using std::rand;
using std::left;
using std::ifstream;
using std::ofstream;
using std::to_string;
using std::remove;
using std::remove_if;
using std::remove_copy_if;

class zmogus {
protected: string Vard;
		   string Pav;
public:
	zmogus(string vardas = "", string pavarde = "") : Vard{ vardas }, Pav{ pavarde } { }
};