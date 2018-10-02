//
//  particles.cpp
//  Week5_Homework_motion_cigarette
//
//  Created by Tinsley Huo on 10/1/18.
//


#include "particles.h"


void Ball::setup(float posX, float posY, float radius){
    
    r=radius;
   
    pos = glm::vec2(posX,posY);
    color =ofColor(255);
}
//--------------------------------------------------------------

void Ball::update(){
  
    acc = glm::vec2(ofRandom(-0.01,0.1),ofRandom(-0.1,0.1));
    vel += acc;
    pos += vel;
    
    if (r > 0) {
        r-=0.07;
    }
  
    if (pos.x > 500) {
        acc = glm::vec2(ofRandom(-0.01,0.1),ofRandom(-0.01,0.01));
        vel += -1.5*acc;
    }
   
    acc *= 0;
    
}


void Ball::draw(){
    ofDrawCircle(pos.x,pos.y,r);
    ofSetColor(255,255,255,80);
    ofDrawBitmapString("Press the cigarette", 20, 20);
}

void Ball::addForce(glm::vec2 force){
    acc += force;       // add acceleration force
}




