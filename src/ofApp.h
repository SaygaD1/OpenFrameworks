#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{
        ofImage Image;
    string text;
    ofTrueTypeFont font;
    ofSoundPlayer drumloop;
    ofxButton Button;
    ofxPanel Panel;
    ofColor Color;
    ofVideoGrabber Cum;
    int size;
    ofImage screen;
    ofxToggle Toggle;
    ofxLabel label;
    ofParameterGroup slidergroup;
    ofParameter<int> Slide1;
    ofParameter<float> Slide2;
    ofxIntField field1;
    ofxFloatField field2;
    ofxTextField textField;
    ofxVec2Slider Vec2;
    ofxVec2Slider Vec2x;
    ofxVec3Slider Vec3;
    ofxVec4Slider Vec4;
    int buf;
    ofLight Light;
    
    ofVec2f line;
    ofxToggle rotatory;
    ofxToggle rotatorx;
    ofxToggle rotatorz;
    float rotation[3];
    

	public:
        
        ofLight PointLight;
        ofSpherePrimitive sphere;
        ofConePrimitive Cone;
		void setup();
		void update();
        void draw();
   
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
};
