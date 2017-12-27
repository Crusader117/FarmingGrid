#pragma once
#include <string>

using namespace std;

class Plot
{
public:
	Plot();

	char get_plot_icon();
	string get_plot_description();

protected:
	char icon;
	string description;
};