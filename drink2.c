#include<iostream>
#include<string>

class Beverage 
{
	public: 
	std::string normal;//�������� ��װ������� 
	void Water();//ˮ 
	void Energy();//���� 
	void Protein();//������ 
	void Carbohydrate();//̼ˮ������ 
};
 
 	 class Pepsi:public Beverage//���¿��� 
{
	public:
 		void H2CO3(); //̼�� 
};
 
 	class NutriExpress:public Beverage//Ӫ������ 
{
	public:
 		void Vitamin();
 		void Element(); 
};
  
  class HerbalTea:public Beverage//�������ϼ� 
{
	public:
  	void Chrysanthemum(); //�ջ� 
  	void Liquorice();//�ʲ�
};
void Beverage ::Water()
{
	std::cout<<"ˮ�����ϵ���Ҫ�ɷ�\n"<<std::endl; 
}
void Beverage::Energy()
{
	std::cout<<"����ÿ100�˾���2%\n"<<std::endl; 
}
void Beverage::Protein()
{
	std::cout<<"�����ʺ���2%"<<std::endl; 
}
void Beverage::Carbohydrate()
{
	std::cout<<"̼ˮ�����ﺬ������2~3%"<<std::endl; 
}
void Pepsi::H2CO3()
{
	std::cout<<"���˰��¿��ֵ�̼��ɸ���\n"<<std::endl; 
}
void NutriExpress::Vitamin()
{
	std::cout<<"��Ӫ�����ߵ�ά����ֻ��E\n"<<std::endl;
}
void NutriExpress::Element()
{
	std::cout<<"����Ӫ��Ԫ�ظ� �� п �׵��ǲ���\n"<<std::endl; 
}
void HerbalTea:: Chrysanthemum()
{
	std::cout<<"�����ϼ����ǲ�һ���оջ�"<<std::endl; 
}
void HerbalTea::Liquorice()
{
	std::cout<<"���иʲ�\n" <<std::endl;
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