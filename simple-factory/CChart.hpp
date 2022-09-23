#pragma once
#include "IChart.h"

#include <iostream>

class HistogramChart:public IChart{
public:
    HistogramChart(){
        std::cout<<"[创建柱状图]"<<std::endl;
    }
    void display(){
        std::cout<<"[显示柱状图]"<<std::endl;
    }
};

class PieChart:public IChart{
public:
    PieChart(){
        std::cout<<"[创建饼状图]"<<std::endl;
    }
    void display(){
        std::cout<<"[显示饼状图]"<<std::endl;
    }
};

class LineChart:public IChart{
public:
    LineChart(){
        std::cout<<"[创建柱状图]"<<std::endl;
    }
    void display(){
        std::cout<<"[显示柱状图]"<<std::endl;
    }
};


class ChartFactory{
    public:
    static IChartSptr getChart(const std::string& type){
        IChartSptr chart = nullptr;
		if (type == "histogram") {
			chart = std::make_shared<HistogramChart>();
			std::cout << "[初始化设置柱状图]" << std::endl;
		}
		else if (type == "pie") {
			chart = std::make_shared<PieChart>();
			std::cout << "[初始化设置饼状图]" << std::endl;
		}
		else if (type == "line") {
			chart = std::make_shared<LineChart>();
			std::cout << "[初始化设置折线状图]" << std::endl;
		}

		return chart;


    }
};