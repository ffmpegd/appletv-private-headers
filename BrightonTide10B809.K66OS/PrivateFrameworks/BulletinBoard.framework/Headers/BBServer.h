/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "XPCProxyTarget.h"
#import "ABPredicateDelegate.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray, ABFavoritesList, NSDate, NSMutableDictionary, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_source, BBPushDataProviderFactory;

@interface BBServer : NSObject <ABPredicateDelegate, XPCProxyTarget> {
	NSMutableSet *_observers;	// 4 = 0x4
	NSMutableSet *_listObservers;	// 8 = 0x8
	NSMutableSet *_modalAlertObservers;	// 12 = 0xc
	NSMutableSet *_bannerObservers;	// 16 = 0x10
	NSMutableSet *_lockscreenObservers;	// 20 = 0x14
	NSMutableSet *_soundObservers;	// 24 = 0x18
	NSMutableSet *_settingsObservers;	// 28 = 0x1c
	NSMutableSet *_settingsGateways;	// 32 = 0x20
	NSMutableArray *_sortedSectionIDs;	// 36 = 0x24
	NSMutableArray *_sortedPreviousSectionIDs;	// 40 = 0x28
	unsigned _sectionOrderRule;	// 44 = 0x2c
	NSMutableDictionary *_sectionInfoByID;	// 48 = 0x30
	NSMutableDictionary *_sectionParametersByID;	// 52 = 0x34
	NSMutableDictionary *_sectionSortDescriptorsByID;	// 56 = 0x38
	NSMutableDictionary *_bulletinsByID;	// 60 = 0x3c
	NSMutableDictionary *_bulletinIDsBySectionID;	// 64 = 0x40
	NSMutableDictionary *_transactionsByObserver;	// 68 = 0x44
	NSMutableDictionary *_listBulletinIDsBySectionID;	// 72 = 0x48
	NSArray *_behaviorOverrides;	// 76 = 0x4c
	int _behaviorOverrideStatus;	// 80 = 0x50
	NSDate *_behaviorOverrideStatusEffectiveTime;	// 84 = 0x54
	NSObject<OS_dispatch_source> *_behaviorOverridesTimer;	// 88 = 0x58
	NSDate *_behaviorOverridesWakeTime;	// 92 = 0x5c
	unsigned _activeBehaviorOverrides;	// 96 = 0x60
	NSMutableArray *_behaviorOverrideStatusChangeClients;	// 100 = 0x64
	NSMutableArray *_activeBehaviorOverrideTypesChangeSettingsGateways;	// 104 = 0x68
	NSMutableArray *_activeBehaviorOverrideTypesChangeClients;	// 108 = 0x6c
	unsigned _privilegedSenderTypes;	// 112 = 0x70
	int _privilegedAddressBookGroupRecordID;	// 116 = 0x74
	NSString *_privilegedAddressBookGroupName;	// 120 = 0x78
	NSMutableDictionary *_lastContactTimeForSender;	// 124 = 0x7c
	NSMutableArray *_privilegedSenderFilteringStateChangeClients;	// 128 = 0x80
	BOOL _privilegedSenderFilteringNecessary;	// 132 = 0x84
	NSMutableArray *_interruptingBulletinIDs;	// 136 = 0x88
	NSMutableArray *_expiringBulletinIDs;	// 140 = 0x8c
	NSObject<OS_dispatch_source> *_expirationTimer;	// 144 = 0x90
	NSMutableArray *_eventBasedExpiringBulletinIDs;	// 148 = 0x94
	NSDate *_nextScheduledExpirationTimerFireDate;	// 152 = 0x98
	NSMutableDictionary *_dataProvidersBySection;	// 156 = 0x9c
	NSMutableSet *_pushDataProviders;	// 160 = 0xa0
	NSMutableDictionary *_clearedSections;	// 164 = 0xa4
	id<BBPushDataProviderFactory> _pushDataProviderFactory;	// 168 = 0xa8
	NSMutableDictionary *_dataProviderFactoriesBySection;	// 172 = 0xac
	int _demo_lockscreen_token;	// 176 = 0xb0
	unsigned _currentSystemState;	// 180 = 0xb4
	NSMutableDictionary *_bulletinRequestsByID;	// 184 = 0xb8
	void *_addressBook;	// 188 = 0xbc
	ABFavoritesList *_favoritesList;	// 192 = 0xc0
	BOOL _entryFound;	// 196 = 0xc4
}
+ (void)initialize;	// 0x3355e735
- (id)init;	// 0x3355e739
- (unsigned)_activeBehaviorOverrideTypesConsideringSystemState:(BOOL)state;	// 0x33564fb1
- (void)_addBulletin:(id)bulletin;	// 0x33560bc5
- (void)_addDataProvider:(id)provider forFactory:(id)factory sortNowAndNotifyObservers:(BOOL)observers;	// 0x33569495
- (void)_addDataProvider:(id)provider sortSectionsNow:(BOOL)now;	// 0x33569209
- (void)_addInterruptingBulletin:(id)bulletin;	// 0x3356374d
- (void)_addObserverWithConnection:(id)connection;	// 0x3355f8f1
- (void)_addPushDataProvider:(id)provider sortNowAndNotifyObservers:(BOOL)observers;	// 0x335695b9
- (void)_addSettingsGatewayWithConnection:(id)connection;	// 0x3355fdc1
- (void)_addSortedSectionID:(id)anId sortNow:(BOOL)now;	// 0x335690ed
- (void *)_addressBook;	// 0x33576e91
- (id)_addressBookPredicateForDestinationID:(id)destinationID;	// 0x335770e9
- (unsigned)_adjustedBehaviorOverrideTypes:(unsigned)types basedOnSystemState:(unsigned)state;	// 0x33564f81
- (id)_allBulletinsForSectionID:(id)sectionID;	// 0x33561901
- (void)_assignIDToBulletinRequest:(id)bulletinRequest;	// 0x3357404d
- (void)_assignIDToBulletinRequest:(id)bulletinRequest checkAgainstBulletins:(id)bulletins;	// 0x335740a9
- (void)_behaviorOverrideStatusChanged;	// 0x33565311
- (void)_behaviorOverridesChanged;	// 0x33565055
- (id)_behaviorOverridesPath;	// 0x3356aaa5
- (id)_bulletinIDsInSortedArray:(id)sortedArray withDateForKey:(id)key beforeCutoff:(id)cutoff;	// 0x33562f4d
- (id)_bulletinRequestsForIDs:(id)ids;	// 0x33573f31
- (id)_bulletinsForIDs:(id)ids;	// 0x335617b9
- (BOOL)_checkPersistentSenderStatusForDestinationID:(id)destinationID;	// 0x33577301
- (void)_checkPrivilegedSenderFilteringState;	// 0x3356542d
- (void)_clearBehaviorOverridesTimer;	// 0x33565865
- (void)_clearBulletinIDIfPossible:(id)possible rescheduleExpirationTimer:(BOOL)timer;	// 0x33562415
- (void)_clearBulletins:(id)bulletins forSectionID:(id)sectionID;	// 0x33560e91
- (void)_clearExpirationTimer;	// 0x33562a8d
- (void)_clearSection:(id)section;	// 0x33560fbd
- (id)_clearedInfoForSectionID:(id)sectionID;	// 0x33567af1
- (id)_clearedSectionsPath;	// 0x3356a905
- (id)_configureSectionInfoForDataProvider:(id)dataProvider;	// 0x33568ba1
- (id)_copyDefaultEnabledWeeAppIDs;	// 0x3356a225
- (id)_currentTransactionForObserver:(id)observer bulletinID:(id)anId;	// 0x335615f9
- (id)_dataDirectoryPath;	// 0x3356a879
- (id)_defaultSectionInfoForSection:(id)section;	// 0x3356b579
- (id)_defaultSectionOrder;	// 0x33561931
- (BOOL)_doesAddressBookContainDestinationID:(id)anId;	// 0x3357753d
- (BOOL)_doesFavoritesListContainDestinationID:(id)anId;	// 0x33577449
- (BOOL)_doesPrivilegedAddressBookGroupContainDestinationID:(id)anId;	// 0x335772d5
- (id)_effectiveSectionInfoForSectionInfo:(id)sectionInfo;	// 0x33562251
- (id)_enabledSectionIDsForDataProvider:(id)dataProvider;	// 0x33567255
- (void)_ensureDataDirectoryExists;	// 0x3356a895
- (void)_expireBulletins;	// 0x33563361
- (void)_expireBulletinsAndInterruptionsAndRescheduleTimerIfNecessary;	// 0x33562da9
- (void)_expireBulletinsDueToSystemEvent:(unsigned)systemEvent;	// 0x33563151
- (void)_expireInterruptions;	// 0x335639a1
- (id)_favoritesList;	// 0x3357708d
- (unsigned)_feedsForBulletin:(id)bulletin destinations:(int)destinations;	// 0x33561141
- (unsigned)_feedsForBulletin:(id)bulletin destinations:(int)destinations alwaysToLockScreen:(BOOL)lockScreen;	// 0x33561165
- (unsigned)_filtersForSectionID:(id)sectionID;	// 0x33567aed
- (void)_handleSignificantTimeChange;	// 0x33562a41
- (void)_handleSystemSleep;	// 0x33562a01
- (void)_handleSystemStateConnection:(id)connection;	// 0x335603c5
- (void)_handleSystemWake;	// 0x33562a11
- (void)_handleUtilitiesConnection:(id)connection;	// 0x335601a5
- (unsigned)_incrementedTransactionIDForObserver:(id)observer bulletinID:(id)anId;	// 0x335616f1
- (unsigned)_indexForNewDate:(id)newDate inBulletinIDArray:(id)bulletinIDArray sortedAscendingByDateForKey:(id)key;	// 0x335630a1
- (id)_interruptingBulletinIDsForFeeds:(unsigned)feeds;	// 0x33563bb1
- (BOOL)_isDestinationID:(id)anId inAddressBookGroupWithRecordID:(int)recordID;	// 0x33577161
- (id)_listBulletinsForSectionID:(id)sectionID;	// 0x335618d1
- (void)_loadAllDataProviderPluginBundles;	// 0x33567b65
- (void)_loadAllWeeAppSections;	// 0x3356a2bd
- (void)_loadBehaviorOverrides;	// 0x3356b059
- (void)_loadClearedSections;	// 0x3356a939
- (void)_loadDataProviderPluginBundle:(id)bundle;	// 0x33568135
- (void)_loadDataProvidersAndSettings;	// 0x33566e5d
- (void)_loadSavedSectionInfo;	// 0x3356acb5
- (id)_migrateSavedSectionOrder:(id)order;	// 0x33566b51
- (void)_modifyBulletin:(id)bulletin;	// 0x33560ca1
- (id)_nextExpireBulletinsDate;	// 0x33562c99
- (id)_nextExpireInterruptionsDate;	// 0x33562d11
- (void)_noteSystemStateChanged;	// 0x33564fa1
- (void)_noteUserEnabledPushDeliveryForDataProvider:(id)dataProvider;	// 0x335696a9
- (id)_observersForFeeds:(unsigned)feeds;	// 0x33560601
- (void)_publishBulletinRequest:(id)request forDataProvider:(id)dataProvider forDestinations:(int)destinations;	// 0x33567a89
- (void)_publishBulletinRequest:(id)request forDataProvider:(id)dataProvider forDestinations:(int)destinations alwaysToLockScreen:(BOOL)lockScreen;	// 0x33567aad
- (void)_publishBulletinsForAllDataProviders;	// 0x335670c1
- (void)_readSavedSectionOrder:(id *)order andRule:(unsigned *)rule;	// 0x3356aad9
- (id)_removalsForListSection:(id)listSection addition:(id)addition keepAddition:(BOOL *)addition3;	// 0x335741c5
- (void)_removeBulletin:(id)bulletin;	// 0x33560e7d
- (void)_removeBulletin:(id)bulletin rescheduleTimerIfAffected:(BOOL)affected;	// 0x33560ce1
- (void)_removeDataProvider:(id)provider forFactory:(id)factory;	// 0x33569955
- (void)_removeObserver:(id)observer;	// 0x3355fb89
- (void)_removePushDataProvider:(id)provider;	// 0x33569935
- (void)_removeSection:(id)section;	// 0x33560ff1
- (void)_removeSettingsGateway:(id)gateway;	// 0x3355ffbd
- (void)_scheduleExpirationForBulletin:(id)bulletin;	// 0x335635a5
- (void)_scheduleTimerForDate:(id)date;	// 0x33562ad9
- (id)_sectionInfoArray:(BOOL)array;	// 0x33562315
- (id)_sectionInfoForSectionID:(id)sectionID effective:(BOOL)effective;	// 0x335622cd
- (id)_sectionInfoPath;	// 0x3356aa71
- (id)_sectionOrderPath;	// 0x3356aa3d
- (void)_sendAddBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x335606e9
- (void)_sendModifyBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x33560875
- (void)_sendRemoveBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x33560a1d
- (void)_sendUpdateSectionInfo:(id)info;	// 0x3356003d
- (void)_sendUpdateSectionOrder;	// 0x33560561
- (void)_sendUpdateSectionOrderRule;	// 0x3356059d
- (void)_setBehaviorOverridesTimer;	// 0x33564c5d
- (void)_setClearedInfo:(id)info forSectionID:(id)sectionID;	// 0x33567b11
- (void)_setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x33562699
- (void)_sortSectionIDs:(id)ids usingGuideArray:(id)array;	// 0x33561c91
- (void)_sortSectionIDsUsingDefaultOrder;	// 0x335619b9
- (void)_sortSectionIDsUsingGuideArray:(id)array;	// 0x33562209
- (void)_updateBehaviorOverrides;	// 0x33565585
- (void)_updateBulletinsForDataProvider:(id)dataProvider;	// 0x33567791
- (void)_updateBulletinsForDataProvider:(id)dataProvider enabledSectionIDs:(id)ids;	// 0x33567421
- (void)_updateBulletinsForDataProviderIfSectionIsEnabled:(id)dataProviderIfSectionIsEnabled;	// 0x335673d1
- (void)_updatePushSettingsForPushDataProvider:(id)pushDataProvider;	// 0x335697a5
- (void)_updateSectionInfo:(id)info withDefaultInfo:(id)defaultInfo;	// 0x33568a35
- (void)_updateSectionInfo:(id)info withSectionDisplayProperties:(id)sectionDisplayProperties;	// 0x3356899d
- (void)_updateSectionInfoForDataProvider:(id)dataProvider;	// 0x335679f1
- (void)_updateSectionParametersForDataProvider:(id)dataProvider;	// 0x335677c5
- (id)_updatesForObserver:(id)observer bulletinIDs:(id)ids;	// 0x335645c9
- (BOOL)_verifyBulletinRequest:(id)request forDataProvider:(id)dataProvider;	// 0x33567199
- (void)_weeApp:(id)app setHiddenFromUser:(BOOL)user;	// 0x3356a779
- (BOOL)_weeAppIsHiddenFromUser:(id)user callback:(id)callback;	// 0x3356a715
- (void)_writeBehaviorOverrides;	// 0x3356b31d
- (void)_writeClearedSections;	// 0x3356a9c1
- (void)_writeSectionInfo;	// 0x3356aef9
- (void)_writeSectionOrder;	// 0x3356ae01
- (id)allBulletinIDsForSectionID:(id)sectionID;	// 0x3355f885
- (void)dealloc;	// 0x3355ed15
- (void)deliverResponse:(id)response;	// 0x335732d5
- (void)demo_lockscreen:(unsigned long long)lockscreen;	// 0x3356b5fd
- (void)getAttachmentAspectRatioForBulletinID:(id)bulletinID withHandler:(id)handler;	// 0x33563eb1
- (void)getAttachmentPNGDataForBulletinID:(id)bulletinID sizeConstraints:(id)constraints withHandler:(id)handler;	// 0x33563dbd
- (void)getSectionOrderRuleWithHandler:(id)handler;	// 0x33563cfd
- (void)getSectionParametersForSectionID:(id)sectionID withHandler:(id)handler;	// 0x33563d79
- (void)getShouldPresentNotificationFromSenderWithDestinationID:(id)get handler:(id)handler;	// 0x33565d31
- (void)getSortDescriptorsForSectionID:(id)sectionID withHandler:(id)handler;	// 0x33563d45
- (BOOL)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned)activeBehaviorOverrides privilegedSenderTypes:(unsigned)types;	// 0x33577721
- (unsigned)listBulletinCapForSectionID:(id)sectionID;	// 0x3355f8a5
- (id)listBulletinIDsForSectionID:(id)sectionID;	// 0x3355f865
- (void)noteChangeOfState:(unsigned)state newValue:(BOOL)value;	// 0x335779c5
- (void)noteFinishedWithBulletinID:(id)bulletinID;	// 0x335732b5
- (void)noteOccurrenceOfEvent:(unsigned)event;	// 0x33577a05
- (void)observer:(id)observer clearBulletinIDs:(id)ids inSection:(id)section;	// 0x33564455
- (void)observer:(id)observer clearSection:(id)section;	// 0x33564409
- (void)observer:(id)observer finishedWithBulletinID:(id)bulletinID transactionID:(unsigned)anId;	// 0x33564269
- (void)observer:(id)observer getActiveAlertBehaviorOverridesWithHandler:(id)handler;	// 0x335648d1
- (void)observer:(id)observer getRecentUnacknowledgedBulletinsForFeeds:(unsigned)feeds withHandler:(id)handler;	// 0x3356482d
- (void)observer:(id)observer getSectionInfoWithHandler:(id)handler;	// 0x3356459d
- (void)observer:(id)observer handleResponse:(id)response;	// 0x335640e9
- (void)observer:(id)observer requestListBulletinsForSectionID:(id)sectionID;	// 0x33564745
- (void)observer:(id)observer setObserverFeed:(unsigned)feed;	// 0x33563fa9
- (BOOL)predicateShouldContinue:(id)predicate;	// 0x33577735
- (BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void *)record;	// 0x33577739
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3355f039
- (void)publishBulletin:(id)bulletin destinations:(int)destinations alwaysToLockScreen:(BOOL)lockScreen;	// 0x3355f5e1
- (void)publishBulletinRequest:(id)request destinations:(int)destinations;	// 0x3357333d
- (void)publishBulletinRequest:(id)request destinations:(int)destinations alwaysToLockScreen:(BOOL)lockScreen;	// 0x33573361
- (void)removeBulletinID:(id)anId fromListSection:(id)listSection;	// 0x3355f7f9
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(BOOL)enabled forClient:(id)client;	// 0x33565e7d
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(BOOL)enabled forClient:(id)client;	// 0x33565da9
- (void)settingsGateway:(id)gateway getBehaviorOverridesEnabledWithHandler:(id)handler;	// 0x33564969
- (void)settingsGateway:(id)gateway getBehaviorOverridesWithHandler:(id)handler;	// 0x33564949
- (void)settingsGateway:(id)gateway getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)handler;	// 0x335649f9
- (void)settingsGateway:(id)gateway getPrivilegedSenderTypesWithHandler:(id)handler;	// 0x335649b1
- (void)settingsGateway:(id)gateway getSectionInfoWithHandler:(id)handler;	// 0x3356491d
- (void)settingsGateway:(id)gateway setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)enabled;	// 0x33565c59
- (void)settingsGateway:(id)gateway setBehaviorOverrideStatus:(int)status;	// 0x335659a1
- (void)settingsGateway:(id)gateway setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)enabled;	// 0x33565b89
- (void)settingsGateway:(id)gateway setBehaviorOverrides:(id)overrides;	// 0x335658fd
- (void)settingsGateway:(id)gateway setOrderedSectionIDs:(id)ids;	// 0x33564ac1
- (void)settingsGateway:(id)gateway setPrivilegedSenderAddressBookGroupRecordID:(int)anId name:(id)name;	// 0x33565add
- (void)settingsGateway:(id)gateway setPrivilegedSenderTypes:(unsigned)types;	// 0x33565a65
- (void)settingsGateway:(id)gateway setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x33564b09
- (void)settingsGateway:(id)gateway setSectionOrderRule:(unsigned)rule;	// 0x33564a75
- (BOOL)shouldPresentNotificationFromSenderWithDestinationID:(id)destinationID;	// 0x335775f9
- (id)sortDescriptorsForSectionID:(id)sectionID;	// 0x3355f8d1
- (void)updateListSection:(id)section withBulletinRequests:(id)bulletinRequests;	// 0x335739a1
- (void)withdrawBulletinID:(id)anId;	// 0x3355f7b5
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)publisherBulletinID forSectionID:(id)sectionID;	// 0x33573e01
- (void)withdrawBulletinRequestsWithRecordID:(id)recordID forSectionID:(id)sectionID;	// 0x33573cd1
@end
