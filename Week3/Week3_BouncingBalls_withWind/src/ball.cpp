#include "ball.h"

// --------------------------------------------------------
void Ball::setup(float posX, float posY, float radius){
    
    // setup position and size
    
    //    x = posX;
    //    y = posY;
    pos = glm::vec2(posX,posY);
//     acc = glm::vec2(3,3);
   
    r=radius;
    
    // default to no movement yet - we can set it later
    
    //    dirX = 0;
    //    dirY = 0;
    
    vel=glm::vec2(0,0);
    color =ofColor(255);
}

// --------------------------------------------------------
void Ball::update(){
    
   
  
//    do{
//
//        acc = glm::vec2(a,b);
//        a=a+2;
//        b=b+2;
//    vel += acc;
//    pos += vel;
//   time = ofGetElapsedTimef();
//    } while (ofGetElapsedTimef()-time>5);
    
    if(ofGetElapsedTimef()<5){
        acc = glm::vec2(1,0.6);
        vel += acc;
        pos += vel;
    } else if (ofGetElapsedTimef()<10){
        acc = glm::vec2(-0.3,-0.7);
        vel += acc;
        pos += vel;
    }else if (ofGetElapsedTimef()<15){
        acc = glm::vec2(0.6,0.5);
        vel += acc;
        pos += vel;
    }else {
        acc = glm::vec2(ofRandom(-1,1),ofRandom(-1,1));
        vel += acc;
        pos += vel;
    }
    
    
    if(pos.x > ofGetWidth()){
       
        pos.x = ofGetWidth();
        vel.x = vel.x * -0.85;
        
    }
    else if (pos.x < 0){

        
        pos.x = 0;
        vel.x = vel.x * -0.85;
    }
    
    
    if(pos.y > ofGetHeight()){
     
        
        pos.y = ofGetHeight();
        vel.y = vel.y * -0.85;
    }
    else if (pos.y < 0){

        pos.y = 0;
        vel.y = vel.y * -0.85;
    }
    
}

// --------------------------------------------------------
void Ball::draw(){
    
//    ofColor  color1= ofColor(255,0,255,80);
//    ofColor color2= ofColor(200,0,255,90);
//    float percent = r;
//    ofColor color  = color1.getLerped(color2, percent);
//    ofSetColor(color);
    ofDrawCircle(pos.x,pos.y,r);
    ofSetColor(255,255,255,80);
    
    string timeInfo = "'time':time() " + ofToString(ofGetElapsedTimef());
    ofDrawBitmapString(timeInfo, 20, 20);
    
    

    // draw a simple rectangle on screen
}

// --------------------------------------------------------
//float Square::getCenterX(){
//    return pos.x + (w * 0.5);   // origin plus half the width
//}
//float Square::getCenterY(){
//    return pos.y + (h * 0.5);
//}
glm::vec2 Ball::getCenter(){
    float cx =pos.x + r*0.5;
    float cy =pos.x + r*0.5;
    return glm::vec2(cx,cy);
}
