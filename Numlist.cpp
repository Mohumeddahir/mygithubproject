/* 
 *This program is about managing lists of data 
 * that is stored in an array and perhaps doing
 * some manipulation to it.
 * Course : CSCI161.
 * Author : Khalid.
 */
#include<iostream>
#include<iomanip>//precision
#include"NumList.hpp"
#include<cmath>
using std :: cout;
using std :: endl;
using std :: fixed;
using std :: setprecision;

//creates an empty numlist object
NumList :: NumList(int size){
	if (size > INIT_CAPACITY){
		m_size = size;
	}
	else {
		m_size = INIT_CAPACITY;
	}
	m_list = new double[m_size];
	m_num_elements = 0;
} 
//copies the numlist objects and all the elements in the array
NumList :: NumList(const NumList &copy){
	m_size = copy.m_size;
	m_num_elements = copy.m_num_elements;
	m_list = new double[m_size];
	for(int i = 0; i < m_num_elements; i++){
		m_list[i] =copy.m_list[i];
	}
}
//relocates all the memory used by the numlist object
NumList :: ~NumList(){
	delete[] m_list;
}
//return the number of elements in the array.
int NumList :: get_num_elements() const{
	return m_num_elements;
}
//checks to see if the array is empty and it return true
//else it returns false if there are some elements in the list
bool NumList :: isEmpty(){
	if( m_num_elements > 0)
  		return false;
	else 
		return true;
}
//it removes all the elements that have the given value set to precision 5.
bool NumList :: removeAll(double element){
	int count = 0;
	for(int i = 0; i < m_num_elements; i++){
		if(fabs(m_list[i] - element) <= 0.00001){
			count++;
			for(int j = i; j < m_num_elements-1; j++){
				m_list[j] = m_list[j+1];
			}
			i--;
			m_num_elements--;
		}
	}
	if(count > 0)
		return true;
	else
		return false;	
		
					
}
//inserts the given elements in the list.
void NumList :: insert(double element){
	if(m_num_elements ==  m_size){
		m_size = m_size*2;
		double *newarry =  new double[m_size];
		for(int i = 0; i < m_num_elements; i++){
			newarry[i] = m_list[i];
		}
		delete [] m_list;
		m_list = newarry;
	}
		m_list[m_num_elements] = element;
		m_num_elements++;
}
// prints out the contents in the array list.
void NumList :: print_contents() const {
	for(int j = 0; j < m_num_elements; j++){
		cout << m_list[j] <<", ";
	}
	cout<<endl;
}

