/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVLeafItem, CalDAVCalendarServerChangesItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_master;	// 24 = 0x18
	CoreDAVLeafItem *_recurrenceID;	// 28 = 0x1c
	CalDAVCalendarServerChangesItem *_changes;	// 32 = 0x20
}
@property(retain) CalDAVCalendarServerChangesItem *changes;	// G=0x3147dfdd; S=0x3147dfb9; @synthesize=_changes
@property(readonly, assign) BOOL isMaster;	// G=0x3147dead; 
@property(retain) CoreDAVItemWithNoChildren *master;	// G=0x3147df65; S=0x3147df41; @synthesize=_master
@property(retain) CoreDAVLeafItem *recurrenceID;	// G=0x3147dfa1; S=0x3147df7d; @synthesize=_recurrenceID
- (id)init;	// 0x3147dc05
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3147decd
// declared property getter: - (id)changes;	// 0x3147dfdd
- (id)copyParseRules;	// 0x3147dc41
- (void)dealloc;	// 0x3147e021
- (id)description;	// 0x3147dff5
// declared property getter: - (BOOL)isMaster;	// 0x3147dead
// declared property getter: - (id)master;	// 0x3147df65
// declared property getter: - (id)recurrenceID;	// 0x3147dfa1
// declared property setter: - (void)setChanges:(id)changes;	// 0x3147dfb9
// declared property setter: - (void)setMaster:(id)master;	// 0x3147df41
// declared property setter: - (void)setRecurrenceID:(id)anId;	// 0x3147df7d
@end

