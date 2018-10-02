//
//  particles.h
//  Week5_Homework_motion_cigarette
//
//  Created by Tinsley Huo on 10/1/18.
//

#pragma once
#include "ofMain.h"

class Ball {
public:
    
    void setup(float posX, float posY, float radius);
    void update();
    void draw();
    void addForce(glm::vec2 force);
  
    // some extra "utility" functions -
    // return the center coordinates
    float getCenterX();
    float getCenterY();
    float r;
    
    ofColor color;
    //    float x,y;
    glm:: vec2 pos;
    glm:: vec2 vel;
    glm:: vec2 acc;
    
};
