#include "ofApp.h"

float radius,vel,xPos,yPos,xPos1,yPos1,tetha,maxRadius;
float easing = 0.01;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
    vel=1;
    xPos=0;
    xPos-0;
    tetha=180;
    maxRadius=100;

    
}


void ofApp::update(){
    if(tetha<180)
    {
        tetha+=vel;
    }
    radius=maxRadius*sin(PI*tetha/180);

}



//--------------------------------------------------------------
void ofApp::draw(){
   
    string info = "mousepress anywhere";
    ofDrawBitmapString(info, 10, 20);
    
    float targetX = mouseX;
    float dx = targetX - xPos;
    xPos+= dx * easing;
    
    float targetY = mouseY;
    float dy = targetY - yPos;
    yPos += dy * easing;

    ofDrawCircle(xPos, yPos, radius);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    xPos=x;
    yPos=y;
   
}


//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
   

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
   ofBackground(ofRandom(255), ofRandom(255), ofRandom(255));
  tetha=0;
                ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255));
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
   
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
