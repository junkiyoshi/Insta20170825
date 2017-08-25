#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("Insta");

	ofNoFill();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	this->cam.begin();

	for (int deg = ofGetFrameNum(); deg < ofGetFrameNum() + 360; deg += 5) {
		float noise_value = ofNoise((ofGetFrameNum() + deg) * 0.025);

		ofColor c;
		c.setHsb(255 * noise_value, 255, 255);
		ofSetColor(255, (deg - ofGetFrameNum()));

		float x = ofMap(noise_value, 0, 1, 50, 450) * cos(deg * DEG_TO_RAD);
		float y = ofMap(noise_value, 0, 1, 50, 450) * sin(deg * DEG_TO_RAD);
		ofEllipse(x, y, 25, 25);
	}

	this->cam.end();
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
