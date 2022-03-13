#include "babyboid.h"
#include "ofMain.h"

void BabyBoid::draw()
{
	ofSetColor(255, 0, 255);
	ofCircle(position.x, position.y, 7);
    
}
