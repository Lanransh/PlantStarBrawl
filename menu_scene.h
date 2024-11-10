#ifndef  _MENU_SCENE_H
#define _MENU_SCENE_H
#include "scene.h"
#include <iostream>
class MenuScenc : public Scene
{
public:
	MenuScenc() = default;
	~MenuScenc() = default;

	virtual void on_enter()
	{
		std::cout << "进入主菜单" << std::endl;

	}
	virtual void on_update()		//处理数据
	{
		std::cout << "主菜单正在运行..." << std::endl;

	}
	virtual void on_draw() 		//渲染绘图
	{
		outtextxy(10, 10, _T("主菜单绘图内容"));

	}
	virtual void on_input(const ExMessage& msg) { }
	virtual void on_exit()
	{
		std::cout << "主菜单退出" << std::endl;
	}
	

};
#endif //  _MENU_SCENE_H

