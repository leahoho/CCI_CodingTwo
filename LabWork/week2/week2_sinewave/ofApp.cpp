#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(188,176,226);
    ofSetCircleResolution(100);
    ofSetDepthTest(true);
    
    drums.load("drums.wav");
    synthHit.load("synthHit.wav");
    bass.load("bass.wav");
    
    drums.setVolume(0.3);
    synthHit.setVolume(0.1);
    bass.setVolume(0.9);
        
    drums.play();
    synthHit.play();
    bass.play();
        
    drums.setLoop(true);
    synthHit.setLoop(true);
    bass.setLoop(true);
        
    drums.setSpeed(0.9);
    synthHit.setSpeed(-0.5);
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    float time = ofGetElapsedTimef();
    
    for (int x = 1; x < 40; x ++){
        
        for (int i=0; i < 900; i+=5){
            
            ofSetColor(107 + 107 * sin(i * 0.01 + time + x ),
                       89 + 89 * sin(i * 0.011 + time ),
                       121 + 121 * sin(i * 0.012 + time ));

            
             ofDrawCircle( 50 * x + 100 * sin( i * 0.01 + time + x), 50 + i , 130 +  40 * sin( i * 0.005 + time + x) ) ;
            

        }
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {
        case 'f':
        case 'F':
            ofToggleFullscreen();
            break;
            
        default:
            break;
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
