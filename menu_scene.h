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
		std::cout << "�������˵�" << std::endl;

	}
	virtual void on_update()		//��������
	{
		std::cout << "���˵���������..." << std::endl;

	}
	virtual void on_draw() 		//��Ⱦ��ͼ
	{
		outtextxy(10, 10, _T("���˵���ͼ����"));

	}
	virtual void on_input(const ExMessage& msg) { }
	virtual void on_exit()
	{
		std::cout << "���˵��˳�" << std::endl;
	}
	

};
#endif //  _MENU_SCENE_H

