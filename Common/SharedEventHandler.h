#ifndef SHARED_EVENT_HANDLER_H_
#define SHARED_EVENT_HANDLER_H_

#define EVENTS_LENGTH \
	(EVENTS_NOF_TYPES / sizeof(int) + 1)

typedef void (*EventCallback)();

void Events_fireEvent(EventType type);
void Events_setHandler(EventType type, EventCallback callback);
void Events_handle();

#endif
