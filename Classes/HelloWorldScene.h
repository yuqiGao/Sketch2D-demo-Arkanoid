#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "scene/CanvasScene.h"
USING_NS_CC;

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
	static int Shape;

    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
	void onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);

	void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);

	Sprite* board = NULL;

	PhysicsWorld* m_world;
	void setPhyWorld(PhysicsWorld* world) { m_world = world; };

	Sprite* ballOne;
	Sprite* ballTwo;
	

	void createbricks();

    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

	virtual void onEnter();
	bool onContactBegin(const PhysicsContact& contact);
	void onContactSeparate(const PhysicsContact& contact);

	void HelloWorld::generateObstacle(double x, double y, string name, int tagNumber);
private:

	GameCanvasLayer* _canvasLayer;
	
};

#endif // __HELLOWORLD_SCENE_H__
