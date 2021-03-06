/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "CalDAVCalendar.h"
#import "DACalDAV-Structs.h"

@class NSTimeZone, NSArray, NSString, NSMutableArray, MobileCalDAVPrincipal, NSSet, NSURL, NSMutableDictionary, NSDictionary, NSMutableSet;
@protocol CalDAVPrincipal;

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar> {
	MobileCalDAVPrincipal *_principal;	// 4 = 0x4
	NSString *_calGUID;	// 8 = 0x8
	NSURL *_calendarURL;	// 12 = 0xc
	BOOL _isDirty;	// 16 = 0x10
	BOOL _isTaskContainer;	// 17 = 0x11
	BOOL _isEventContainer;	// 18 = 0x12
	BOOL _isSubscribed;	// 19 = 0x13
	BOOL _isScheduleInbox;	// 20 = 0x14
	BOOL _isScheduleOutbox;	// 21 = 0x15
	BOOL _isNotification;	// 22 = 0x16
	BOOL _isEditable;	// 23 = 0x17
	BOOL _isRenameable;	// 24 = 0x18
	BOOL _isEnabled;	// 25 = 0x19
	BOOL _isAffectingAvailability;	// 26 = 0x1a
	BOOL _canBePublished;	// 27 = 0x1b
	NSString *_pushKey;	// 28 = 0x1c
	NSURL *_publishURL;	// 32 = 0x20
	NSString *_syncToken;	// 36 = 0x24
	NSMutableDictionary *_uniqueIdentifierToLocalUIDMap;	// 40 = 0x28
	NSMutableDictionary *_URLToLocalUIDMap;	// 44 = 0x2c
	NSMutableDictionary *_URLToEtagMap;	// 48 = 0x30
	void *_calCalendar;	// 52 = 0x34
	int _mostRecentEventChangeIndex;	// 56 = 0x38
	int _mostRecentTaskChangeIndex;	// 60 = 0x3c
	int _mostRecentAlarmChangeIndex;	// 64 = 0x40
	int _mostRecentAttendeeChangeIndex;	// 68 = 0x44
	int _mostRecentAttachmentChangeIndex;	// 72 = 0x48
	int _mostRecentRecurChangeIndex;	// 76 = 0x4c
	int _mostRecentEventActionChangeIndex;	// 80 = 0x50
	NSArray *_syncActions;	// 84 = 0x54
	NSDictionary *_hrefsToModDeleteActions;	// 88 = 0x58
	NSDictionary *_uuidsToAddActions;	// 92 = 0x5c
	NSMutableSet *_eventUIDsNeedingAttendeeFixup;	// 96 = 0x60
	NSMutableArray *_outstandingTaskGroups;	// 100 = 0x64
	id _syncActionCompletionBlock;	// 104 = 0x68
@private
	BOOL _wasModifiedLocally;	// 108 = 0x6c
}
@property(readonly, assign) NSString *accountID;	// G=0x33063865; 
@property(readonly, assign) NSSet *allEventURLs;	// G=0x33062735; 
@property(retain) NSDictionary *bulkRequests;	// G=0x33062095; S=0x330620c9; 
@property(retain) NSURL *calendarURL;	// G=0x33061a1d; S=0x33061a2d; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x33062351; S=0x33062371; 
@property(assign) BOOL canBePublished;	// G=0x33068265; S=0x33068275; @synthesize=_canBePublished
@property(retain) NSString *color;	// G=0x33061fc1; S=0x33062015; 
@property(retain) NSString *ctag;	// G=0x33062649; S=0x330626c1; 
@property(readonly, assign) NSString *displayColor;	// G=0x33063841; 
@property(retain) NSString *guid;	// G=0x33061935; S=0x33061945; 
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;	// G=0x330669c9; 
@property(assign) BOOL isAffectingAvailability;	// G=0x33068245; S=0x33068255; @synthesize=_isAffectingAvailability
@property(assign) BOOL isDirty;	// G=0x33068225; S=0x33068235; @synthesize=_isDirty
@property(assign) BOOL isEditable;	// G=0x330625b9; S=0x330625e5; 
@property(assign) BOOL isEnabled;	// G=0x33068205; S=0x33068215; @synthesize=_isEnabled
@property(assign) BOOL isEventContainer;	// G=0x33061cc5; S=0x33061ce9; 
@property(readonly, assign) BOOL isHidden;	// G=0x3306381d; 
@property(assign) BOOL isNotification;	// G=0x330681c5; S=0x330681d5; @synthesize=_isNotification
@property(assign) BOOL isRenameable;	// G=0x330681e5; S=0x330681f5; @synthesize=_isRenameable
@property(assign) BOOL isScheduleInbox;	// G=0x33061d45; S=0x33061d49; 
@property(assign) BOOL isScheduleOutbox;	// G=0x330681a5; S=0x330681b5; @synthesize=_isScheduleOutbox
@property(assign) BOOL isSubscribed;	// G=0x33068185; S=0x33068195; @synthesize=_isSubscribed
@property(assign) BOOL isTaskContainer;	// G=0x33061c45; S=0x33061c69; 
@property(retain) NSString *notes;	// G=0x33061e91; S=0x33061ec5; 
@property(assign) int order;	// G=0x33062499; S=0x330624c5; 
@property(retain) NSURL *owner;	// G=0x330621c5; S=0x33062221; 
@property(retain) NSString *ownerDisplayName;	// G=0x330622a5; S=0x330622dd; 
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x33068105; @synthesize=_principal
@property(retain) NSURL *publishURL;	// G=0x3306814d; S=0x33068161; @synthesize=_publishURL
@property(retain) NSString *pushKey;	// G=0x33068115; S=0x33068129; @synthesize=_pushKey
@property(assign) int sharingStatus;	// G=0x33062519; S=0x33062555; 
@property(readonly, assign) NSArray *syncActions;	// G=0x330669a9; 
@property(retain) NSString *syncToken;	// G=0x33068285; S=0x33068299; @synthesize=_syncToken
@property(retain) NSTimeZone *timeZone;	// G=0x33062479; S=0x33062495; 
@property(retain) NSString *title;	// G=0x33061d4d; S=0x33061d85; 
@property(readonly, assign) NSDictionary *uuidsToAddActions;	// G=0x330669b9; 
@property(assign) BOOL wasModifiedLocally;	// G=0x330682bd; S=0x330682cd; @synthesize=_wasModifiedLocally
+ (int)addedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x33064121
+ (BOOL)clearCalendarChangesToIndex:(int)index inPrincipal:(id)principal;	// 0x33064a45
+ (int)deletedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x33064839
+ (int)modifiedCalendars:(id *)calendars inPrincipal:(id)principal;	// 0x33064521
- (void *)initCalCalendarWithTitle:(id)title;	// 0x3306389d
- (id)initNotificationCollectionWithPrincipal:(id)principal;	// 0x3306162d
- (id)initWithCalendarURL:(id)calendarURL calCalendar:(void *)calendar principal:(id)principal;	// 0x33061571
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal;	// 0x33061609
- (id)initWithCalendarURL:(id)calendarURL principal:(id)principal title:(id)title;	// 0x3306130d
- (int)_addAddedItemsOfType:(int)type toArray:(id)array;	// 0x33065091
- (void)_addCalendarItemWithRowID:(int)rowID toArrayIfNeeded:(id)arrayIfNeeded;	// 0x33064f11
- (id)_calExternalRep;	// 0x330640bd
- (void *)_copyCalItemWithExternalID:(id)externalID;	// 0x33062bf5
- (void *)_copyCalItemWithUniqueIdentifier:(id)uniqueIdentifier inCalendar:(void *)calendar orStore:(void *)store;	// 0x33062b65
- (id)_copyDeletedEventActions;	// 0x33065e01
- (id)_createActionsForItems:(id)items withAction:(int)action alreadySentItems:(id)items3 shouldSave:(BOOL *)save;	// 0x330663f5
- (void)_dropCalStoreContext;	// 0x33064059
- (void)_fixUpAttendees;	// 0x330669d9
- (int)_gatherDeletedChanges:(/*function-pointer*/ void *)changes inDictionary:(id)dictionary;	// 0x330659bd
- (int)_gatherModifiedEventsInArray:(id)array;	// 0x3306548d
- (int)_gatherModifiedItemsFromCalChangesCall:(/*function-pointer*/ void *)calChangesCall inArray:(id)array;	// 0x3306536d
- (int)_gatherModifiedTasksInArray:(id)array;	// 0x330656e9
- (id)_itemPropertyDictForItemAtIndex:(int)index withChangedIDs:(CFArrayRef)changedIDs withExternalIDs:(CFArrayRef)externalIDs uniqueIdentifiers:(CFArrayRef)identifiers significantAttributeChanges:(CFArrayRef)changes oldCalendarIDs:(CFArrayRef)ids;	// 0x33064ac9
- (BOOL)_removeCalendarItemWithURL:(id)url;	// 0x33063579
- (void)_setSupportsEvents:(BOOL)events supportsTodos:(BOOL)todos;	// 0x33061c05
// declared property getter: - (id)accountID;	// 0x33063865
// declared property getter: - (id)allEventURLs;	// 0x33062735
- (Class)appSpecificCalendarItemClass;	// 0x330680e9
// declared property getter: - (id)bulkRequests;	// 0x33062095
// declared property getter: - (id)calendarURL;	// 0x33061a1d
// declared property getter: - (id)calendarUserAddresses;	// 0x33062351
// declared property getter: - (BOOL)canBePublished;	// 0x33068265
- (void)clearEventChanges;	// 0x3306606d
// declared property getter: - (id)color;	// 0x33061fc1
- (id)copyAddedItems;	// 0x33065249
- (id)copyAllItems;	// 0x33064cb1
- (id)copyDeletedItems;	// 0x33065ffd
- (id)copyModifiedItems;	// 0x330658a5
// declared property getter: - (id)ctag;	// 0x33062649
- (void)dealloc;	// 0x33061689
- (void)deleteCalendar;	// 0x33061869
- (BOOL)deleteResourcesAtURLs:(id)urls;	// 0x3306370d
- (id)description;	// 0x330617d9
// declared property getter: - (id)displayColor;	// 0x33063841
- (id)etagsForEventURLs:(id)eventURLs;	// 0x33062939
- (void)flushCaches;	// 0x33067ff5
- (void *)getCalCalendar;	// 0x33063d4d
// declared property getter: - (id)guid;	// 0x33061935
- (BOOL)hasEvents;	// 0x330637e9
// declared property getter: - (id)hrefsToModDeleteActions;	// 0x330669c9
// declared property getter: - (BOOL)isAffectingAvailability;	// 0x33068245
// declared property getter: - (BOOL)isDirty;	// 0x33068225
// declared property getter: - (BOOL)isEditable;	// 0x330625b9
// declared property getter: - (BOOL)isEnabled;	// 0x33068205
// declared property getter: - (BOOL)isEventContainer;	// 0x33061cc5
// declared property getter: - (BOOL)isHidden;	// 0x3306381d
// declared property getter: - (BOOL)isNotification;	// 0x330681c5
// declared property getter: - (BOOL)isRenameable;	// 0x330681e5
// declared property getter: - (BOOL)isScheduleInbox;	// 0x33061d45
// declared property getter: - (BOOL)isScheduleOutbox;	// 0x330681a5
// declared property getter: - (BOOL)isSubscribed;	// 0x33068185
// declared property getter: - (BOOL)isTaskContainer;	// 0x33061c45
- (int)localUIDForUniqueIdentifier:(id)uniqueIdentifier;	// 0x33062d21
// declared property getter: - (id)notes;	// 0x33061e91
// declared property getter: - (int)order;	// 0x33062499
// declared property getter: - (id)owner;	// 0x330621c5
// declared property getter: - (id)ownerDisplayName;	// 0x330622a5
- (void)prepareMergeSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x330679cd
- (void)prepareSyncActionsWithCompletionBlock:(id)completionBlock;	// 0x33066de1
// declared property getter: - (id)principal;	// 0x33068105
// declared property getter: - (id)publishURL;	// 0x3306814d
// declared property getter: - (id)pushKey;	// 0x33068115
- (id)removeInvitationsForItemWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3306305d
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x330620c9
// declared property setter: - (void)setCalendarURL:(id)url;	// 0x33061a2d
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x33062371
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x33068275
// declared property setter: - (void)setColor:(id)color;	// 0x33062015
// declared property setter: - (void)setCtag:(id)ctag;	// 0x330626c1
- (BOOL)setEtag:(id)etag forEventAtURL:(id)url;	// 0x33062ebd
// declared property setter: - (void)setGuid:(id)guid;	// 0x33061945
// declared property setter: - (void)setIsAffectingAvailability:(BOOL)availability;	// 0x33068255
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x33068235
// declared property setter: - (void)setIsEditable:(BOOL)editable;	// 0x330625e5
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x33068215
// declared property setter: - (void)setIsEventContainer:(BOOL)container;	// 0x33061ce9
// declared property setter: - (void)setIsNotification:(BOOL)notification;	// 0x330681d5
// declared property setter: - (void)setIsRenameable:(BOOL)renameable;	// 0x330681f5
// declared property setter: - (void)setIsScheduleInbox:(BOOL)inbox;	// 0x33061d49
// declared property setter: - (void)setIsScheduleOutbox:(BOOL)outbox;	// 0x330681b5
// declared property setter: - (void)setIsSubscribed:(BOOL)subscribed;	// 0x33068195
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x33061c69
// declared property setter: - (void)setNotes:(id)notes;	// 0x33061ec5
// declared property setter: - (void)setOrder:(int)order;	// 0x330624c5
// declared property setter: - (void)setOwner:(id)owner;	// 0x33062221
// declared property setter: - (void)setOwnerDisplayName:(id)name;	// 0x330622dd
// declared property setter: - (void)setPublishURL:(id)url;	// 0x33068161
// declared property setter: - (void)setPushKey:(id)key;	// 0x33068129
- (BOOL)setScheduleTag:(id)tag forEventAtURL:(id)url;	// 0x33062fa9
// declared property setter: - (void)setSharingStatus:(int)status;	// 0x33062555
// declared property setter: - (void)setSyncToken:(id)token;	// 0x33068299
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x33062495
// declared property setter: - (void)setTitle:(id)title;	// 0x33061d85
- (BOOL)setURL:(id)url forResourceWithUUID:(id)uuid;	// 0x33062d61
- (void)setUniqueIdentifier:(id)identifier forLocalUID:(int)localUID;	// 0x33062cb5
// declared property setter: - (void)setWasModifiedLocally:(BOOL)locally;	// 0x330682cd
// declared property getter: - (int)sharingStatus;	// 0x33062519
// declared property getter: - (id)syncActions;	// 0x330669a9
- (void)syncDidFinishWithError:(id)sync;	// 0x330680d9
// declared property getter: - (id)syncToken;	// 0x33068285
// declared property getter: - (id)timeZone;	// 0x33062479
// declared property getter: - (id)title;	// 0x33061d4d
- (BOOL)updateResourcesFromServer:(id)server;	// 0x3306321d
// declared property getter: - (id)uuidsToAddActions;	// 0x330669b9
// declared property getter: - (BOOL)wasModifiedLocally;	// 0x330682bd
@end

