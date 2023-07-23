#include <iostream> 
#include <fstream>
#include <iomanip>
#include <string>
//#include "boost/archive/text_iarchive.hpp"
//#include "boost/archive/text_oarchive.hpp"
//#include  "boost/serialization/serialization.hpp"
#include "boost/serialization/serialization.hpp"
#include "boost/archive/text_iarchive.hpp"
#include "boost/archive/text_oarchive.hpp"
using namespace std;

class Dog
{
	
public:
	Dog() {};
	Dog(int weight, int age) { this->weight = weight; this->age = age; }
	int getAge() { return age; }
	int getWeight() { return weight; }
	void setWeight(int weight) { this->weight = weight; }
	void setAge(int age) { this->age = age; }
	//friend class boost::serialization::access;
	/*template<class Archieve>
	void serialize(Archieve& ar, const unsigned int version)
	{
		ar& age;
		ar& weight;
	}*/

	/*friend class boost::serialization::access;
	template<class Archive>
	void serialize(Archive& ar, const unsigned int version)
	{
		ar& age;
		ar& weight;
	}*/		

	int age;
	int  weight;

	

};

namespace boost {
	namespace serialization {
		template<class Archive>
		void serialize(Archive& ar, Dog& d, const unsigned int version)
		{
			ar& d.age;
			ar& d.weight;//BOOST_SERIALIZATION_NVP
		}
	} // namespace serialization
}

int main()
{
	Dog dog1{ 5,10 };
	ofstream fos("111.txt", ios_base::out  );
	boost::archive::text_oarchive  fos1(fos);
	fos1<<dog1;
	fos.close();
	fstream temp("111.txt", ios_base::in);
	boost::archive::text_iarchive  fos2(temp);
	Dog dog2;
	fos2 >> dog2;
	cout << dog2.getAge() << "..." << dog2.getWeight() << endl;
	temp.close();
	return 0;
}