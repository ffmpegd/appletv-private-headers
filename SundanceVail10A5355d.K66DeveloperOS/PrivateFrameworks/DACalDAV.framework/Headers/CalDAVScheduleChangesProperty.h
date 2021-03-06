/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString, CalDAVOccurrenceChange;

@interface CalDAVScheduleChangesProperty : NSObject {
	NSString *_dateStamp;	// 4 = 0x4
	int _actionType;	// 8 = 0x8
	CalDAVOccurrenceChange *_masterChange;	// 12 = 0xc
	NSMutableDictionary *_occurrenceChanges;	// 16 = 0x10
	NSString *_attendeeAddress;	// 20 = 0x14
}
@property(assign) int actionType;	// G=0x34042cc5; S=0x34042cd9; @synthesize=_actionType
@property(retain) NSString *attendeeAddress;	// G=0x34042cf1; S=0x34042d05; @synthesize=_attendeeAddress
@property(retain) NSString *dateStamp;	// G=0x34042ca1; S=0x34042cb5; @synthesize=_dateStamp
@property(retain) CalDAVOccurrenceChange *masterChange;	// G=0x34042d15; S=0x34042d29; @synthesize=_masterChange
+ (id)debugStringForType:(int)type;	// 0x3404276d
+ (void)initialize;	// 0x340425e1
+ (id)propertyWithItem:(id)item;	// 0x34042835
- (id)init;	// 0x34042629
// declared property getter: - (int)actionType;	// 0x34042cc5
- (void)addOccurrenceChange:(id)change;	// 0x34042ac9
- (id)allChanges;	// 0x34042b89
// declared property getter: - (id)attendeeAddress;	// 0x34042cf1
- (id)changeForOccurrence:(id)occurrence;	// 0x34042c4d
// declared property getter: - (id)dateStamp;	// 0x34042ca1
- (void)dealloc;	// 0x340426e5
- (BOOL)isCancel;	// 0x340427b9
- (BOOL)isCreate;	// 0x34042819
- (BOOL)isReply;	// 0x340427d9
- (BOOL)isUpdate;	// 0x340427f9
// declared property getter: - (id)masterChange;	// 0x34042d15
- (id)recurrenceIDs;	// 0x34042c09
// declared property setter: - (void)setActionType:(int)type;	// 0x34042cd9
// declared property setter: - (void)setAttendeeAddress:(id)address;	// 0x34042d05
// declared property setter: - (void)setDateStamp:(id)stamp;	// 0x34042cb5
// declared property setter: - (void)setMasterChange:(id)change;	// 0x34042d29
@end

