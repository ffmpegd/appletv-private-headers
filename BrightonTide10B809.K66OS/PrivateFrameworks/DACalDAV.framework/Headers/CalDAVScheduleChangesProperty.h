/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, CalDAVOccurrenceChange, NSString;

@interface CalDAVScheduleChangesProperty : NSObject {
	NSString *_dateStamp;	// 4 = 0x4
	int _actionType;	// 8 = 0x8
	CalDAVOccurrenceChange *_masterChange;	// 12 = 0xc
	NSMutableDictionary *_occurrenceChanges;	// 16 = 0x10
	NSString *_attendeeAddress;	// 20 = 0x14
}
@property(assign) int actionType;	// G=0x339b00bd; S=0x339b00d1; @synthesize=_actionType
@property(retain) NSString *attendeeAddress;	// G=0x339b00e9; S=0x339b00fd; @synthesize=_attendeeAddress
@property(retain) NSString *dateStamp;	// G=0x339b0099; S=0x339b00ad; @synthesize=_dateStamp
@property(retain) CalDAVOccurrenceChange *masterChange;	// G=0x339b010d; S=0x339b0121; @synthesize=_masterChange
+ (id)debugStringForType:(int)type;	// 0x339afb65
+ (void)initialize;	// 0x339af9d9
+ (id)propertyWithItem:(id)item;	// 0x339afc2d
- (id)init;	// 0x339afa21
// declared property getter: - (int)actionType;	// 0x339b00bd
- (void)addOccurrenceChange:(id)change;	// 0x339afec1
- (id)allChanges;	// 0x339aff81
// declared property getter: - (id)attendeeAddress;	// 0x339b00e9
- (id)changeForOccurrence:(id)occurrence;	// 0x339b0045
// declared property getter: - (id)dateStamp;	// 0x339b0099
- (void)dealloc;	// 0x339afadd
- (BOOL)isCancel;	// 0x339afbb1
- (BOOL)isCreate;	// 0x339afc11
- (BOOL)isReply;	// 0x339afbd1
- (BOOL)isUpdate;	// 0x339afbf1
// declared property getter: - (id)masterChange;	// 0x339b010d
- (id)recurrenceIDs;	// 0x339b0001
// declared property setter: - (void)setActionType:(int)type;	// 0x339b00d1
// declared property setter: - (void)setAttendeeAddress:(id)address;	// 0x339b00fd
// declared property setter: - (void)setDateStamp:(id)stamp;	// 0x339b00ad
// declared property setter: - (void)setMasterChange:(id)change;	// 0x339b0121
@end
