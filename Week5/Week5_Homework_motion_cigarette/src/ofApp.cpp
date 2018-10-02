#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    opacity=100;
    boxLeft     = 0;
    boxRight    = 160;
    boxTop      = 400;
    boxBottom   = 420;
  
    
    for(int i=0; i<1000;i++){
        float r =ofRandom(5,10);
        float x = ofRandom(150,200);;
        float y = ofRandom(400,420);
        balls[i].setup(x, y, r);
    }
   gravity = glm::vec2(0, 0.05);
}

//--------------------------------------------------------------
void ofApp::update(){

    for(int i=0; i<1000;i++){
        balls[i].addForce(gravity);
        balls[i].update();
     
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
 
    ofSetColor(255,opacity);
    ofDrawRectangle(0, 400, 120, 20);
    ofSetColor(231,147,25,opacity);
    ofDrawRectangle(120, 400, 40, 20);
    ofSetColor(255);
    
    for(int i=0; i<1000;i++){
        balls[i].draw();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}
//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
 
 
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if (x >= boxLeft && x <= boxRight){
        if (y >= boxTop && y <= boxBottom){
            opacity=200;
                    // add new balls
                    for(int i=0; i<1000;i++){
                        float r =ofRandom(5,10);
                        float x = ofRandom(150,200);;
                        float y = ofRandom(400,420);
                        balls[i].setup(x, y, r);
               
                        balls[i].draw();
            
            }
        }
    }

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    opacity = 100;
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
