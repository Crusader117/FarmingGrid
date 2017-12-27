#include "Plot.h"

Plot::Plot()
{
	icon = '#';
	description = "untilled land";
}

char Plot::get_plot_icon()
{
	return icon;
}

string Plot::get_plot_description()
{
	return description;
}
