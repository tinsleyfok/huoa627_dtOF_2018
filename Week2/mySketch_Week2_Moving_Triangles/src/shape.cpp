//
//  shape.cpp
//  mySketch_Week2
//
//  Created by Tinsley Huo on 9/10/18.
//


#include "shape.h"

// --------------------------------------------------------
void Shape::setup(float posX1, float posY1, float posX2, float posY2, float posX3, float posY3){
    
    // setup position and size
    
    x1 = posX1;
    y1 = posY1;

    
    x2 = posX2;
    y2 = posY2;

    
    x3 = posX3;
    y3 = posY3;

    
    // default to no movement yet - we can set it later
    
    dirX1 = 0;
    dirY1 = 0;
    dirX2 = 0;
    dirY2 = 0;
    dirX3= 0;
    dirY3 = 0;

}

// --------------------------------------------------------
void Shape::update(){
    
    // move: update position x and y
    
    x1 += dirX1;
    y1 += dirY1;
    
    x2 += dirX2;
    y2 += dirY2;
    
    x3 += dirX3;
    y3 += dirY3;
    
    // bounce:
    
    // check if we moved out of window frame
    
    if(x1 > ofGetWidth()){
        // if we're too far right...
        
        // bounce
        x1 = ofGetWidth();        // put back in window
        dirX1 = dirX1 * -1;        // flip x movement
        
    }
    else if (x1 < 0){
        // bounce off left edge
        
        x1 = 0;
        dirX1 = dirX1 * -1;
    }
    
    
    if(y1 > ofGetHeight()){
        // bounce bottom edge
        
        y1 = ofGetHeight();
        dirY1 = dirY1 * -1;
    }
    else if (y1 < 0){
        // or bounce top edge
        
        y1 = 0;
        dirY1 = dirY1 * -1;
    }
    
    if(x2 > ofGetWidth()){
        // if we're too far right...
        
        // bounce
        x2 = ofGetWidth();        // put back in window
        dirX2 = dirX2 * -1;        // flip x movement
        
    }
    else if (x2 < 0){
        // bounce off left edge
        
        x2 = 0;
        dirX2 = dirX2 * -1;
    }
    
    
    if(y2 > ofGetHeight()){
        // bounce bottom edge
        
        y2 = ofGetHeight();
        dirY2 = dirY2 * -1;
    }
    else if (y2 < 0){
        // or bounce top edge
        
        y2 = 0;
        dirY2 = dirY2 * -1;
    }
    
    if(x3> ofGetWidth()){
        // if we're too far right...
        
        // bounce
        x3 = ofGetWidth();        // put back in window
        dirX3 = dirX3 * -1;        // flip x movement
        
    }
    else if (x3 < 0){
        // bounce off left edge
        
        x3 = 0;
        dirX3 = dirX3 * -1;
    }
    
    
    if(y3 > ofGetHeight()){
        // bounce bottom edge
        
        y3 = ofGetHeight();
        dirY3 = dirY3 * -1;
    }
    else if (y3< 0){
        // or bounce top edge
        
        y3 = 0;
        dirY3 = dirY3 * -1;
    }
    
}

// --------------------------------------------------------
void Shape::draw(){
    ofDrawTriangle(x1, y1, x2, y2,  x3, y3);
    
    // draw a simple rectangle on screen
}

// --------------------------------------------------------
float Shape::getCenterX(){
    return x1 + (x1 * 0.5);   // origin plus half the width
}
float Shape::getCenterY(){
    return y1 + (y1 * 0.5);
}
