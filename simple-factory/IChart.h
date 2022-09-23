#include <memory>
class IChart;
using IChartSptr = std::shared_ptr<IChart>;

class IChart{
	public:
	virtual void display() = 0;

};

