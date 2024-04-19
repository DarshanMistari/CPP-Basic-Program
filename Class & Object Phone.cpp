#include<iostream>
using namespace std;
class phone
{
	private:
		int quant;
		int price;
		
	public:
			
			void mobilequant(int n){
				cout<<"mobile quantity= "<<n<<endl;					
			}	
			void recive_price(int price){
				cout<<"mobile price= "<<price;
			} 
				
			
};
int main()
{
	phone p;

	p.mobilequant(15);
	p.recive_price(115000);
	
	return 0;
}

