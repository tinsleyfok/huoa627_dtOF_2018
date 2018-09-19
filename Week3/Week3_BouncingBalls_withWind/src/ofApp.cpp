#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    for(int i=0; i<10;i++){
        float r =ofRandom(20,50);
        float x = ofRandom(0, ofGetWindowWidth());
        float y = ofRandom(0, ofGetWindowHeight());
        balls[i].setup(x, y, r); //ofRandom(20,50), ofRandom(20,50)
        
        float area = balls[i].r;
        cout << "ball[" << i << "] area =" <<area << endl;
        
        //        float speed = area/100;
//        float speed = ofMap(area,20 * 20, 50 * 50,20,2 );
        
        //        int dir =1;
        //        if (ofRandom(1)<0.5){
        //            dir *=-1;
        //        }
        
//        balls[i].vel.x = speed;
//        balls[i].vel.y = speed;
        
        //        squares[i].dirX = ofRandom(-10,10);
        //        squares[i].dirY = ofRandom(-10,10);
        
        
//        float hue = ofMap(speed,2,20,100,200);
//        balls[i].color=ofColor::fromHsb(hue,255,200);
        
        balls[i].color= ofColor(255,255,255,80);
    }
}



//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0; i<10;i++){
        balls[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<10;i++){
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
