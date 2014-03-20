#pragma once

#include <windows.h>
#include <vector>

class WhatsappChat;

class MainWindow
{
private:
	HWND dialog;
	std::vector<WhatsappChat *> &chats;

	void createChildWindows();
	void resizeChildWindows(int width, int height);
	void addChats();
	void addChat(WhatsappChat &chat);

	static INT_PTR CALLBACK dialogCallback(HWND dialog, UINT message, WPARAM wParam, LPARAM lParam);

public:
	MainWindow(std::vector<WhatsappChat *> &chats);
	~MainWindow();

	bool handleMessages();
};