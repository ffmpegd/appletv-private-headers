/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "XPCProxyTarget.h"
#import "BBDataProviderManagerDelegate.h"
#import "BBSyncServiceDelegate.h"
#import "ABPredicateDelegate.h"
#import </libobjc.A.h>

@class NSDate, NSMutableDictionary, NSMutableArray, NSMutableSet, ABFavoritesListManager, BBDataProviderManager, BBSyncService, NSString, NSArray, NSSet;
@protocol OS_dispatch_source;

@interface BBServer : NSObject <ABPredicateDelegate, BBDataProviderManagerDelegate, XPCProxyTarget, BBSyncServiceDelegate> {
	NSMutableDictionary *_bulletinRequestsByID;	// 4 = 0x4
	NSMutableDictionary *_sectionInfoByID;	// 8 = 0x8
	NSSet *_restrictedSectionIDs;	// 12 = 0xc
	unsigned _currentSystemState;	// 16 = 0x10
	int _privilegedAddressBookGroupRecordID;	// 20 = 0x14
	NSMutableDictionary *_lastContactTimeForSender;	// 24 = 0x18
	unsigned _activeBehaviorOverrides;	// 28 = 0x1c
	unsigned _privilegedSenderTypes;	// 32 = 0x20
	BOOL _isRunning;	// 36 = 0x24
	BBDataProviderManager *_dataProviderManager;	// 40 = 0x28
	NSMutableSet *_observers;	// 44 = 0x2c
	NSMutableSet *_noticesObservers;	// 48 = 0x30
	NSMutableSet *_modalAlertObservers;	// 52 = 0x34
	NSMutableSet *_bannerObservers;	// 56 = 0x38
	NSMutableSet *_lockscreenObservers;	// 60 = 0x3c
	NSMutableSet *_soundObservers;	// 64 = 0x40
	NSMutableSet *_todayObservers;	// 68 = 0x44
	NSMutableSet *_futureObservers;	// 72 = 0x48
	NSMutableSet *_settingsObservers;	// 76 = 0x4c
	NSMutableSet *_settingsGateways;	// 80 = 0x50
	NSMutableSet *_suspendedConnections;	// 84 = 0x54
	NSMutableDictionary *_activeSectionIDsByCategory;	// 88 = 0x58
	NSMutableDictionary *_sortedSectionIDsByCategory;	// 92 = 0x5c
	int _sectionOrderRule;	// 96 = 0x60
	NSMutableDictionary *_bulletinsByID;	// 100 = 0x64
	NSMutableDictionary *_bulletinIDsBySectionID;	// 104 = 0x68
	NSMutableDictionary *_transactionsByObserver;	// 108 = 0x6c
	NSMutableDictionary *_noticeBulletinIDsBySectionID;	// 112 = 0x70
	NSMutableDictionary *_todayBulletinIDsBySectionID;	// 116 = 0x74
	NSMutableDictionary *_futureBulletinIDsBySectionID;	// 120 = 0x78
	NSArray *_behaviorOverrides;	// 124 = 0x7c
	int _behaviorOverrideStatus;	// 128 = 0x80
	NSDate *_behaviorOverrideStatusEffectiveTime;	// 132 = 0x84
	NSObject<OS_dispatch_source> *_behaviorOverridesTimer;	// 136 = 0x88
	NSDate *_behaviorOverridesWakeTime;	// 140 = 0x8c
	NSMutableArray *_behaviorOverrideStatusChangeClients;	// 144 = 0x90
	NSMutableArray *_activeBehaviorOverrideTypesChangeSettingsGateways;	// 148 = 0x94
	NSMutableArray *_activeBehaviorOverrideTypesChangeClients;	// 152 = 0x98
	BOOL _behaviorOverridesEffectiveWhileUnlocked;	// 156 = 0x9c
	NSString *_privilegedAddressBookGroupName;	// 160 = 0xa0
	NSMutableArray *_privilegedSenderFilteringStateChangeClients;	// 164 = 0xa4
	BOOL _privilegedSenderFilteringNecessary;	// 168 = 0xa8
	NSMutableArray *_expiringBulletinIDs;	// 172 = 0xac
	NSObject<OS_dispatch_source> *_expirationTimer;	// 176 = 0xb0
	NSMutableArray *_eventBasedExpiringBulletinIDs;	// 180 = 0xb4
	NSDate *_nextScheduledExpirationTimerFireDate;	// 184 = 0xb8
	NSMutableDictionary *_clearedSections;	// 188 = 0xbc
	NSMutableDictionary *_dataProviderFactoriesBySection;	// 192 = 0xc0
	int _serverIsRunningToken;	// 196 = 0xc4
	int _demo_lockscreen_token;	// 200 = 0xc8
	BBSyncService *_syncService;	// 204 = 0xcc
	void *_addressBook;	// 208 = 0xd0
	ABFavoritesListManager *_favoritesListManager;	// 212 = 0xd4
	BOOL _entryFound;	// 216 = 0xd8
}
@property(readonly, assign) BOOL isRunning;	// G=0x302260f1; converted property
+ (void)initialize;	// 0x302255e9
- (id)init;	// 0x302255ed
- (unsigned)_activeBehaviorOverrideTypesConsideringSystemState:(BOOL)state;	// 0x3022cc65
- (id)_activeSectionIDsForCategory:(int)category;	// 0x302299a9
- (void)_addActiveSectionID:(id)anId;	// 0x30230a99
- (void)_addActiveSectionID:(id)anId toCategory:(int)category;	// 0x30230a21
- (void)_addBulletin:(id)bulletin;	// 0x30228a31
- (void)_addDataProvider:(id)provider forFactory:(id)factory;	// 0x30230c99
- (void)_addObserverWithConnection:(id)connection;	// 0x30226fc5
- (void)_addSectionID:(id)anId toSortedSectionIDsForCategory:(int)category;	// 0x302309cd
- (void)_addSettingsGatewayWithConnection:(id)connection;	// 0x3022757d
- (void *)_addressBook;	// 0x3023fae9
- (id)_addressBookPredicateForDestinationID:(id)destinationID;	// 0x3023fd51
- (unsigned)_adjustedBehaviorOverrideTypes:(unsigned)types basedOnSystemState:(unsigned)state;	// 0x3022cc25
- (id)_allBulletinsForSectionID:(id)sectionID;	// 0x302298bd
- (id)_applicableSectionInfosForBulletin:(id)bulletin inSection:(id)section;	// 0x3022914d
- (void)_assignIDToBulletinRequest:(id)bulletinRequest;	// 0x3023c245
- (void)_assignIDToBulletinRequest:(id)bulletinRequest checkAgainstBulletins:(id)bulletins;	// 0x3023c2a1
- (unsigned)_behaviorOverrideState;	// 0x3022cd09
- (void)_behaviorOverrideStatusChanged;	// 0x3022d069
- (void)_behaviorOverridesChanged;	// 0x3022cfd1
- (id)_behaviorOverridesPath;	// 0x3023110d
- (id)_bulletinIDsInSortedArray:(id)sortedArray withDateForKey:(id)key beforeCutoff:(id)cutoff;	// 0x3022b051
- (id)_bulletinRequestsForIDs:(id)ids;	// 0x3023c129
- (id)_bulletinsForIDs:(id)ids;	// 0x302297a5
- (id)_bulletinsForSectionID:(id)sectionID inFeeds:(unsigned)feeds;	// 0x30230ac1
- (BOOL)_checkPersistentSenderStatusForDestinationID:(id)destinationID notificationType:(int)type;	// 0x3023ff71
- (void)_checkPrivilegedSenderFilteringState;	// 0x3022d185
- (void)_clearBehaviorOverridesTimer;	// 0x3022d5c1
- (void)_clearBulletinIDIfPossible:(id)possible rescheduleExpirationTimer:(BOOL)timer;	// 0x3022a4e5
- (void)_clearBulletinIDs:(id)ids AndAllOtherBulletins:(BOOL)bulletins forSectionID:(id)sectionID shouldSync:(BOOL)sync;	// 0x30228ca1
- (void)_clearBulletinIDs:(id)ids forSectionID:(id)sectionID shouldSync:(BOOL)sync;	// 0x30228e9d
- (void)_clearExpirationTimer;	// 0x3022ac9d
- (void)_clearSection:(id)section;	// 0x30228ee9
- (id)_clearedInfoForSectionID:(id)sectionID;	// 0x30230531
- (id)_clearedSectionsPath;	// 0x30230f6d
- (id)_currentTransactionForObserver:(id)observer bulletinID:(id)anId;	// 0x302295e5
- (id)_dataDirectoryPath;	// 0x30230ee1
- (id)_defaultSectionOrderForCategory:(int)category topLevelCollection:(id)collection;	// 0x30229975
- (id)_defaultSectionOrders;	// 0x302298ed
- (BOOL)_didNotificationCenterSettingsChangeWithSectionInfo:(id)sectionInfo replacingSectionInfo:(id)info;	// 0x3022a7b5
- (BOOL)_doesAddressBookContainDestinationID:(id)anId;	// 0x30240431
- (BOOL)_doesFavoritesListContainDestinationID:(id)anId;	// 0x302400d9
- (BOOL)_doesPrivilegedAddressBookGroupContainDestinationID:(id)anId;	// 0x3023ff45
- (id)_effectiveSectionInfoForSectionInfo:(id)sectionInfo;	// 0x3022a315
- (id)_enabledSectionIDsForDataProvider:(id)dataProvider;	// 0x3022f9ed
- (void)_ensureDataDirectoryExists;	// 0x30230efd
- (void)_expireBulletins;	// 0x3022b455
- (void)_expireBulletinsAndRescheduleTimerIfNecessary;	// 0x3022af29
- (void)_expireBulletinsDueToSystemEvent:(unsigned)systemEvent;	// 0x3022b259
- (id)_favoritesListManager;	// 0x3023fcf5
- (unsigned)_feedsForBulletin:(id)bulletin destinations:(unsigned)destinations;	// 0x30229129
- (unsigned)_feedsForBulletin:(id)bulletin destinations:(unsigned)destinations alwaysToLockScreen:(BOOL)lockScreen;	// 0x302292b1
- (unsigned)_filtersForSectionID:(id)sectionID;	// 0x3023052d
- (void)_handleServerConduitConnection:(id)connection;	// 0x30227e95
- (void)_handleSignificantTimeChange;	// 0x3022ac51
- (void)_handleSystemSleep;	// 0x3022ac11
- (void)_handleSystemStateConnection:(id)connection;	// 0x30227cf9
- (void)_handleSystemWake;	// 0x3022ac21
- (void)_handleUtilitiesConnection:(id)connection;	// 0x30227ad5
- (unsigned)_incrementedTransactionIDForObserver:(id)observer bulletinID:(id)anId;	// 0x302296dd
- (unsigned)_indexForNewDate:(id)newDate inBulletinIDArray:(id)bulletinIDArray sortedAscendingByDateForKey:(id)key;	// 0x3022b1a5
- (BOOL)_isDestinationID:(id)anId inAddressBookGroupWithRecordID:(int)recordID;	// 0x3023fdc9
- (BOOL)_isSectionIDRestricted:(id)restricted;	// 0x3023c519
- (void)_loadBehaviorOverrides;	// 0x30231739
- (void)_loadClearedSections;	// 0x30230fa1
- (void)_loadDataProvidersAndSettings;	// 0x3022f58d
- (void)_loadSavedSectionInfo;	// 0x3023139d
- (void)_loadSavedSectionOrderAndRule;	// 0x30231141
- (id)_mapForFeed:(unsigned)feed;	// 0x30226c75
- (void)_migrateLoadedData;	// 0x3022ee65
- (void)_migrateSectionOrder;	// 0x3022f189
- (void)_modifyBulletin:(id)bulletin;	// 0x30228b0d
- (id)_nextExpireBulletinsDate;	// 0x3022aeb1
- (void)_noteSystemStateChanged;	// 0x3022cc55
- (id)_observersForCategory:(int)category;	// 0x302280cd
- (id)_observersForFeeds:(unsigned)feeds;	// 0x302282a1
- (void)_publishBulletinRequest:(id)request forSectionID:(id)sectionID forDestinations:(unsigned)destinations;	// 0x30230485
- (void)_publishBulletinRequest:(id)request forSectionID:(id)sectionID forDestinations:(unsigned)destinations alwaysToLockScreen:(BOOL)lockScreen;	// 0x302304a9
- (void)_publishBulletinsForAllDataProviders;	// 0x3022f841
- (void)_reloadReloadSectionInfoForSectionID:(id)sectionID;	// 0x30230329
- (void)_reloadSectionParametersForSectionID:(id)sectionID;	// 0x302301a9
- (id)_removalsForNoticesSection:(id)noticesSection addition:(id)addition keepAddition:(BOOL *)addition3;	// 0x3023c3bd
- (void)_removeActiveSectionID:(id)anId;	// 0x30230c85
- (void)_removeActiveSectionID:(id)anId fromCategory:(int)category;	// 0x30230b79
- (void)_removeBulletin:(id)bulletin rescheduleTimerIfAffected:(BOOL)affected shouldSync:(BOOL)sync;	// 0x30228b4d
- (void)_removeBulletin:(id)bulletin shouldSync:(BOOL)sync;	// 0x30228c81
- (void)_removeDataProvider:(id)provider forFactory:(id)factory;	// 0x30230cbd
- (void)_removeObserver:(id)observer;	// 0x302272d1
- (void)_removeSection:(id)section;	// 0x30228f3d
- (void)_removeSettingsGateway:(id)gateway;	// 0x302277b1
- (void)_resumeAllSuspendedConnections;	// 0x30226ef5
- (void)_saveUpdatedClearedInfo:(id)info forSectionID:(id)sectionID;	// 0x302305a5
- (void)_saveUpdatedSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x3023069d
- (void)_scheduleExpirationForBulletin:(id)bulletin;	// 0x3022b67d
- (void)_scheduleTimerForDate:(id)date;	// 0x3022ace9
- (id)_sectionIDsToMigrate;	// 0x3022edcd
- (id)_sectionInfoArrayForCategory:(int)category effective:(BOOL)effective;	// 0x3022a3d9
- (id)_sectionInfoForSectionID:(id)sectionID effective:(BOOL)effective;	// 0x3022a391
- (id)_sectionInfoPath;	// 0x302310d9
- (id)_sectionOrderPath;	// 0x302310a5
- (void)_sendAddBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x302283d5
- (void)_sendModifyBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x30228561
- (void)_sendRemoveBulletin:(id)bulletin toFeeds:(unsigned)feeds shouldSync:(BOOL)sync;	// 0x302289ed
- (void)_sendRemoveBulletins:(id)bulletins toFeeds:(unsigned)feeds shouldSync:(BOOL)sync;	// 0x30228709
- (void)_sendUpdateBehaviorOverrides;	// 0x3022cd51
- (void)_sendUpdateSectionInfo:(id)info inCategory:(int)category;	// 0x30227865
- (void)_sendUpdateSectionOrderForCategory:(int)category;	// 0x30228155
- (void)_sendUpdateSectionOrderRule;	// 0x3022823d
- (void)_setBehaviorOverridesTimer;	// 0x3022c8fd
- (void)_setClearedInfo:(id)info forSectionID:(id)sectionID;	// 0x30230551
- (void)_setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x3022abed
- (void)_setSectionInfo:(id)info forSectionID:(id)sectionID inCategory:(int)category;	// 0x3022a9bd
- (void)_sortSectionIDs:(id)ids usingGuideArray:(id)array;	// 0x30229d99
- (void)_sortSectionIDs:(id)ids usingOrder:(id)order;	// 0x30229ab9
- (id)_sortedActiveSectionsForCategory:(int)category;	// 0x30229a3d
- (id)_sortedSectionIDsForCategory:(int)category;	// 0x302299fd
- (void)_updateAllBulletinsForDataProvider:(id)dataProvider;	// 0x30230149
- (void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)dataProviderIfSectionIsEnabled;	// 0x3022fc65
- (void)_updateBehaviorOverrides;	// 0x3022d2dd
- (void)_updateBulletinsInFeed:(unsigned)feed forDataProvider:(id)dataProvider enabledSectionIDs:(id)ids;	// 0x3022fca1
- (void)_updateBulletinsInFeed:(unsigned)feed forDataProviderIfSectionIsEnabled:(id)dataProviderIfSectionIsEnabled;	// 0x3022fc09
- (void)_updateBulletinsInFeed:(unsigned)feed ifSectionIsEnabled:(id)enabled;	// 0x3022fbd1
- (void)_updateClearedInfoForSectionID:(id)sectionID handler:(id)handler;	// 0x302305b5
- (void)_updateSectionInfoForSectionID:(id)sectionID handler:(id)handler;	// 0x302306e5
- (void)_updateSectionParametersForDataProvider:(id)dataProvider;	// 0x30230235
- (void)_updateShowsMessagePreviewForBulletin:(id)bulletin;	// 0x3023b311
- (id)_updatesForObserver:(id)observer bulletinIDs:(id)ids;	// 0x3022c115
- (BOOL)_verifyBulletinRequest:(id)request forDataProvider:(id)dataProvider;	// 0x3022f931
- (void)_writeBehaviorOverrides;	// 0x30231a35
- (void)_writeClearedSections;	// 0x30231029
- (void)_writeSectionInfo;	// 0x302315d9
- (void)_writeSectionOrder;	// 0x302314ed
- (id)activeSectionIDsForDefaultCategory;	// 0x302299e9
- (id)allBulletinIDsForSectionID:(id)sectionID;	// 0x30226e59
- (id)bulletinIDsForSectionID:(id)sectionID inFeed:(unsigned)feed;	// 0x30226da9
- (id)dataProviderForSectionID:(id)sectionID;	// 0x302307f1
- (void)dealloc;	// 0x30225da5
- (void)deliverResponse:(id)response;	// 0x3023b255
- (void)demo_lockscreen:(unsigned long long)lockscreen;	// 0x30231cc9
- (void)dpManager:(id)manager addDataProvider:(id)provider withSectionInfo:(id)sectionInfo;	// 0x30230825
- (void)dpManager:(id)manager addDataProviderFactory:(id)factory withSectionInfo:(id)sectionInfo;	// 0x30230935
- (void)dpManager:(id)manager removeDataProviderSectionID:(id)anId;	// 0x302309b9
- (id)dpManager:(id)manager sectionInfoForSectionID:(id)sectionID;	// 0x30230811
- (id)futureBulletinIDsForSectionID:(id)sectionID;	// 0x30226e45
- (void)getAttachmentAspectRatioForBulletinID:(id)bulletinID withHandler:(id)handler;	// 0x3022b9f5
- (void)getAttachmentPNGDataForBulletinID:(id)bulletinID sizeConstraints:(id)constraints withHandler:(id)handler;	// 0x3022b8e1
- (void)getSectionOrderRuleWithHandler:(id)handler;	// 0x3022b821
- (void)getSectionParametersForSectionID:(id)sectionID withHandler:(id)handler;	// 0x3022b89d
- (void)getShouldPresentNotificationOfType:(int)get fromSenderWithDestinationID:(id)destinationID handler:(id)handler;	// 0x3022db05
- (void)getSortDescriptorsForSectionID:(id)sectionID withHandler:(id)handler;	// 0x3022b869
- (BOOL)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned)activeBehaviorOverrides privilegedSenderTypes:(unsigned)types;	// 0x30240675
// converted property getter: - (BOOL)isRunning;	// 0x302260f1
- (void)noteChangeOfState:(unsigned)state newValue:(BOOL)value;	// 0x30240ae5
- (void)noteFinishedWithBulletinID:(id)bulletinID;	// 0x3023b235
- (void)noteOccurrenceOfEvent:(unsigned)event;	// 0x30240b21
- (void)noteRestrictedSectionIDsDidChange:(id)noteRestrictedSectionIDs;	// 0x30240b31
- (id)noticesBulletinIDsForSectionID:(id)sectionID;	// 0x30226e1d
- (void)observer:(id)observer clearBulletinIDs:(id)ids inSection:(id)section;	// 0x3022c005
- (void)observer:(id)observer clearSection:(id)section;	// 0x3022bfb9
- (void)observer:(id)observer finishedWithBulletinID:(id)bulletinID transactionID:(unsigned)anId;	// 0x3022be19
- (void)observer:(id)observer getActiveAlertBehaviorOverridesWithHandler:(id)handler;	// 0x3022c549
- (void)observer:(id)observer getSectionInfoForCategory:(int)category withHandler:(id)handler;	// 0x3022c0e5
- (void)observer:(id)observer handleResponse:(id)response;	// 0x3022bc81
- (void)observer:(id)observer removeBulletins:(id)bulletins inSection:(id)section fromFeeds:(unsigned)feeds;	// 0x3022c0bd
- (void)observer:(id)observer requestFutureBulletinsForSectionID:(id)sectionID;	// 0x3022c461
- (void)observer:(id)observer requestNoticesBulletinsForSectionID:(id)sectionID;	// 0x3022c291
- (void)observer:(id)observer requestTodayBulletinsForSectionID:(id)sectionID;	// 0x3022c379
- (void)observer:(id)observer setObserverFeed:(unsigned)feed;	// 0x3022badd
- (void)ping:(id)ping;	// 0x3022b811
- (BOOL)predicateShouldContinue:(id)predicate;	// 0x30240689
- (BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void *)record;	// 0x3024068d
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x30226101
- (void)publishBulletin:(id)bulletin destinations:(unsigned)destinations alwaysToLockScreen:(BOOL)lockScreen;	// 0x302268f9
- (void)publishBulletinRequest:(id)request destinations:(unsigned)destinations;	// 0x3023b45d
- (void)publishBulletinRequest:(id)request destinations:(unsigned)destinations alwaysToLockScreen:(BOOL)lockScreen;	// 0x3023b481
- (void)removeBulletinID:(id)anId fromFutureSection:(id)futureSection;	// 0x30226d85
- (void)removeBulletinID:(id)anId fromNoticesSection:(id)noticesSection;	// 0x30226d3d
- (void)removeBulletinID:(id)anId fromSection:(id)section inFeed:(unsigned)feed;	// 0x30226cad
- (void)removeBulletinID:(id)anId fromTodaySection:(id)todaySection;	// 0x30226d61
- (void)sendMessageToDataProviderSectionID:(id)dataProviderSectionID name:(id)name userInfo:(id)info;	// 0x3022dd45
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(BOOL)enabled forClient:(id)client;	// 0x3022dc69
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(BOOL)enabled forClient:(id)client;	// 0x3022db95
- (void)settingsGateway:(id)gateway getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(id)handler;	// 0x3022c6f5
- (void)settingsGateway:(id)gateway getBehaviorOverridesEnabledWithHandler:(id)handler;	// 0x3022c5e5
- (void)settingsGateway:(id)gateway getBehaviorOverridesWithHandler:(id)handler;	// 0x3022c5c5
- (void)settingsGateway:(id)gateway getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)handler;	// 0x3022c675
- (void)settingsGateway:(id)gateway getPrivilegedSenderTypesWithHandler:(id)handler;	// 0x3022c62d
- (void)settingsGateway:(id)gateway getSectionInfoForCategory:(int)category withHandler:(id)handler;	// 0x3022c595
- (void)settingsGateway:(id)gateway setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)enabled;	// 0x3022d9b5
- (void)settingsGateway:(id)gateway setBehaviorOverrideStatus:(int)status;	// 0x3022d6fd
- (void)settingsGateway:(id)gateway setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)enabled;	// 0x3022d8e5
- (void)settingsGateway:(id)gateway setBehaviorOverrides:(id)overrides;	// 0x3022d659
- (void)settingsGateway:(id)gateway setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)unlocked;	// 0x3022da8d
- (void)settingsGateway:(id)gateway setOrderedSectionIDs:(id)ids forCategory:(int)category;	// 0x3022c789
- (void)settingsGateway:(id)gateway setPrivilegedSenderAddressBookGroupRecordID:(int)anId name:(id)name;	// 0x3022d839
- (void)settingsGateway:(id)gateway setPrivilegedSenderTypes:(unsigned)types;	// 0x3022d7c1
- (void)settingsGateway:(id)gateway setSectionInfo:(id)info forSectionID:(id)sectionID inCategory:(int)category;	// 0x3022c7ed
- (void)settingsGateway:(id)gateway setSectionOrderRule:(int)rule;	// 0x3022c73d
- (BOOL)shouldPresentNotificationOfType:(int)type fromSenderWithDestinationID:(id)destinationID;	// 0x302404f5
- (id)sortDescriptorsForSectionID:(id)sectionID;	// 0x30226ecd
- (void)syncService:(id)service receivedDismissalDictionaries:(id)dictionaries dismissalIDs:(id)ids inSection:(id)section forFeeds:(unsigned)feeds;	// 0x30232151
- (BOOL)syncService:(id)service shouldAbortDelayedDismissalForBulletin:(id)bulletin;	// 0x302325a9
- (id)todayBulletinIDsForSectionID:(id)sectionID;	// 0x30226e31
- (void)updateSection:(id)section inFeed:(unsigned)feed withBulletinRequests:(id)bulletinRequests;	// 0x3023bb5d
- (unsigned)userBulletinCapForSectionID:(id)sectionID;	// 0x30226ea1
- (void)weeAppWithBundleID:(id)bundleID getHiddenFromUser:(id)user;	// 0x3022de8d
- (void)weeAppWithBundleID:(id)bundleID setHiddenFromUser:(BOOL)user;	// 0x3022dd8d
- (void)withdrawBulletinID:(id)anId;	// 0x30226c15
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)publisherBulletinID forSectionID:(id)sectionID;	// 0x3023bff9
- (void)withdrawBulletinRequestsWithRecordID:(id)recordID forSectionID:(id)sectionID;	// 0x3023bec9
@end

