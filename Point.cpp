#include <cmath>
#include <iostream>
#include <vector>
#include "Point.h"

/*
CSCI 3010, PE 2
Zach Akin-Amland
Point with n dimensions with Distance and Translate methods.
*/

/**
  Creates a new Point object with coordinates 0 in n dimensions
  @param const int n, n number of dimensions
*/
Point::Point(const int n) {
  for(int i=0;i<n;i++){
    coordinates_.push_back(0);
  }
}

/**
  Creates a new Point object with the same coordinates as vector x
  @param vector<int> x, vector of coordinates to copy to the Point object
*/
Point::Point(const std::vector<int> x) {
  coordinates_ = x;
}

/**
  Calculates the distance between this point and another Point.
  @param other Point object to calculate the distance to
*/
double Point::Distance(const Point &other) const {
  // We can access p's x_ and y_ variables either through the
  // get_x(), get_y() accessor functions, or the x_, y_ private
  // member variables directly, since we're in a member function of
  // the same class.
  int dimensions = 0;
  int distance_squared = 0;
  std::vector<int> otherVector = other.get_coordinates_vector();

  if((int)coordinates_.size()==other.get_dimensions_amount()){
    dimensions=coordinates_.size();
  } else if((int)coordinates_.size()>other.get_dimensions_amount()){
    std::cout << "Unequal dimensions, only " << other.get_dimensions_amount() << " dimensions are being measured. Distance: ";
    dimensions=other.get_dimensions_amount();
  } else {
    std::cout << "Unequal dimensions, only " << coordinates_.size() << " dimensions are being measured. Distance: ";
    dimensions=coordinates_.size();
  }
  
  for(int i=0;i<dimensions;i++){
    distance_squared+=pow((coordinates_[i]-otherVector[i]),2);
  }

  return sqrt(distance_squared);
}

/**
  Moves this Point's coordinates by the amount given.
  @param amt int amount by which to move the coordinates of this Point.
*/
void Point::Translate(const int &amt) {
  for(int i=0;i<(int)coordinates_.size();i++){
    coordinates_[i]+=amt;
  }
  return;
}

/**
  Prints are coordinates of the point
  @param none
*/
void Point::printCoordinates(){
	for(int i=0;i<(int)coordinates_.size();i++){
		std::cout << coordinates_.at(i) << " ";
	}
	std::cout << std::endl;
}
