#include<iostream>
#include<string>

class Beverage 
{
	public: 
	std::string normal;//共有属性 包装完好无损 
	void Water();//水 
	void Energy();//能量 
	void Protein();//蛋白质 
	void Carbohydrate();//碳水化合物 
};
 
 	 class Pepsi:public Beverage//百事可乐 
{
	public:
 		void H2CO3(); //碳酸 
};
 
 	class NutriExpress:public Beverage//营养快线 
{
	public:
 		void Vitamin();
 		void Element(); 
};
  
  class HerbalTea:public Beverage//凉茶王老吉 
{
	public:
  	void Chrysanthemum(); //菊花 
  	void Liquorice();//甘草
};
void Beverage ::Water()
{
	std::cout<<"水是饮料的主要成分\n"<<std::endl; 
}
void Beverage::Energy()
{
	std::cout<<"能量每100克均是2%\n"<<std::endl; 
}
void Beverage::Protein()
{
	std::cout<<"蛋白质含量2%"<<std::endl; 
}
void Beverage::Carbohydrate()
{
	std::cout<<"碳水化合物含量介于2~3%"<<std::endl; 
}
void Pepsi::H2CO3()
{
	std::cout<<"鄙人百事可乐的碳酸可高啦\n"<<std::endl; 
}
void NutriExpress::Vitamin()
{
	std::cout<<"朕营养快线的维他命只有E\n"<<std::endl;
}
void NutriExpress::Element()
{
	std::cout<<"不过营养元素钙 钾 锌 磷倒是不少\n"<<std::endl; 
}
void HerbalTea:: Chrysanthemum()
{
	std::cout<<"我王老吉就是不一样有菊花"<<std::endl; 
}
void HerbalTea::Liquorice()
{
	std::cout<<"还有甘草\n" <<std::endl;
}


int main()
{
	Pepsi pepsi;
	NutriExpress nutriExpress;
	HerbalTea herbalTea;
	
	pepsi.Water();
	nutriExpress.Water();
	herbalTea.Water();
	
	pepsi.Energy();
	nutriExpress.Energy();
	herbalTea.Energy();
	
	pepsi.Protein();
	nutriExpress.Protein();
	herbalTea.Protein();
	
	pepsi.Carbohydrate();
	nutriExpress.Carbohydrate();
	herbalTea.Carbohydrate();
	
	pepsi.H2CO3();
	
	nutriExpress.Vitamin();
	nutriExpress.Element();
	
	herbalTea.Chrysanthemum();
	herbalTea.Liquorice();
	 
	 return 0;	 
}