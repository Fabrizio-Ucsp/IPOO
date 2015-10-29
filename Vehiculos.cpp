#include <iostream>
#include <string>
class Vehicle {
	protected :
		string license ;
		int year ;
	public :
		Vehicle( const string &myLicense, const int myYear)
			: license(myLicense), year(myYear) {}
		const string getDesc() const{
			return license + " from " + stringify(year);
		}
		const string &getLicense() const {
			return license;
		}
		const int getYear() const {
			return year;
		} 
};
class Car : public Vehicle { // Makes Car inherit from Vehicle 
	string style;
	public : 
		Car( const string &myLicense, const int myYear, const string &myStyle)
			: Vehicle(myLicense, myYear), style(myStyle) {}
		const string &getStyle() {
			return style;
		}
};
int main(){
	Vehicle.veh;
	Car.taxi1;
	string lic, sty;
	int ye;
	cout<<"Introdusca la Licencia del Vehiculo"<<endl ;
	cin>>lic;
	cout<<"Introdusca el Año del Vehiculo"<<endl ;
	cin>>ye;
	cout<<"Introdusca el Estilo del Vehiculo"<<endl ;
	cin>>sty;
	Car.license=lic;
	Car.year=ye;
	Car.style=sty;
	cout<<&getLicense()<<endl;
	cout<<&getYear()<<endl;
	cout<<&getStyle()<<endl;
}
