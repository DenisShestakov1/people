#include<iostream>
#include <string>

using namespace std;


class persen {
public:
	int vozrast;
	std::string national, name;
	bool pol;
	
	persen(int vozrast, std::string national, std::string name, bool pol) {
		this->vozrast = vozrast;
		this->national = national;
		this->name = name;
		this->pol = pol;


	}
	void addvozrast(int vozrast) {
		this->vozrast += vozrast;

   }
	void smenapola() {
		this->pol =! pol;
		if (pol == 1)
		cout<< "man";
		if (pol == 0)
			cout << "woman";
	}
	void say(persen* people) {
		cout << this->name << " Hi! "<<people->name<<"\t";
	}
	~persen() {
	
		cout << "i delet";
	}

};

int main(){
	persen* vlad= new persen(15, "USA","vlad",1);
	persen* kostik = new persen(12, "russ", "kostik", 0);
	cout << vlad->name<<"\t";
	cout << kostik->vozrast << "\t";
	kostik->addvozrast(12);
	cout << kostik->vozrast<<"\t";
	vlad->smenapola();
	cout << vlad->pol<<"\t";
	vlad->say(vlad);
	delete(kostik);
	cout << kostik->name << "\t";
}
