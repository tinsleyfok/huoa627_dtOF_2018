//
//  shape.h
//  mySketch_Week2
//
//  Created by Tinsley Huo on 9/10/18.
//


#pragma once
#include "ofMain.h"

class Shape {
public:
    void setup(float posX1, float posY1, float posX2, float posY2, float posX3, float posY3);
    void update();
    void draw();
    
    // some extra "utility" functions -
    // return the center coordinates
    float getCenterX();
    float getCenterY();
    
    float x1,y1,x2,y2,x3,y3;
    float dirX1, dirY1,dirX2, dirY2,dirX3, dirY3;
    
};
