/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CalDAVCalendarServerActionItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem {
	CoreDAVLeafItem *_dtstamp;	// 28 = 0x1c
	CalDAVCalendarServerActionItem *_action;	// 32 = 0x20
}
@property(retain) CalDAVCalendarServerActionItem *action;	// G=0x346fe22d; S=0x346fe241; @synthesize=_action
@property(retain) CoreDAVLeafItem *dtstamp;	// G=0x346fe209; S=0x346fe21d; @synthesize=_dtstamp
- (id)init;	// 0x346fdf71
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x346fdf9d
// declared property getter: - (id)action;	// 0x346fe22d
- (id)copyParseRules;	// 0x346fe07d
- (void)dealloc;	// 0x346fdff9
- (id)description;	// 0x346fe051
// declared property getter: - (id)dtstamp;	// 0x346fe209
// declared property setter: - (void)setAction:(id)action;	// 0x346fe241
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x346fe21d
@end

