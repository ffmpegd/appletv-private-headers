/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSDate;
@protocol BBPushDataProviderFactory;

@interface BBServer : NSObject <XPCProxyTarget> {
@private
	NSMutableSet *_observers;	// 4 = 0x4
	NSMutableSet *_listObservers;	// 8 = 0x8
	NSMutableSet *_modalAlertObservers;	// 12 = 0xc
	NSMutableSet *_bannerObservers;	// 16 = 0x10
	NSMutableSet *_lockscreenObservers;	// 20 = 0x14
	NSMutableSet *_soundObservers;	// 24 = 0x18
	NSMutableSet *_settingsObservers;	// 28 = 0x1c
	NSMutableSet *_settingsGateways;	// 32 = 0x20
	NSMutableArray *_sortedSectionIDs;	// 36 = 0x24
	unsigned _sectionOrderRule;	// 40 = 0x28
	NSMutableDictionary *_sectionInfoByID;	// 44 = 0x2c
	NSMutableDictionary *_sectionParametersByID;	// 48 = 0x30
	NSMutableDictionary *_sectionSortDescriptorsByID;	// 52 = 0x34
	NSMutableDictionary *_bulletinsByID;	// 56 = 0x38
	NSMutableDictionary *_bulletinIDsBySectionID;	// 60 = 0x3c
	NSMutableDictionary *_transactionsByObserver;	// 64 = 0x40
	NSMutableDictionary *_listBulletinIDsBySectionID;	// 68 = 0x44
	NSMutableArray *_interruptingBulletinIDs;	// 72 = 0x48
	NSMutableArray *_expiringBulletinIDs;	// 76 = 0x4c
	dispatch_source_s *_timer;	// 80 = 0x50
	NSDate *_nextScheduledFireDate;	// 84 = 0x54
	NSMutableDictionary *_dataProvidersBySection;	// 88 = 0x58
	NSMutableSet *_pushDataProviders;	// 92 = 0x5c
	NSMutableDictionary *_clearedSections;	// 96 = 0x60
	id<BBPushDataProviderFactory> _pushDataProviderFactory;	// 100 = 0x64
	int _demo_lockscreen_token;	// 104 = 0x68
@protected
	NSMutableDictionary *_bulletinRequestsByID;	// 108 = 0x6c
}
+ (void)initialize;	// 0x34cc2d1d
- (id)init;	// 0x34cc2d21
- (void)_addBulletin:(id)bulletin;	// 0x34cc49dd
- (void)_addDataProvider:(id)provider sortSectionsNow:(BOOL)now;	// 0x34cc8f91
- (void)_addInterruptingBulletin:(id)bulletin;	// 0x34cc65a1
- (void)_addObserverWithConnection:(xpc_connection_s *)connection;	// 0x34cc3d09
- (void)_addPushDataProvider:(id)provider sortNowAndNotifyObservers:(BOOL)observers;	// 0x34cc9241
- (void)_addSettingsGatewayWithConnection:(xpc_connection_s *)connection;	// 0x34cc4161
- (id)_allBulletinsForSectionID:(id)sectionID;	// 0x34cc5291
- (void)_assignIDToBulletinRequest:(id)bulletinRequest;	// 0x34ccf965
- (void)_assignIDToBulletinRequest:(id)bulletinRequest checkAgainstBulletins:(id)bulletins;	// 0x34ccf9c1
- (id)_bulletinIDsInSortedArray:(id)sortedArray withDateForKey:(id)key beforeCutoff:(id)cutoff;	// 0x34cc60a5
- (id)_bulletinRequestsForIDs:(id)ids;	// 0x34ccf869
- (id)_bulletinsForIDs:(id)ids;	// 0x34cc516d
- (void)_clearBulletinIDIfPossible:(id)possible rescheduleExpirationTimer:(BOOL)timer;	// 0x34cc5879
- (void)_clearSection:(id)section;	// 0x34cc4cad
- (void)_clearTimer;	// 0x34cc5c11
- (id)_clearedInfoForSectionID:(id)sectionID;	// 0x34cc8759
- (id)_clearedSectionsPath;	// 0x34cc9dc9
- (id)_copyDefaultEnabledWeeAppIDs;	// 0x34cc995d
- (unsigned)_countForSectionID:(id)sectionID;	// 0x34cc871d
- (id)_currentTransactionForObserver:(id)observer bulletinID:(id)anId;	// 0x34cc4fd5
- (id)_dataDirectoryPath;	// 0x34cc9d3d
- (id)_defaultSectionInfoForDataProvider:(id)dataProvider;	// 0x34cca3d1
- (void)_ensureDataDirectoryExists;	// 0x34cc9d59
- (void)_expireBulletins;	// 0x34cc6261
- (void)_expireBulletinsAndInterruptionsAndRescheduleTimerIfNecessary;	// 0x34cc5f39
- (void)_expireInterruptions;	// 0x34cc67f5
- (unsigned)_feedsForBulletin:(id)bulletin destinations:(int)destinations;	// 0x34cc4edd
- (unsigned)_filtersForSectionID:(id)sectionID;	// 0x34cc8719
- (void)_handleSignificantTimeChange;	// 0x34cc5c01
- (void)_handleSystemSleep;	// 0x34cc5be1
- (void)_handleSystemWake;	// 0x34cc5bf1
- (unsigned)_incrementedTransactionIDForObserver:(id)observer bulletinID:(id)anId;	// 0x34cc50a9
- (unsigned)_indexForNewDate:(id)newDate inBulletinIDArray:(id)bulletinIDArray sortedAscendingByDateForKey:(id)key;	// 0x34cc61c9
- (id)_interruptingBulletinIDsForFeeds:(unsigned)feeds;	// 0x34cc69f1
- (id)_listBulletinsForSectionID:(id)sectionID;	// 0x34cc5261
- (void)_loadAllDataProviderPluginBundles;	// 0x34cc87cd
- (void)_loadAllWeeAppSections;	// 0x34cc99f5
- (void)_loadClearedSections;	// 0x34cc9dfd
- (void)_loadDataProviderPluginBundle:(id)bundle;	// 0x34cc8bc5
- (void)_loadDataProvidersAndSettings;	// 0x34cc7fa1
- (void)_loadSavedSectionInfo;	// 0x34cca0bd
- (void)_modifyBulletin:(id)bulletin;	// 0x34cc4abd
- (id)_nextExpireBulletinsDate;	// 0x34cc5e29
- (id)_nextExpireInterruptionsDate;	// 0x34cc5ea1
- (void)_noteUserEnabledPushDeliveryForDataProvider:(id)dataProvider;	// 0x34cc932d
- (id)_observersForFeeds:(unsigned)feeds;	// 0x34cc44a5
- (void)_publishBulletinRequest:(id)request forDataProvider:(id)dataProvider forDestinations:(int)destinations;	// 0x34cc86dd
- (void)_publishBulletinsForAllDataProviders;	// 0x34cc8139
- (void)_readSavedSectionOrder:(id *)order andRule:(unsigned *)rule;	// 0x34cc9f6d
- (id)_removalsForListSection:(id)listSection addition:(id)addition keepAddition:(BOOL *)addition3;	// 0x34ccfac5
- (void)_removeBulletin:(id)bulletin;	// 0x34cc4c99
- (void)_removeBulletin:(id)bulletin rescheduleTimerIfAffected:(BOOL)affected;	// 0x34cc4afd
- (void)_removeObserver:(id)observer;	// 0x34cc3f4d
- (void)_removePushDataProvider:(id)provider;	// 0x34cc95a5
- (void)_removeSection:(id)section;	// 0x34cc4dc5
- (void)_removeSettingsGateway:(id)gateway;	// 0x34cc4365
- (void)_scheduleExpirationForBulletin:(id)bulletin;	// 0x34cc647d
- (void)_scheduleTimerForDate:(id)date;	// 0x34cc5c61
- (id)_sectionInfoArray:(BOOL)array;	// 0x34cc576d
- (id)_sectionInfoPath;	// 0x34cc9f39
- (id)_sectionOrderPath;	// 0x34cc9f05
- (void)_sendAddBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x34cc458d
- (void)_sendModifyBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x34cc46ed
- (void)_sendRemoveBulletin:(id)bulletin toFeeds:(unsigned)feeds;	// 0x34cc4865
- (void)_sendUpdateSectionInfo:(id)info;	// 0x34cc43b5
- (void)_sendUpdateSectionOrder;	// 0x34cc4401
- (void)_sendUpdateSectionOrderRule;	// 0x34cc443d
- (void)_setClearedInfo:(id)info forSectionID:(id)sectionID;	// 0x34cc8779
- (void)_setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x34cc5ad1
- (void)_sortSectionIDsUsingDefaultOrder;	// 0x34cc52c1
- (void)_sortSectionIDsUsingGuideArray:(id)array;	// 0x34cc5619
- (void)_updateBulletinsForDataProvider:(id)dataProvider;	// 0x34cc831d
- (void)_updateBulletinsForDataProviderIfSectionIsEnabled:(id)dataProviderIfSectionIsEnabled;	// 0x34cc82b1
- (void)_updatePushSettingsForPushDataProvider:(id)pushDataProvider;	// 0x34cc9429
- (void)_updateSectionParametersForDataProvider:(id)dataProvider;	// 0x34cc85cd
- (id)_updatesForObserver:(id)observer bulletinIDs:(id)ids;	// 0x34cc7275
- (BOOL)_verifyBulletinRequest:(id)request forDataProvider:(id)dataProvider;	// 0x34cc81f1
- (void)_writeClearedSections;	// 0x34cc9e89
- (void)_writeSectionInfo;	// 0x34cca291
- (void)_writeSectionOrder;	// 0x34cca1e5
- (id)allBulletinIDsForSectionID:(id)sectionID;	// 0x34cc3c91
- (void)dealloc;	// 0x34cc3285
- (void)deliverResponse:(id)response;	// 0x34cceeb5
- (void)demo_lockscreen:(unsigned long long)lockscreen;	// 0x34cca451
- (void)getAttachmentAspectRatioForBulletinID:(id)bulletinID withHandler:(id)handler;	// 0x34cc6cb5
- (void)getAttachmentPNGDataForBulletinID:(id)bulletinID sizeConstraints:(id)constraints withHandler:(id)handler;	// 0x34cc6bcd
- (void)getSectionOrderRuleWithHandler:(id)handler;	// 0x34cc6b15
- (void)getSectionParametersForSectionID:(id)sectionID withHandler:(id)handler;	// 0x34cc6b8d
- (void)getSortDescriptorsForSectionID:(id)sectionID withHandler:(id)handler;	// 0x34cc6b59
- (unsigned)listBulletinCapForSectionID:(id)sectionID;	// 0x34cc3cb1
- (id)listBulletinIDsForSectionID:(id)sectionID;	// 0x34cc3c71
- (void)noteFinishedWithBulletinID:(id)bulletinID;	// 0x34ccee95
- (void)observer:(id)observer clearSection:(id)section;	// 0x34cc71fd
- (void)observer:(id)observer finishedWithBulletinID:(id)bulletinID transactionID:(unsigned)anId;	// 0x34cc7065
- (void)observer:(id)observer getRecentUnacknowledgedBulletinsForFeeds:(unsigned)feeds withHandler:(id)handler;	// 0x34cc7485
- (void)observer:(id)observer getSectionInfoWithHandler:(id)handler;	// 0x34cc7249
- (void)observer:(id)observer handleResponse:(id)response;	// 0x34cc6ee1
- (void)observer:(id)observer requestListBulletinsForSectionID:(id)sectionID;	// 0x34cc73b9
- (void)observer:(id)observer setObserverFeed:(unsigned)feed;	// 0x34cc6da1
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x34cc34cd
- (void)publishBulletin:(id)bulletin destinations:(int)destinations;	// 0x34cc39f5
- (void)publishBulletinRequest:(id)request destinations:(int)destinations;	// 0x34ccef1d
- (void)removeBulletinID:(id)anId fromListSection:(id)listSection;	// 0x34cc3c05
- (void)settingsGateway:(id)gateway getSectionInfoWithHandler:(id)handler;	// 0x34cc7521
- (void)settingsGateway:(id)gateway setOrderedSectionIDs:(id)ids;	// 0x34cc7595
- (void)settingsGateway:(id)gateway setSectionInfo:(id)info forSectionID:(id)sectionID;	// 0x34cc75dd
- (void)settingsGateway:(id)gateway setSectionOrderRule:(unsigned)rule;	// 0x34cc754d
- (id)sortDescriptorsForSectionID:(id)sectionID;	// 0x34cc3ce9
- (void)updateListSection:(id)section withBulletinRequests:(id)bulletinRequests;	// 0x34ccf34d
- (void)withdrawBulletinID:(id)anId;	// 0x34cc3bc5
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)publisherBulletinID forSectionID:(id)sectionID;	// 0x34ccf765
- (void)withdrawBulletinRequestsWithRecordID:(id)recordID forSectionID:(id)sectionID;	// 0x34ccf661
@end

