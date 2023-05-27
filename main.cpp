#include <iostream>
class TPen{
	private:
	std::string FColor;
	public:
	void setColor(std::string newColor);
	std::string getColor();
};

void TPen::setColor(std::string newColor){
FColor= newColor;}

std::string TPen::getColor(){
return FColor;}
	

int main(){
	using namespace std;
	TPen pen;
	//pen.FColor = "FF00FF";
	pen.setColor("FF00FF");
	cout<<"pen color : "<< pen.getColor();
	return 0;
}
