#pragma once

#include <windows.h>
#include <string>
#include <vector>

struct sqlite3;
class Settings;
class WhatsappChat;
class WhatsappMessage;

class WhatsappDatabase
{
private:
	sqlite3* sqLiteDatabase;

public:
	WhatsappDatabase(const std::string &filename);
	~WhatsappDatabase();

	void getChats(Settings &settings, std::vector<WhatsappChat *> &chats);
	void getMessages(const std::string &chatId, std::vector<WhatsappMessage *> &messages, const volatile bool &running);

	int getErrorCode();
	std::string getErrorMessage();

};
