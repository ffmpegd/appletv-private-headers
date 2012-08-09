/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CoreDAVLeafDataPayload.h"
#import <NSObject.h> // Unknown library
#import "DADataElement.h"
#import "CalDAVCalendarItemProtocol.h"

@class NSArray, NSData, CalDAVCalendarServerScheduleChangesItem, NSString, CalDAVUpdateOwnerItem, NSURL, NSNumber, NSMutableDictionary;

@interface DACalDAViCalItem : NSObject <CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol> {
	NSURL *_serverID;	// 4 = 0x4
	NSNumber *_clientID;	// 8 = 0x8
	NSString *_syncKey;	// 12 = 0xc
	NSString *_scheduleTag;	// 16 = 0x10
	void *_calItem;	// 20 = 0x14
	NSData *_dataPayload;	// 24 = 0x18
	CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;	// 28 = 0x1c
	CalDAVUpdateOwnerItem *_createdBy;	// 32 = 0x20
	CalDAVUpdateOwnerItem *_updatedBy;	// 36 = 0x24
	NSMutableDictionary *_originatingChangeItems;	// 40 = 0x28
	BOOL isMigrate;	// 44 = 0x2c
	BOOL _isMigrate;	// 45 = 0x2d
}
@property(readonly, assign) void *calItem;	// G=0x35f5c9cd; @synthesize=_calItem
@property(readonly, assign) NSArray *childrenOrder;
@property(retain) NSNumber *clientID;	// G=0x35f5c995; S=0x35f5c9a9; @synthesize=_clientID
@property(retain) CalDAVUpdateOwnerItem *createdBy;	// G=0x35f5ca35; S=0x35f5ca49; @synthesize=_createdBy
@property(readonly, assign) NSData *dataPayload;	// G=0x35f5c611; @synthesize=_dataPayload
@property(readonly, assign) NSString *filename;	// G=0x35f59489; 
@property(assign) BOOL isMigrate;	// G=0x35f5ca05; S=0x35f5ca1d; @synthesize=_isMigrate
@property(assign) void *localItem;	// G=0x35f5c755; S=0x35f5c765; converted property
@property(copy) NSMutableDictionary *originatingChangeItems;	// G=0x35f59635; S=0x35f595f1; 
@property(retain) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;	// G=0x35f5c9e1; S=0x35f5c9f5; @synthesize=_scheduleChanges
@property(retain) NSString *scheduleTag;	// G=0x35f59529; S=0x35f59579; 
@property(retain) NSURL *serverID;	// G=0x35f5c971; S=0x35f5c985; @synthesize=_serverID
@property(readonly, assign) BOOL statusChanged;	// G=0x35f5c735; 
@property(readonly, assign) NSString *syncKey;	// G=0x35f5c9b9; @synthesize=_syncKey
@property(readonly, assign) NSString *uniqueIdentifier;	// G=0x35f59449; 
@property(retain) CalDAVUpdateOwnerItem *updatedBy;	// G=0x35f5ca59; S=0x35f5ca6d; @synthesize=_updatedBy
+ (BOOL)_checkOccurrencesForEvent:(id)event fromDate:(id)date toDate:(id)date3;	// 0x35f5aa25
+ (BOOL)_shouldApplyEvent:(id)event instanceWithStartDate:(id)startDate startRange:(id)range endRange:(id)range4;	// 0x35f5a6d1
+ (BOOL)_shouldApplyEventFromSyncReport:(id)syncReport startDate:(id)date endDate:(id)date3;	// 0x35f5af5d
+ (BOOL)_shouldApplyTodoFromSyncReport:(id)syncReport startDate:(id)date endDate:(id)date3;	// 0x35f5b191
- (id)initWithCalRecord:(void *)calRecord inContainer:(id)container;	// 0x35f59109
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x35f59079
- (BOOL)_addOrModifyEvent:(id)event inICSCalendar:(id)icscalendar withContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge inMobileCalendar:(id)mobileCalendar;	// 0x35f59b01
- (BOOL)_addOrModifyTask:(id)task inICSCalendar:(id)icscalendar withContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge inMobileCalendar:(id)mobileCalendar;	// 0x35f5a419
- (void)_fixUpCalendarForServer:(id)server;	// 0x35f5c341
- (void)_setModificationInfoOnItem:(void *)item;	// 0x35f597f5
- (void)addChangeOfType:(id)type forChangeRowid:(int)changeRowid;	// 0x35f59725
// declared property getter: - (void *)calItem;	// 0x35f5c9cd
// declared property getter: - (id)clientID;	// 0x35f5c995
// declared property getter: - (id)createdBy;	// 0x35f5ca35
// declared property getter: - (id)dataPayload;	// 0x35f5c611
- (void)dealloc;	// 0x35f59341
- (BOOL)deleteFromContainer:(void *)container;	// 0x35f5c87d
- (id)description;	// 0x35f591f1
// declared property getter: - (id)filename;	// 0x35f59489
// declared property getter: - (BOOL)isMigrate;	// 0x35f5ca05
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x35f5c7f5
// converted property getter: - (void *)localItem;	// 0x35f5c755
// declared property getter: - (id)originatingChangeItems;	// 0x35f59635
- (BOOL)saveServerIDToExistingItem;	// 0x35f5c879
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x35f5c2c1
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account calendar:(id)calendar;	// 0x35f5b81d
// declared property getter: - (id)scheduleChanges;	// 0x35f5c9e1
// declared property getter: - (id)scheduleTag;	// 0x35f59529
// declared property getter: - (id)serverID;	// 0x35f5c971
// declared property setter: - (void)setClientID:(id)anId;	// 0x35f5c9a9
// declared property setter: - (void)setCreatedBy:(id)by;	// 0x35f5ca49
// declared property setter: - (void)setIsMigrate:(BOOL)migrate;	// 0x35f5ca1d
// converted property setter: - (void)setLocalItem:(void *)item;	// 0x35f5c765
// declared property setter: - (void)setOriginatingChangeItems:(id)items;	// 0x35f595f1
// declared property setter: - (void)setScheduleChanges:(id)changes;	// 0x35f5c9f5
// declared property setter: - (void)setScheduleTag:(id)tag;	// 0x35f59579
// declared property setter: - (void)setServerID:(id)anId;	// 0x35f5c985
// declared property setter: - (void)setUpdatedBy:(id)by;	// 0x35f5ca6d
// declared property getter: - (BOOL)statusChanged;	// 0x35f5c735
// declared property getter: - (id)syncKey;	// 0x35f5c9b9
// declared property getter: - (id)uniqueIdentifier;	// 0x35f59449
// declared property getter: - (id)updatedBy;	// 0x35f5ca59
@end
