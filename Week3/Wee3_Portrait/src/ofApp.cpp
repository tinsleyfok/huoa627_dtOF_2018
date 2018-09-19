#include "ofApp.h"
ofPolyline curver;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){

 
}

//--------------------------------------------------------------
void ofApp::draw(){
        float value = ofRandom(80,100);
    ofSetColor(255, 255, 255);
    ofSetLineWidth(3.0f);
    ofPoint point1(500,220);
    curver.arc(point1,100,200,0,180,270);
    curver.draw();

    ofDrawCircle(450,280,15);
    ofDrawCircle(550,280,15);
    ofDrawCircle(450,280,5);
    ofDrawCircle(550,280,5);
    ofSetColor(250, 15, 255,80);
    ofDrawCircle(440,320,10);
    ofDrawCircle(570,320,10);
       ofNoFill();
       ofSetColor(255, 255, 255);
    ofDrawTriangle(500, 350, 520, 350, 510, 360);
    
    ofBeginShape();
    for (int i = 170; i < 500; i++){
        float y = i;
        float noise = ofNoise(i/value);
        float x = ofMap(noise, 0,1, 300, 400);
        ofVertex(x,y);
    }
       ofEndShape();
     ofBeginShape();
    for (int i = 150; i < 500; i++){
        float y = i;
        float noise = ofNoise(i/value);
        float x = ofMap(noise, 0,1, 330, 450);
        ofVertex(x,y);
    }
    ofEndShape();
    ofBeginShape();
    for (int i = 150; i < 500; i++){
        float y = i;
        float noise = ofNoise(i/value);
        float x = ofMap(noise, 0,1, 550, 650);
        ofVertex(x,y);
    }
    ofEndShape();
    ofBeginShape();
    for (int i = 170; i < 500; i++){
        float y = i;
        float noise = ofNoise(i/value);
        float x = ofMap(noise, 0,1, 580, 680);
        ofVertex(x,y);
    }
    ofEndShape();
    
    ofBeginShape();
    for (int i = 120; i < 200; i++){
        float y = i;
        float noise = ofNoise(i/value);
        float x = ofMap(noise, 0,1, 420, 470);
        ofVertex(x,y);
    }
    ofEndShape();
    
    ofBeginShape();
    for (int i = 100; i < 200; i++){
        float y = i;
        float noise = ofNoise(i/value);
        float x = ofMap(noise, 0,1, 450, 540);
        ofVertex(x,y);
    }
    ofEndShape();
    
    ofBeginShape();
    for (int i = 100; i < 200; i++){
        float y = i;
        float noise = ofNoise(i/value);
        float x = ofMap(noise, 0,1, 500, 580);
        ofVertex(x,y);
    }
    ofEndShape();
    
    ofBeginShape();
    for (int i = 120; i < 200; i++){
        float y = i;
        float noise = ofNoise(i/value);
        float x = ofMap(noise, 0,1, 550, 600);
        ofVertex(x,y);
    }
    ofEndShape();

   

   
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    ofFill();
   
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
  
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
