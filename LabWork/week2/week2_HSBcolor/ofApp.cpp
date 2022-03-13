#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetFrameRate(15);
}

//--------------------------------------------------------------
void ofApp::update(){
  
}

//--------------------------------------------------------------
void ofApp::draw(){
    myDrawColor.set(188, 176, 226);
    myDrawColor.setHsb(ofRandom(255), 250, 0, 0);
    ofSetColor(myDrawColor);
    
//    for (int i =0; i < 100; i++){
//        ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 55);
//    }
    
    
    for (int y =0; y < ofGetHeight(); y += 20){
        
        for (int x= 0; x<ofGetWidth(); x+= 20){
        myDrawColor.setHsb(ofMap(x, 0, ofGetWidth(), 0, 15), ofMap(y, 0,ofGetHeight(), 0, 130), ofMap(ofGetMouseX(), 0, ofGetHeight(), 0, 255));

        ofSetColor(myDrawColor);
        ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 55);
    }
    }
    


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'f'){
        ofToggleFullscreen();
    }

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
