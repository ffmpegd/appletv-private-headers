/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class CalDAVOccurrenceChange, NSString, NSMutableDictionary;

@interface CalDAVScheduleChangesProperty : NSObject {
	NSString *_dateStamp;	// 4 = 0x4
	int _actionType;	// 8 = 0x8
	CalDAVOccurrenceChange *_masterChange;	// 12 = 0xc
	NSMutableDictionary *_occurrenceChanges;	// 16 = 0x10
	NSString *_attendeeAddress;	// 20 = 0x14
}
@property(assign) int actionType;	// G=0x3023ef65; S=0x3023ef75; @synthesize=_actionType
@property(retain) NSString *attendeeAddress;	// G=0x3023ef85; S=0x3023ef99; @synthesize=_attendeeAddress
@property(retain) NSString *dateStamp;	// G=0x3023ef2d; S=0x3023ef41; @synthesize=_dateStamp
@property(retain) CalDAVOccurrenceChange *masterChange;	// G=0x3023efbd; S=0x3023efd1; @synthesize=_masterChange
+ (id)debugStringForType:(int)type;	// 0x3023ea05
+ (void)initialize;	// 0x3023e879
+ (id)propertyWithItem:(id)item;	// 0x3023ead1
- (id)init;	// 0x3023e8c1
// declared property getter: - (int)actionType;	// 0x3023ef65
- (void)addOccurrenceChange:(id)change;	// 0x3023ed61
- (id)allChanges;	// 0x3023ee1d
// declared property getter: - (id)attendeeAddress;	// 0x3023ef85
- (id)changeForOccurrence:(id)occurrence;	// 0x3023eedd
// declared property getter: - (id)dateStamp;	// 0x3023ef2d
- (void)dealloc;	// 0x3023e97d
- (BOOL)isCancel;	// 0x3023ea51
- (BOOL)isCreate;	// 0x3023eab1
- (BOOL)isReply;	// 0x3023ea71
- (BOOL)isUpdate;	// 0x3023ea91
// declared property getter: - (id)masterChange;	// 0x3023efbd
- (id)recurrenceIDs;	// 0x3023ee99
// declared property setter: - (void)setActionType:(int)type;	// 0x3023ef75
// declared property setter: - (void)setAttendeeAddress:(id)address;	// 0x3023ef99
// declared property setter: - (void)setDateStamp:(id)stamp;	// 0x3023ef41
// declared property setter: - (void)setMasterChange:(id)change;	// 0x3023efd1
@end

