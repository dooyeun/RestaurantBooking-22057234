#include "gmock/gmock.h"
#include "booking_scheduler.cpp"

class TestableBookingScheduler : public BookingScheduler {
public:
	TestableBookingScheduler(int capacityPerHour) :
		BookingScheduler{ capacityPerHour } {
	}
	MOCK_METHOD(time_t, getNow, (), (override));
};