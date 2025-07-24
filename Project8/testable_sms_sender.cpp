#include <iostream>
#include "gmock/gmock.h"
#include "sms_sender.cpp"

class TestableSmsSender : public SmsSender {
public:
	MOCK_METHOD(void, send, (Schedule*), (override));
};