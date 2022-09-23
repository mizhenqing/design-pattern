#include "CChart.hpp"

int main(void)
{
	IChartSptr chart = nullptr;

	// 通过静态工厂方法创建产品
	chart = ChartFactory::getChart("histogram");
	chart->display();

	return 0;
}