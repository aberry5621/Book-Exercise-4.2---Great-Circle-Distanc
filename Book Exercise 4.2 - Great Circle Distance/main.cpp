//
//  main.cpp
//  Book Exercise 4.2 - Great Circle Distance
//
//  Created by ax on 9/25/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    
    const double EARTH_RADIUS = 6378.1;
    
    double d = 0.0;
    
    
    cout << "Enter point 1 (latitude and longitude) in degrees: ";
    cin >> x1 >> y1;
    
    cout << "Enter point 2 (latitude and longitude) in degrees: ";
    cin >> x2 >> y2;
    
    
    d = EARTH_RADIUS * acos((sin(x1) * sin(x2)) + (cos(x1) * cos(x2) * cos(y1 -y2)));
    
    
    cout << "The distance between the points is: " << d << endl;
    

    
    return 0;
}