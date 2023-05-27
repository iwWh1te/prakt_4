#include <iostream>
class TPen{
	public:
	std::string color; 
};

int main(){
	using namespace std;
	TPen pen;
	pen.color = "FF00FF";
	cout<<"pen color : "<< pen.color;
	return 0;
}
