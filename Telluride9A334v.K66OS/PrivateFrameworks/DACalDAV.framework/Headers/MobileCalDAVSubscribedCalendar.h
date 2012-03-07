/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVCalendar.h"
#import "CalDAVSubscribedCalendar.h"

@class NSTimeZone, NSArray, NSString, NSSet, NSURL, NSMutableDictionary, NSDictionary;
@protocol CalDAVPrincipal;

@interface MobileCalDAVSubscribedCalendar : MobileCalDAVCalendar <CalDAVSubscribedCalendar> {
	NSMutableDictionary *_properties;	// 112 = 0x70
}
@property(readonly, assign) NSSet *allEventURLs;
@property(retain) NSDictionary *bulkRequests;
@property(retain) NSURL *calendarURL;
@property(retain) NSSet *calendarUserAddresses;
@property(assign) BOOL canBePublished;
@property(retain) NSString *color;	// G=0x35b5f749; S=0x35b5f871; 
@property(retain) NSString *ctag;
@property(retain) NSString *guid;
@property(assign) BOOL hasAlarmFilter;	// G=0x35b5fa6d; S=0x35b5faad; 
@property(assign) BOOL hasAttachmentFilter;	// G=0x35b5fb31; S=0x35b5fb71; 
@property(assign) BOOL hasTaskFilter;	// G=0x35b5fbf5; S=0x35b5fc35; 
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;
@property(assign) BOOL isAffectingAvailability;
@property(assign) BOOL isEditable;
@property(assign) BOOL isEnabled;
@property(assign) BOOL isEventContainer;
@property(assign) BOOL isNotification;
@property(assign) BOOL isRenameable;
@property(assign) BOOL isScheduleInbox;
@property(assign) BOOL isScheduleOutbox;
@property(assign) BOOL isSubscribed;	// G=0x35b5f745; 
@property(assign) BOOL isTaskContainer;	// G=0x35b5f839; S=0x35b5f83d; 
@property(retain) NSString *notes;
@property(assign) int order;	// S=0x35b5fd89; 
@property(retain) NSURL *owner;
@property(retain) NSString *ownerDisplayName;
@property(readonly, assign) id<CalDAVPrincipal> principal;
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x35b5f70d; converted property
@property(retain) NSURL *publishURL;
@property(retain) NSString *pushKey;
@property(assign) double refreshInterval;	// G=0x35b5fcb9; S=0x35b5fcf9; 
@property(assign) int sharingStatus;
@property(retain) NSURL *subscriptionURL;	// G=0x35b5f989; S=0x35b5f9dd; 
@property(readonly, assign) NSArray *syncActions;
@property(retain) NSString *syncToken;
@property(retain) NSTimeZone *timeZone;
@property(retain) NSString *title;	// G=0x35b5f8cd; S=0x35b5f8f5; 
@property(readonly, assign) NSDictionary *uuidsToAddActions;
@property(readonly, assign) BOOL wasModifiedLocally;
- (id)initWithCalendarURL:(id)calendarURL properties:(id)properties principal:(id)principal;	// 0x35b5f5c9
// declared property getter: - (id)color;	// 0x35b5f749
- (void)dealloc;	// 0x35b5f6c1
// declared property getter: - (BOOL)hasAlarmFilter;	// 0x35b5fa6d
// declared property getter: - (BOOL)hasAttachmentFilter;	// 0x35b5fb31
// declared property getter: - (BOOL)hasTaskFilter;	// 0x35b5fbf5
// declared property getter: - (BOOL)isSubscribed;	// 0x35b5f745
// declared property getter: - (BOOL)isTaskContainer;	// 0x35b5f839
// converted property getter: - (id)properties;	// 0x35b5f70d
// declared property getter: - (double)refreshInterval;	// 0x35b5fcb9
// declared property setter: - (void)setColor:(id)color;	// 0x35b5f871
// declared property setter: - (void)setHasAlarmFilter:(BOOL)filter;	// 0x35b5faad
// declared property setter: - (void)setHasAttachmentFilter:(BOOL)filter;	// 0x35b5fb71
// declared property setter: - (void)setHasTaskFilter:(BOOL)filter;	// 0x35b5fc35
// declared property setter: - (void)setIsTaskContainer:(BOOL)container;	// 0x35b5f83d
// declared property setter: - (void)setOrder:(int)order;	// 0x35b5fd89
// declared property setter: - (void)setRefreshInterval:(double)interval;	// 0x35b5fcf9
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x35b5f9dd
// declared property setter: - (void)setTitle:(id)title;	// 0x35b5f8f5
// declared property getter: - (id)subscriptionURL;	// 0x35b5f989
// declared property getter: - (id)title;	// 0x35b5f8cd
@end

