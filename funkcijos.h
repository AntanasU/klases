#pragma once
#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<iomanip>
#include<random>
#include <numeric>      
#include <fstream>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;
using std::setw;
using std::setprecision;
using std::fixed;
using std::rand;
using std::left;
using std::ifstream;

struct studentas {
	string Vard = "", Pav = "";
	int  egz;
	vector<int>nd;
	float GP = 0, med;
};

bool Tvarkymas(const studentas& a, const studentas& b);
void is_failo(string failo_pav);
void ne_is_failo();