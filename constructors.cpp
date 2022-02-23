# include<iostream>
using namespace std;
/*class Book{
    public:
    string title;
    string author;
    int pages;
Book(){
    title = "No title";
    author = "No author";
    pages = 0;
}
Book(string atitle, string aauthor, int apages){
    title = atitle;
    author = aauthor;
    pages = apages;}
};
int main(){
    Book b1("HARRY POTTER","CHANDAN ",500);
    Book b2("PIRATES OF THE CARRIBIAN","THARUN ",1000);
    Book b3();
    cout << b1.title <<endl;
    cout << b1.author <<endl;
    cout << b1.pages <<endl;
    cout << b2.title <<endl;
    cout << b2.author <<endl;
    cout << b2.pages <<endl;
    //cout << b3.title <<endl;
    //cout << b3.author <<endl;
    // cout << b3.pages <<endl;
    return 0;
}*/
// "DEFAULT CONSTRUCTOR"
/*class Employee{
    public:
    int salary;
    string cname;
    Employee(){
        cout<<"This is a default constructor"<<endl;
    }

};
int main(){
    Employee e1;
    Employee e2;
    return 0;
}*/
//  "PARAMETERISED CONSTRUCTORS"
/*class Employee{
    public:
    int id;
    float salary;
    string cname;
    Employee(int i,float s,string c){
        id = i;
        salary = s;
        cname = c;

    }
    void display(){
        cout<<"the id of person :"<<id<<endl;
        cout << "The salary of a person:"<<salary<<endl;
        cout<< "The company name is:"<<cname<<endl;
    }

};
int main(){
    Employee e1(86,70.0000,"Facebook");
    Employee e2(91,80.500,"Instagram");
    e1.display();
    e2.display();
    return 0;
}*/
/*class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}*/
/*class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}*/
/*class Geeks
{
	public:
	int id;
	
	//Default Constructor
	Geeks()
	{
		cout << "Default Constructor called" << endl;
		id=-1;
	}
	
	//Parameterized Constructor
	Geeks(int x)
	{
		cout << "Parameterized Constructor called" << endl;
		id=x;
	}
};
int main() {
	
	// obj1 will call Default Constructor
	Geeks obj1;
	cout << "Geek id is: " <<obj1.id << endl;
	
	// obj1 will call Parameterized Constructor
	Geeks obj2(21);
	cout << "Geek id is: " <<obj2.id << endl;
	return 0;
}*/
/*class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}*/
/*class Car{
    private:
    string company;
    string fueltype;
    float mileage;
    double price;
    public:
    Car(){
        cout<<"DEFAULT CONSTRUCTOR IS CALLED"<<endl;
        company ="toyota";}
    Car(string ftype,float mil,double pri){
        fueltype=ftype;
        mileage=mil;
        price=pri;}
    void displaydata(){
        cout<<company<<endl;
        cout<<"FUEL TYPE-"<<fueltype<<endl;
        cout<<"MILEAGE-"<<mileage<<endl;
        cout<<"PRICE-"<<price<<endl;

    }

};
int main(){
    Car abc,def("petrol",450,5.6);
    //Car def;
    abc.displaydata();
    def.displaydata();
    return 0;
}*/
/* class Weather{
    public:
    int day;
    string climate;

    Weather(int d,string cli){
        day = d;
        climate = cli;
    }
    bool is_rainy(){
        if (day <= 5)
          return true ;
        else
          return false;
    }

};
int main(){
    Weather w1(7,"sunny");
    Weather w2(5,"Rainy");
    cout<<w1.is_rainy();
    cout<<w2.is_rainy();
    return 0;
}*/
/*class Movie{
    public:
    string title;
    string director;
    string rating;

Movie(string atitle,string adirector){
    title = atitle;
    director = adirector;
}
void setrating(string arating){
    cout<<"give the rating of the movie:";
    cin>>arating;
    }
void dispmovie(){
    cout<<title <<" "<<director <<" ";
}
};
int main(){
    Movie mv("akanda","boyapati");
    mv.setrating("c");
    mv.dispmovie();
    return 0;

}*/
/*class Book{
    public:
    string title;
    string author;
    int pages;
Book(){
    cout << "DEFAULT CONSTRUCTOR IS CALLED"<<endl;
}
Book(string atitle, string aauthor, int apages){
    title = atitle;
    author = aauthor;
    pages = apages;
    cout<<"PARAMETERIZED IS CALLED"<<endl;}

Book(const Book &obj){
    cout <<"copy constructor is called"<<endl;
    title = obj.title;
    author = obj.author;
    pages = obj.pages;

}
};
int main(){
    Book b1("HARRY POTTER","CHANDAN ",500);
    Book b2("PIRATES OF THE CARRIBIAN","THARUN ",1000);
    Book b3 = b1;
    cout << b1.title <<endl;
    cout << b1.author <<endl;
    cout << b1.pages <<endl;
    //cout << b2.title <<endl;
    //cout << b2.author <<endl;
    //cout << b2.pages <<endl;
    cout << b3.title <<endl;
    cout << b3.author <<endl;
    cout << b3.pages <<endl;
    return 0;
}*/
class Employee{
    public:
    Employee(){
        cout<<"CONSTRUCTOR IS CALLED"<<endl;
    }
    ~Employee(){
        cout<<"This is the destructor"<<endl;
    }

};
int main(){
    Employee e1;
    Employee e2;
    return 0;
    }
