/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_transparent;	// 28 = 0x1c
}
@property(readonly, assign) BOOL isScheduleTransparent;	// G=0x337f5c11; 
@property(retain) CoreDAVItemWithNoChildren *transparent;	// G=0x337f5d31; S=0x337f5d45; @synthesize=_transparent
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x337f5b85
- (id)copyParseRules;	// 0x337f5c2d
- (void)dealloc;	// 0x337f5bcd
// declared property getter: - (BOOL)isScheduleTransparent;	// 0x337f5c11
// declared property setter: - (void)setTransparent:(id)transparent;	// 0x337f5d45
// declared property getter: - (id)transparent;	// 0x337f5d31
@end
