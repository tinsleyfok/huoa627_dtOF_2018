//
//  ball.h
//  Week3_BouncingBalls_withWind
//
//  Created by Tinsley Huo on 9/18/18.
//

#pragma once
#include "ofMain.h"

class Ball {
public:
    void setup(float posX, float posY, float radius);
    void update();
    void draw();
    
    // some extra "utility" functions -
    // return the center coordinates
    float getCenterX();
    float getCenterY();
    glm::vec2 getCenter();
    
    float  r;
    ofColor color;
    //    float x,y;
    glm:: vec2 pos;
    glm:: vec2 vel;
    glm:: vec2 acc;
    
    //    float dirX, dirY;
    
};
