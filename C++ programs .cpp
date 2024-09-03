1. Write a C++ program to sort the elements in ascending and
 descending order.


 #include <iostream>
 
 int main()
 {
 int num[100] , n;
 int i, j, man;
 clrscr();
 cout<<"\n Enter the size of an array"<<endl;
 cin>>n;
 cout<<"\n Enter values for the array elements"<<endl;
 for( i=0; i<n; i++ )
 {
 }
 cin>>num[i];
 For (i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 if(num[i]<num[j])
 {
 man=num[i];
 num[i]=num[j];
 num[j]=man;
 }
 }
 }
 cout<<"\n Elements in ascending order "<<endl;
 for (i=0; <n; i++)
 {
 }
 cout<<"\t"<<num[i]<<endl;
 for(i=0;i<n;i++)
 {
 for(j=0;j<n;j++)
 {
 if(num[i]>num[j])
 {
 man=num[i];
 num[i]=num[j];
 num[j]=man;
 }
 }
 }
 cout<<" \n Elements in descending order"<<endl;
 for(i=0;i<n;i++)
 {
 }
 cout<<"\t "<<num[i]<<endl;
 return 0;
 }

Output:
 Enter the size of an array
 5
 Enter values for the array elements
 9
 2
 5
 1
 Elements in ascending order
 0
 1
 2
 5
 Elements in descending order
 9
 5
 2
 1
 0
 9
 0


 2. Write a C++ program to find the sum of all the natural numbers from 1 to n.

 #include <iostream>
 using namespace std;
 int main()
 {
 int n, sum = 0;
 cout << "Enter a positive integer: ";
 cin >> n;
 for (int i = 1; i <= n; ++i) {
 sum += i;
 }
 cout << "Sum = " << sum;
 return 0;
 }

 Output:
 Enter a positive integer: 9
 Sum =45


 3. Write a C++ program to swap 2 values by writing a function that uses call by reference
 technique.


 #include<iostream>
 using namespace std;
 void swap(int &x, int &y)
 { int swap;
 swap=x;
 x=y;
 y=swap;
 }
 int main()
 {
 int x=500, y=100;
 swap(x, y); // pass by reference
 cout<<"Value of x is: "<<x<<endl;
 cout<<"Value of y is: "<<y<<endl;
 return 0;
 }
Output
 Value of x is: 100
 Value of y is: 500


 4. Write a C++ program to demonstrate function overloading for the following prototypes.
 
 //overload.cpp
 void
 add(int
 a, int
 void
 b);
 add(double
 a,
 double
 b);
 #include <iostream>
 using namespace std;
 void add(int a, int b)
 {
 cout << " \n sum = " << (a + b);
 }
 void add(double a, double b)
 {
 cout << " \n sum = " << (a + b);
 }
 int main()
 {
 add(10, 2);
 add(5.3, 6.2);
 return 0;
 }
 Output:
 sum = 12
 sum = 11.5



 5. Create a class named Shape with a function that prints "This is a shape". Create another class
 named Polygon inheriting the Shape class with the same function that prints "Polygon is a
 shape". Create two other classes named Rectangle and Triangle having the same function which
 prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another
 class named Square having the same function which prints "Square is a rectangle". Now, try
 calling the function by the object of each of these classes.



//shape.cpp
 #include<iostream>
 usingnamespacestd;
 classShape
 {
 public:
 Shape(){}
 voidprint(){
 cout<<"\nThisisashape.";
 }
 };
 classPolygon:publicShape
 {
 public:
 Polygon(){}
 voidprint(){
 cout<<"\nPolygonisashape.";
 }
 };
 classRectangle:publicPolygon
 {
 public:
 Rectangle(){}
 voidprint(){
 cout<<"\nRectangleisaPolygon.";
 }
 };
 classTriangle:publicPolygon
 {
 public:
 Triangle(){}
 voidprint(){
 cout<<"\nTriangleisaPolygon.";
 }
 };
 classSquare:publicRectangle
 {
 public:
 Square(){}
 voidprint(){
 cout<<"\nSquareisaRectangle.";
 }
 };
 intmain()
 {
 ShapeS;
 PolygonP;
 RectangleR;
 TriangleT;
 SquareSq;
 S.print();
 P.print();
 R.print();
 T.print();
 Sq.print();
 return0;
 }




 6. SupposewehavethreeclassesVehicle,FourWheeler,andCar.TheclassVehicleisthebase
 class, the class FourWheeler is derived fromit andtheclassCar isderivedfromtheclass
 FourWheeler. Class Vehicle has a method 'vehicle' that prints 'I am a vehicle', class
 FourWheelerhasamethod'fourWheeler' thatprints'Ihavefourwheels',andclassCarhasa
 method'car' thatprints'Iamacar'.So,asthisisamulti-level inheritance;wecanhaveaccess
 toall theotherclassmethodsfromtheobjectoftheclassCar.Weinvokeallthemethodsfroma
 Carobjectandprintthecorrespondingoutputsofthemethods.So, ifweinvokethemethodsin
 thisorder,car(),fourWheeler(),andvehicle(),thentheoutputwillbe
 Iamacar
 Ihavefourwheels
 Iamavehicle
WriteaC++programtodemonstratemultilevelinheritanceusingthis.




 //mlevel.cpp
 #include<iostream>
 usingnamespacestd;
 classVehicle
 {
 public:
 vehicle()
 {
 cout<<"Iamavehicle\n";
 }
 };
 classFourWheeler:publicVehicle
 {
 public:
 fourWheeler()
 {
 cout<<"Ihavefourwheels\n";
 }
 };
 classCar:publicFourWheeler
 {
 public:
 Car()
 {
 cout<<"Iamacar\n";
 }
 };
 intmain()
 {
 Carobj;
 obj.car();
 obj.fourWheeler();
 obj.vehicle();
 return0;
 }
