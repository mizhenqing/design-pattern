#include "CChart.hpp"

int main(void)
{
		//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
	IChartSptr chart = nullptr;

	// 通过静态工厂方法创建产品
	chart = ChartFactory::getChart("histogram");
	chart->display();

	return 0;
}
