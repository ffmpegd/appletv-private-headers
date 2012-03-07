/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAVLeafDataPayload.h"
#import "DADataElement.h"
#import "CalDAVCalendarItemProtocol.h"

@class NSArray, NSData, CalDAVCalendarServerScheduleChangesItem, NSString, NSURL, NSNumber;

@interface DACalDAViCalItem : NSObject <CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol> {
	NSURL *_serverID;	// 4 = 0x4
	NSNumber *_clientID;	// 8 = 0x8
	NSString *_syncKey;	// 12 = 0xc
	NSString *_scheduleTag;	// 16 = 0x10
	void *_calItem;	// 20 = 0x14
	NSData *_dataPayload;	// 24 = 0x18
	CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;	// 28 = 0x1c
	BOOL isMigrate;	// 32 = 0x20
@private
	BOOL _isMigrate;	// 33 = 0x21
}
@property(readonly, assign) void *calItem;	// G=0x3023b325; @synthesize=_calItem
@property(readonly, assign) NSArray *childrenOrder;
@property(retain) NSNumber *clientID;	// G=0x3023b2dd; S=0x3023b2f1; @synthesize=_clientID
@property(readonly, assign) NSData *dataPayload;	// G=0x3023aff9; @synthesize=_dataPayload
@property(readonly, assign) NSString *filename;	// G=0x30239c81; 
@property(assign) BOOL isMigrate;	// G=0x3023b36d; S=0x3023b37d; @synthesize=_isMigrate
@property(assign) void *localItem;	// G=0x3023b139; S=0x3023b149; converted property
@property(retain) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;	// G=0x3023b335; S=0x3023b349; @synthesize=_scheduleChanges
@property(retain) NSString *scheduleTag;	// G=0x30239d1d; S=0x30239d71; 
@property(retain) NSURL *serverID;	// G=0x3023b2a5; S=0x3023b2b9; @synthesize=_serverID
@property(readonly, assign) BOOL statusChanged;	// G=0x3023b119; 
@property(readonly, assign) NSString *syncKey;	// G=0x3023b315; @synthesize=_syncKey
@property(readonly, assign) NSString *uniqueIdentifier;	// G=0x30239c3d; 
- (id)initWithCalRecord:(void *)calRecord;	// 0x302399c9
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x30239939
- (BOOL)_addOrModifyEvent:(id)event inICSCalendar:(id)icscalendar withContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge inMobileCalendar:(id)mobileCalendar;	// 0x30239de9
- (BOOL)_addOrModifyTask:(id)task inICSCalendar:(id)icscalendar withContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge inMobileCalendar:(id)mobileCalendar;	// 0x3023a61d
- (void)_fixUpCalendarForServer:(id)server;	// 0x3023ad21
// declared property getter: - (void *)calItem;	// 0x3023b325
// declared property getter: - (id)clientID;	// 0x3023b2dd
// declared property getter: - (id)dataPayload;	// 0x3023aff9
- (void)dealloc;	// 0x30239b71
- (BOOL)deleteFromContainer:(void *)container;	// 0x3023b24d
- (id)description;	// 0x30239ab5
// declared property getter: - (id)filename;	// 0x30239c81
// declared property getter: - (BOOL)isMigrate;	// 0x3023b36d
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x3023b1c5
// converted property getter: - (void *)localItem;	// 0x3023b139
- (BOOL)saveAfterMapWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3023ad1d
- (BOOL)saveServerIDToExistingItem;	// 0x3023b249
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x3023ac9d
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account calendar:(id)calendar;	// 0x3023a86d
// declared property getter: - (id)scheduleChanges;	// 0x3023b335
// declared property getter: - (id)scheduleTag;	// 0x30239d1d
// declared property getter: - (id)serverID;	// 0x3023b2a5
// declared property setter: - (void)setClientID:(id)anId;	// 0x3023b2f1
// declared property setter: - (void)setIsMigrate:(BOOL)migrate;	// 0x3023b37d
// converted property setter: - (void)setLocalItem:(void *)item;	// 0x3023b149
// declared property setter: - (void)setScheduleChanges:(id)changes;	// 0x3023b349
// declared property setter: - (void)setScheduleTag:(id)tag;	// 0x30239d71
// declared property setter: - (void)setServerID:(id)anId;	// 0x3023b2b9
// declared property getter: - (BOOL)statusChanged;	// 0x3023b119
// declared property getter: - (id)syncKey;	// 0x3023b315
// declared property getter: - (id)uniqueIdentifier;	// 0x30239c3d
@end

