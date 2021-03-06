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
@property(retain) CalDAVCalendarServerActionItem *action;	// G=0x314112ed; S=0x31411301; @synthesize=_action
@property(retain) CoreDAVLeafItem *dtstamp;	// G=0x314112c9; S=0x314112dd; @synthesize=_dtstamp
- (id)init;	// 0x31411031
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3141105d
// declared property getter: - (id)action;	// 0x314112ed
- (id)copyParseRules;	// 0x3141113d
- (void)dealloc;	// 0x314110b9
- (id)description;	// 0x31411111
// declared property getter: - (id)dtstamp;	// 0x314112c9
// declared property setter: - (void)setAction:(id)action;	// 0x31411301
// declared property setter: - (void)setDtstamp:(id)dtstamp;	// 0x314112dd
@end

