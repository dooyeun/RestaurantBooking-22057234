#include "gmock/gmock.h"
#include "mail_sender.cpp"

class TestableMailSender : public MailSender {
public:
	MOCK_METHOD(void, sendMail, (Schedule*), (override));
};