#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGLFWWindow.h"

//========================================================================
int main( ){

    ofSetupOpenGL(1920,1080, OF_FULLSCREEN);
    ofRunApp( new ofApp() );
}
