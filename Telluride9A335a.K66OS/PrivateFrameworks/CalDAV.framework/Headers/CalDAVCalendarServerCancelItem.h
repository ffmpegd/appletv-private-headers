/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerCancelItem : CoreDAVItem {
	NSMutableSet *_recurrences;	// 24 = 0x18
}
@property(retain) NSMutableSet *recurrences;	// G=0x33257ca1; S=0x33257c7d; @synthesize=_recurrences
- (id)init;	// 0x33257a99
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33257c0d
- (void)addRecurrence:(id)recurrence;	// 0x33257be1
- (id)copyParseRules;	// 0x33257ad5
- (void)dealloc;	// 0x33257ce5
- (id)description;	// 0x33257cb9
// declared property getter: - (id)recurrences;	// 0x33257ca1
// declared property setter: - (void)setRecurrences:(id)recurrences;	// 0x33257c7d
@end

