#pragma once

#include <pthread.h>
#include <stdint.h>

namespace neosmart
{
	struct neosmart_event_t_;
	typedef neosmart_event_t_ * neosmart_event_t;
	
	neosmart_event_t CreateEvent(bool manualReset = false, bool initialState = false);
	int DestroyEvent(neosmart_event_t event);
	int WaitForEvent(neosmart_event_t event, uint32_t milliseconds = -1);
	int SetEvent(neosmart_event_t event);
	int ResetEvent(neosmart_event_t event);
}
