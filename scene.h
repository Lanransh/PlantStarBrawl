#ifndef _SCENE_H
#define _SCENE_H
#include <graphics.h>
class Scene
{
public:
	Scene() = default;
	~Scene() = default;

	virtual void on_enter() { }
	virtual void on_update() { }		//处理数据
	virtual void on_draw() { }			//渲染绘图
	virtual void on_input (const ExMessage & msg ) { }
	virtual void on_exit() { }
private:

};
#endif // !_SCENE_H_