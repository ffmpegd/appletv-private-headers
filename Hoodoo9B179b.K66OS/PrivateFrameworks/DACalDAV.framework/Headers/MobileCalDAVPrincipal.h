/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import "CalDAVPrincipal.h"
#import <NSObject.h> // Unknown library

@class NSString, MobileCalDAVAccount, NSSet, NSURL, NSMutableDictionary, NSDictionary, NSNumber, CalDAVRefreshContext, NSDateComponents;
@protocol CalDAVAccount, CoreDAVTaskManager;

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CalDAVPrincipal> {
	NSString *_uid;	// 4 = 0x4
	MobileCalDAVAccount *_account;	// 8 = 0x8
	NSSet *_calendarUserAddresses;	// 12 = 0xc
	NSMutableDictionary *_calendarUserAddressesPerCalendar;	// 16 = 0x10
	NSURL *_preferredCalendarUserAddress;	// 20 = 0x14
	NSString *_fullName;	// 24 = 0x18
	NSURL *_calendarHomeURL;	// 28 = 0x1c
	NSURL *_principalURL;	// 32 = 0x20
	NSURL *_defaultCalendarURL;	// 36 = 0x24
	NSURL *_notificationCollectionURL;	// 40 = 0x28
	NSString *_notificationCollectionCTag;	// 44 = 0x2c
	NSURL *_inboxURL;	// 48 = 0x30
	NSString *_inboxCTag;	// 52 = 0x34
	NSURL *_outboxURL;	// 56 = 0x38
	NSURL *_dropBoxURL;	// 60 = 0x3c
	NSString *_notificationURLString;	// 64 = 0x40
	NSDictionary *_pushTransports;	// 68 = 0x44
	NSString *_calendarHomePushKey;	// 72 = 0x48
	NSString *_XMPPServer;	// 76 = 0x4c
	NSNumber *_quotaFreeBytes;	// 80 = 0x50
	BOOL _isDelegate;	// 84 = 0x54
	BOOL _isWritable;	// 85 = 0x55
	BOOL _isEnabled;	// 86 = 0x56
	BOOL _isExpandPropertyReportSupported;	// 87 = 0x57
	BOOL _supportsFreebusy;	// 88 = 0x58
	BOOL _supportsPush;	// 89 = 0x59
	BOOL _shouldRefreshPrincipalSearchProperties;	// 90 = 0x5a
	BOOL _shouldUpdatePushDelegate;	// 91 = 0x5b
	BOOL _isDirty;	// 92 = 0x5c
	BOOL _calendarsAreDirty;	// 93 = 0x5d
	int _calendarChangeIndex;	// 96 = 0x60
}
@property(readonly, assign) NSString *APSEnv;	// G=0x309064c5; 
@property(readonly, assign) NSURL *APSSubscriptionURL;	// G=0x30906445; 
@property(readonly, assign) NSString *APSTopic;	// G=0x30906401; 
@property(retain) NSString *XMPPServer;	// G=0x309053f5; S=0x30905405; 
@property(readonly, assign) id<CalDAVAccount> account;	// G=0x30904869; 
@property(retain) NSString *calendarHomePushKey;	// G=0x30905371; S=0x30905381; 
@property(retain) NSURL *calendarHomeURL;	// G=0x30904c9d; S=0x30904cbd; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x30904b71; S=0x30904b81; 
@property(readonly, assign) NSSet *calendars;	// G=0x30905b1d; 
@property(assign) BOOL calendarsAreDirty;	// G=0x30906335; S=0x30906279; @synthesize=_calendarsAreDirty
@property(retain) NSURL *defaultCalendarURL;	// G=0x30904ded; S=0x30904e0d; 
@property(readonly, assign) NSSet *deletedCalendarURLs;	// G=0x30905b3d; 
@property(retain) NSURL *dropBoxURL;	// G=0x30905195; S=0x309051b5; 
@property(readonly, assign) NSDateComponents *eventFilterEndDate;	// G=0x30905959; 
@property(readonly, assign) NSDateComponents *eventFilterStartDate;	// G=0x309058fd; 
@property(retain) NSString *fullName;	// G=0x30904c19; S=0x30904c29; 
@property(retain) NSString *inboxCTag;	// G=0x30905069; S=0x30905079; 
@property(retain) NSURL *inboxURL;	// G=0x30904fc1; S=0x30904fe1; 
@property(assign) BOOL isDelegate;	// G=0x309054e9; S=0x309054f9; 
@property(assign) BOOL isDirty;	// G=0x30906fed; S=0x30906ffd; @synthesize=_isDirty
@property(assign) BOOL isEnabled;	// G=0x30905579; S=0x30905589; 
@property(readonly, assign) BOOL isEnabledForEvents;	// G=0x309055e5; 
@property(readonly, assign) BOOL isEnabledForTodos;	// G=0x30905641; 
@property(assign) BOOL isExpandPropertyReportSupported;	// G=0x30905a6d; S=0x30905a7d; 
@property(readonly, assign) BOOL isMergeSync;	// G=0x309055c1; 
@property(assign) BOOL isWritable;	// G=0x30905531; S=0x30905541; 
@property(retain) NSString *notificationCollectionCTag;	// G=0x30904f3d; S=0x30904f4d; 
@property(retain) NSURL *notificationCollectionURL;	// G=0x30904e95; S=0x30904eb5; 
@property(retain) NSString *notificationURLString;	// G=0x3090523d; S=0x3090524d; 
@property(retain) NSURL *outboxURL;	// G=0x309050ed; S=0x3090510d; 
@property(readonly, assign) NSURL *preferredCalendarUserAddress;	// G=0x30906835; 
@property(retain) NSURL *principalURL;	// G=0x30904d45; S=0x30904d65; 
@property(readonly, assign) NSSet *pushKeys;	// G=0x309065b9; 
@property(retain) NSDictionary *pushTransports;	// G=0x309052d1; S=0x309052e1; 
@property(retain) NSNumber *quotaFreeBytes;	// G=0x30905479; S=0x30905489; 
@property(readonly, assign) CalDAVRefreshContext *refreshContext;	// G=0x30905afd; 
@property(assign) BOOL shouldRefreshPrincipalSearchProperties;	// G=0x30906fad; S=0x30906fbd; @synthesize=_shouldRefreshPrincipalSearchProperties
@property(assign) BOOL shouldUpdatePushDelegate;	// G=0x30906fcd; S=0x30906fdd; @synthesize=_shouldUpdatePushDelegate
@property(readonly, assign) BOOL supportsExtendedCalendarQuery;	// G=0x3090569d; 
@property(assign) BOOL supportsFreebusy;	// G=0x30905ab5; S=0x30905ac5; 
@property(assign) BOOL supportsPush;	// G=0x3090700d; S=0x3090701d; @synthesize=_supportsPush
@property(readonly, assign) id<CoreDAVTaskManager> taskManager;	// G=0x30906aa5; 
@property(readonly, assign) NSDateComponents *todoFilterEndDate;	// G=0x30905a29; 
@property(readonly, assign) NSDateComponents *todoFilterStartDate;	// G=0x309059cd; 
@property(readonly, assign) NSString *uid;	// G=0x30906f9d; @synthesize=_uid
+ (id)_preferredCalendarUserAddressFromAddresses:(id)addresses;	// 0x309066b9
+ (BOOL)compareAddressURL:(id)url localString:(id)string;	// 0x30903019
- (id)init;	// 0x309031f1
- (id)initWithConfiguration:(id)configuration account:(id)account;	// 0x309033c9
// declared property getter: - (id)APSEnv;	// 0x309064c5
// declared property getter: - (id)APSSubscriptionURL;	// 0x30906445
// declared property getter: - (id)APSTopic;	// 0x30906401
// declared property getter: - (id)XMPPServer;	// 0x309053f5
- (id)_addUsernameIfNeeded:(id)needed;	// 0x30904809
- (id)_sharedSyncEndDate;	// 0x309056d1
- (id)_startDateFromDaysToSync:(int)sync;	// 0x309057d1
- (BOOL)_userAddressSet:(id)set isEqualToSet:(id)set2;	// 0x30904889
// declared property getter: - (id)account;	// 0x30904869
- (id)accountID;	// 0x30906c55
- (id)additionalHeaderValues;	// 0x30906c7d
// declared property getter: - (id)calendarHomePushKey;	// 0x30905371
// declared property getter: - (id)calendarHomeURL;	// 0x30904c9d
- (id)calendarOfType:(int)type atURL:(id)url withOptions:(id)options;	// 0x30905fa5
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)url;	// 0x309069c1
// declared property getter: - (id)calendarUserAddresses;	// 0x30904b71
- (id)calendarUserAddressesForCalendar:(id)calendar;	// 0x30906199
// declared property getter: - (id)calendars;	// 0x30905b1d
// declared property getter: - (BOOL)calendarsAreDirty;	// 0x30906335
- (BOOL)clearCalendarChanges;	// 0x30905f51
- (id)configuration;	// 0x30903e91
- (void)dealloc;	// 0x30903205
// declared property getter: - (id)defaultCalendarURL;	// 0x30904ded
- (id)defaultEventCalendarTitle;	// 0x30906151
- (id)defaultTodoCalendarTitle;	// 0x3090615d
// declared property getter: - (id)deletedCalendarURLs;	// 0x30905b3d
// declared property getter: - (id)dropBoxURL;	// 0x30905195
// declared property getter: - (id)eventFilterEndDate;	// 0x30905959
// declared property getter: - (id)eventFilterStartDate;	// 0x309058fd
// declared property getter: - (id)fullName;	// 0x30904c19
- (BOOL)handleCertificateError:(id)error;	// 0x30906dbd
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x30906d95
- (BOOL)hasCalendarUserAddress:(id)address;	// 0x309068b1
- (id)host;	// 0x30906ae5
- (id)identityPersist;	// 0x30906c35
// declared property getter: - (id)inboxCTag;	// 0x30905069
// declared property getter: - (id)inboxURL;	// 0x30904fc1
// declared property getter: - (BOOL)isDelegate;	// 0x309054e9
// declared property getter: - (BOOL)isDirty;	// 0x30906fed
// declared property getter: - (BOOL)isEnabled;	// 0x30905579
// declared property getter: - (BOOL)isEnabledForEvents;	// 0x309055e5
// declared property getter: - (BOOL)isEnabledForTodos;	// 0x30905641
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x30905a6d
// declared property getter: - (BOOL)isMergeSync;	// 0x309055c1
// declared property getter: - (BOOL)isWritable;	// 0x30905531
- (void)noteFailedNetworkRequest;	// 0x30906eed
- (void)noteFailedProtocolRequest;	// 0x30906f25
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x30906b25
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)numDownloadedElements;	// 0x30906eb1
- (void)noteTimeSpentInNetworking:(double)networking;	// 0x30906f5d
// declared property getter: - (id)notificationCollectionCTag;	// 0x30904f3d
// declared property getter: - (id)notificationCollectionURL;	// 0x30904e95
// declared property getter: - (id)notificationURLString;	// 0x3090523d
// declared property getter: - (id)outboxURL;	// 0x309050ed
- (id)password;	// 0x30906c15
- (int)port;	// 0x30906b05
// declared property getter: - (id)preferredCalendarUserAddress;	// 0x30906835
- (void)prepareCalendarsForSyncWithCompletionBlock:(id)completionBlock;	// 0x30905c55
// declared property getter: - (id)principalURL;	// 0x30904d45
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x30906cf5
// declared property getter: - (id)pushKeys;	// 0x309065b9
// declared property getter: - (id)pushTransports;	// 0x309052d1
// declared property getter: - (id)quotaFreeBytes;	// 0x30905479
// declared property getter: - (id)refreshContext;	// 0x30905afd
- (void)removeCalendar:(id)calendar;	// 0x30906169
- (id)scheme;	// 0x30906ac5
- (id)serverComplianceClasses;	// 0x30906c75
- (id)serverRoot;	// 0x30906bf1
- (void)setAccount:(id)account;	// 0x30904879
// declared property setter: - (void)setCalendarHomePushKey:(id)key;	// 0x30905381
// declared property setter: - (void)setCalendarHomeURL:(id)url;	// 0x30904cbd
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x30904b81
- (void)setCalendarUserAddresses:(id)addresses forCalendar:(id)calendar;	// 0x309061d5
// declared property setter: - (void)setCalendarsAreDirty:(BOOL)dirty;	// 0x30906279
// declared property setter: - (void)setDefaultCalendarURL:(id)url;	// 0x30904e0d
// declared property setter: - (void)setDropBoxURL:(id)url;	// 0x309051b5
// declared property setter: - (void)setFullName:(id)name;	// 0x30904c29
// declared property setter: - (void)setInboxCTag:(id)tag;	// 0x30905079
// declared property setter: - (void)setInboxURL:(id)url;	// 0x30904fe1
// declared property setter: - (void)setIsDelegate:(BOOL)delegate;	// 0x309054f9
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x30906ffd
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x30905589
// declared property setter: - (void)setIsExpandPropertyReportSupported:(BOOL)supported;	// 0x30905a7d
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x30905541
// declared property setter: - (void)setNotificationCollectionCTag:(id)tag;	// 0x30904f4d
// declared property setter: - (void)setNotificationCollectionURL:(id)url;	// 0x30904eb5
// declared property setter: - (void)setNotificationURLString:(id)string;	// 0x3090524d
// declared property setter: - (void)setOutboxURL:(id)url;	// 0x3090510d
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x30904d65
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x309052e1
// declared property setter: - (void)setQuotaFreeBytes:(id)bytes;	// 0x30905489
// declared property setter: - (void)setShouldRefreshPrincipalSearchProperties:(BOOL)refreshPrincipalSearchProperties;	// 0x30906fbd
// declared property setter: - (void)setShouldUpdatePushDelegate:(BOOL)updatePushDelegate;	// 0x30906fdd
// declared property setter: - (void)setSupportsFreebusy:(BOOL)freebusy;	// 0x30905ac5
// declared property setter: - (void)setSupportsPush:(BOOL)push;	// 0x3090701d
// declared property setter: - (void)setXMPPServer:(id)server;	// 0x30905405
- (BOOL)shouldCompressRequests;	// 0x30906e2d
- (BOOL)shouldFailAllTasks;	// 0x30906dc1
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x30906dc5
// declared property getter: - (BOOL)shouldRefreshPrincipalSearchProperties;	// 0x30906fad
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x30906dc9
// declared property getter: - (BOOL)shouldUpdatePushDelegate;	// 0x30906fcd
- (BOOL)shouldUseOpportunisticSockets;	// 0x30906e8d
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x3090569d
// declared property getter: - (BOOL)supportsFreebusy;	// 0x30905ab5
// declared property getter: - (BOOL)supportsPush;	// 0x3090700d
// declared property getter: - (id)taskManager;	// 0x30906aa5
// declared property getter: - (id)todoFilterEndDate;	// 0x30905a29
// declared property getter: - (id)todoFilterStartDate;	// 0x309059cd
// declared property getter: - (id)uid;	// 0x30906f9d
- (id)user;	// 0x30906bf5
- (id)userAgentHeader;	// 0x30906c79
@end

