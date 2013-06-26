/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRHiddenSelectionMenuItem : BRMenuItem {
	NSArray *_events;	// 176 = 0xb0
	int _eventCount;	// 180 = 0xb4
}
@property(retain) NSArray *events;	// G=0x2d85e1; S=0x2d85f1; converted property
@property(retain) id hiddenSelectionHandler;	// G=0x2d8659; S=0x2d863d; converted property
- (BOOL)brEventAction:(id)action;	// 0x2d84cd
- (void)dealloc;	// 0x2d8481
// converted property getter: - (id)events;	// 0x2d85e1
// converted property getter: - (id)hiddenSelectionHandler;	// 0x2d8659
// converted property setter: - (void)setEvents:(id)events;	// 0x2d85f1
// converted property setter: - (void)setHiddenSelectionHandler:(id)handler;	// 0x2d863d
@end
