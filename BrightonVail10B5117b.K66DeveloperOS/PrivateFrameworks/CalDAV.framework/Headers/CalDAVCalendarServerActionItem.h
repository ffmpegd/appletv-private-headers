/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren, CalDAVCalendarServerCancelItem;

@interface CalDAVCalendarServerActionItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_create;	// 28 = 0x1c
	CalDAVCalendarServerUpdateItem *_update;	// 32 = 0x20
	CalDAVCalendarServerCancelItem *_cancel;	// 36 = 0x24
	CalDAVCalendarServerReplyItem *_reply;	// 40 = 0x28
}
@property(retain) CalDAVCalendarServerCancelItem *cancel;	// G=0x33747855; S=0x33747869; @synthesize=_cancel
@property(retain) CoreDAVItemWithNoChildren *create;	// G=0x337477e9; S=0x337477fd; @synthesize=_create
@property(retain) CalDAVCalendarServerReplyItem *reply;	// G=0x33747831; S=0x33747845; @synthesize=_reply
@property(retain) CalDAVCalendarServerUpdateItem *update;	// G=0x3374780d; S=0x33747821; @synthesize=_update
- (id)init;	// 0x337473e1
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3374740d
// declared property getter: - (id)cancel;	// 0x33747855
- (id)copyParseRules;	// 0x3374753d
// declared property getter: - (id)create;	// 0x337477e9
- (void)dealloc;	// 0x33747491
- (id)description;	// 0x33747511
// declared property getter: - (id)reply;	// 0x33747831
// declared property setter: - (void)setCancel:(id)cancel;	// 0x33747869
// declared property setter: - (void)setCreate:(id)create;	// 0x337477fd
// declared property setter: - (void)setReply:(id)reply;	// 0x33747845
// declared property setter: - (void)setUpdate:(id)update;	// 0x33747821
// declared property getter: - (id)update;	// 0x3374780d
@end

