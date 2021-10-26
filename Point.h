#ifndef _POINT_H_ // header guard
#define _POINT_H_
#include <vector>

/*
CSCI 3010, PE 2
Zach Akin-Amland
Point with n dimensions with Distance and Translate methods.
*/

class Point {
public: 
    Point(const int n); 														// default constructor
	Point(const std::vector<int> x);  											// paramaterized constructor
	int get_dimensions_amount() const { return coordinates_.size(); }			// returns number of dimensions
	void set_coordinates(const std::vector<int> &x) { coordinates_=x; } 	 	// sets the coordinates of this Point object to vector x
	int get_coordinates(const int location) { return coordinates_.at(location);}// returns value of the vector at 'location' index		
	double Distance(const Point &other) const;  								// member function
	void Translate(const int &amt);  											// member function
	void printCoordinates();
 private:
	std::vector<int> get_coordinates_vector() const { return coordinates_;}		// returns the coordinates vector
	std::vector<int> coordinates_;												// Point vaues in n dimensions
};  // class Point

#endif  // _POINT_H_

