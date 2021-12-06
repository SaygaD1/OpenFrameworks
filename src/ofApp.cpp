#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //ofBackground(60);
    //ofSetCircleResolution(32);
    slidergroup.setName("Sliders");
    slidergroup.add(Slide1.set("Int Slider", 64, 3, 64));
    slidergroup.add(Slide2.set("Float Slider", 64.0, 0.0, 128.0));
    Panel.setup();
    Panel.add(slidergroup);
    Panel.add(Toggle.setup("Screen", false));
    Panel.add(Button.setup("Push me!"));
    Panel.add(label.setup("label", "Smthing strange"));
    
    Panel.add(field1.setup("Int Field", 100, 0, 100));
    Panel.add(field2.setup("Float Field",1.0,0.0,1.0));
    Panel.add(textField.setup("text field", "text"));
    
    Panel.add(Vec2.setup("Vec2 slider", ofVec2f(0, 0), ofVec2f(0, 0), ofVec2f(ofGetWidth(), ofGetHeight())));
    Panel.add(Vec2x.setup("Pos the fewer circle", ofVec2f(0, 0), ofVec2f(-ofGetWidth()/2, -ofGetHeight()/2), ofVec2f(ofGetWidth()/2, ofGetHeight()/2)));
    Panel.add(Vec3.setup("Vec3 slider", ofVec3f(100,150,90),ofVec3f(0,0,0),ofVec3f(255, 255,255)));
    Panel.add(Vec4.setup("Vec4 slider", ofVec4f(0,0,0,0), ofVec4f(0, 0, 0, 0), ofVec4f(255, 255, 255, 255)));
    
    Panel.add(rotatorx.setup("X rotation", false));
    Panel.add(rotatory.setup("Y rotation", false));
    Panel.add(rotatorz.setup("Z rotation", false));
}
//--------------------------------------------------------------
void ofApp::update(){
    ofSetCircleResolution(Slide1);
    buf=0;
    if(Toggle)
    {
        ofSetFullscreen(true);
    }
    else
    {
        ofSetFullscreen(false);
    }
    if(rotatorx)
    {
        rotation[0]-=0.2f;
    }
    if(rotatory)
    {
        rotation[1]-=0.2f;
    }
    if(rotatorz)
    {
        rotation[2]-=0.2f;
    }
}
//--------------------------------------------------------------
void ofApp::draw(){
    if(Button)
    {
        ofSetColor(ofRandom(Vec3->x), ofRandom(Vec3->y), ofRandom(Vec3->z));
    }
    Panel.draw();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateDeg(rotation[2]);
    ofRotateYDeg(rotation[1]);
    ofRotateXDeg(rotation[0]);
    ofNoFill();
    ofDrawSphere(Vec2x->x, Vec2x->y, Slide2);
    //ofDrawCircle(Vec2x->x, Vec2x->y,Slide2);
    ofSetColor(Vec4->x, Vec4->y, Vec4->z, Vec4->w);
    ofRotateXDeg(90);
    ofDrawCircle(Vec2->x, Vec2->y,128);
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key==87 || key==119)//W
    {
        Slide2++;
    }
    else if(key==83 || key==115)//S
    {
        Slide2--;
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
