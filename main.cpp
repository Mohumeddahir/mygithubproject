#include<iostream>
#include"NumList.hpp"
using namespace std;

//this main does all the testing to make sure that my code
//works correctly in differrent set of conditions.
int main(){
	//testing the default constructor.
	NumList num;
	//testing the copy constructor
	NumList c(num);
	cout<<"the number of elements in the list is "<<
	num.get_num_elements() << endl;
	cout<<"return 1 if the list is empty or else return 0 : "<<
	num.isEmpty() <<endl;
	cout<<"inserting some elements"<<endl;
	num.insert(6.7);
	num.insert(7.2);
	num.insert(7.7);
	num.insert(7.21);
	num.insert(6.9);
	//trying to remove an elements in the list if it is there.
	cout<<"return 0 if the the elelments is not in the list or else return 1 : "
	<<num.removeAll(13.2)<<endl;
	num.print_contents();
	cout<<"the number of elements in the list after inseting some elements is : "<<
	num.get_num_elements() << endl;
	cout<<"return 1 if the list is empty or else return 0 : "<<
	num.isEmpty() <<endl;
	//testing the constructor
	NumList list1(12);
	//testing the copy constructor
	NumList list2(list1);
	//adding more inserts
	list1.insert(3.6);
	list1.insert(3.6);
	list1.insert(6.3);
	list1.insert(8.3);
	list1.insert(98.2);
	list1.insert(48.7);
	list1.insert(66.9);
	list1.insert(32.5);
	list1.insert(21.5);
	list1.insert(75.2);
	list1.insert(12.4);
	list1.insert(3.6);
	//getting the number of elements in the new list
	cout<<"the number of elements in the list is : "<<list1.get_num_elements()<<endl;
	//checking to confirm if the list is empty or not
	cout<<"return 1 if the list is empty or else return 0 : "
	<<list1.isEmpty() <<endl;
	//removing some elements from the list
	list1.removeAll(3.6);
	//checking the number of elements after removing some
	cout<<"the number of elements in the list is : "<<list1.get_num_elements()<<endl;
	//printing the elements in the list to the console.
	list1.print_contents();

	return 0;
}
