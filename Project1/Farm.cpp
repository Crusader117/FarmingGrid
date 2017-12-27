#include <iostream>
#include <vector>

#include "Farm.h"
#include "Plot.h"

// Constructor
Farm::Farm()
{
	vector<Plot> temp;
	for (int i = 0; i < 3; i++)
	{
		Plot newPlot;

		temp.push_back(newPlot);

		if ((temp.size() == 3))
		{
			for (int j = 0; j < 3; j++)
			{
				farm.push_back(temp);
			}
		}
	}
}

// Prints the icon on each plot
void Farm::print_farm()
{
	for (vector<Plot> &v : farm)
	{
		for (Plot p : v) 
			cout << p.get_plot_icon() << ' ';
		cout << endl << endl;
	}
}
