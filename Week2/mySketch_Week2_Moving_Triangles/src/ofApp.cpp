#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
ofBackground(0);//set background color black
ofSetColor(ofRandom(255),ofRandom(255),ofRandom(255), 70);
    
    for (int i=0; i<20; i++){   // loop 10 times, increment i each time
        
        float random = ofRandom(50);
        
        float x = i * random;
        float y = i * random;
        
     
        
    shapes[i].setup(ofRandom(x),ofRandom(y),100,200,150,70);       //
    
    // set starting movement direction
    
    shapes[i].dirX1 = 5;        // move 5 pixels right per frame to start
    shapes[i].dirY1 = 5;
    shapes[i].dirX3 = 5;
    shapes[i].dirY3 = 5;
    shapes[i].dirX2 = 5;
    shapes[i].dirY2 = 5;
    }
}

//--------------------------------------------------------------
void ofApp::update(){
 for (int i=0; i<100; i++){
    shapes[i].update();
 }
}

//--------------------------------------------------------------
void ofApp::draw(){
 for (int i=0; i<100; i++){
    shapes[i].draw();
 }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    // some extra keyboard commands:
    
    if (key == 'f') {
        
        // press f to toggle fullscreen / window mode
        ofToggleFullscreen();
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
