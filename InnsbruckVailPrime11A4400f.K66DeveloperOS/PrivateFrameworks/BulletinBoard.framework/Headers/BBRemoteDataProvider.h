/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BBXPCConnectionDelegate.h"
#import "XPCProxyTarget.h"
#import "BBDataProvider.h"

@class BBXPCOutgoingConnection, NSMutableArray, NSString;
@protocol BBRemoteDataProviderDelegate, OS_dispatch_queue;

@interface BBRemoteDataProvider : BBDataProvider <XPCProxyTarget, BBXPCConnectionDelegate> {
	NSString *_sectionID;	// 8 = 0x8
	NSString *_appBundleID;	// 12 = 0xc
	BBXPCOutgoingConnection *_connection;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_queue;	// 20 = 0x14
	NSMutableArray *_pendingRequests;	// 24 = 0x18
	id<BBRemoteDataProviderDelegate> _delegate;	// 28 = 0x1c
	BOOL _operational;	// 32 = 0x20
}
+ (id)_sharedSystemService;	// 0x30249cd1
- (id)initWithSectionID:(id)sectionID serviceName:(id)name appBundleID:(id)anId delegate:(id)delegate onQueue:(id)queue;	// 0x30249d3d
- (void)_invalidate;	// 0x30249ff1
- (void)_logDoesNotRespond:(SEL)respond;	// 0x3024a651
- (void)_prependAndSendRequest:(id)request;	// 0x3024a565
- (void)_processPendingRequests;	// 0x3024a21d
- (void)_sendRequest:(id)request;	// 0x3024a5dd
- (void)addBulletin:(id)bulletin forDestinations:(unsigned)destinations;	// 0x3024b281
- (void)attachmentAspectRatioForRecordID:(id)recordID completion:(id)completion;	// 0x3024af71
- (void)attachmentPNGDataForRecordID:(id)recordID sizeConstraints:(id)constraints completion:(id)completion;	// 0x3024ae09
- (void)bulletinsWithRequestParameters:(id)requestParameters lastCleared:(id)cleared completion:(id)completion;	// 0x3024a6b1
- (BOOL)canPerformMigration;	// 0x3024b165
- (void)clearedInfoForAllBulletinsWithLastClearedInfo:(id)lastClearedInfo completion:(id)completion;	// 0x3024a951
- (void)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info completion:(id)completion;	// 0x3024ab11
- (void)connection:(id)connection connectionStateDidChange:(BOOL)connectionState;	// 0x3024a051
- (void)dataProviderDidLoad;	// 0x3024a681
- (void)dealloc;	// 0x30249e91
- (void)deliverMessageWithName:(id)name userInfo:(id)info;	// 0x3024b16d
- (void)deliverResponse:(id)response forBulletinRequest:(id)bulletinRequest;	// 0x3024ad09
- (id)description;	// 0x30249f2d
- (void)getClearedInfoWithCompletion:(id)completion;	// 0x3024b395
- (void)getSectionInfoWithCompletion:(id)completion;	// 0x3024b3fd
- (void)invalidate;	// 0x30249fd1
- (void)invalidateBulletins;	// 0x3024b27d
- (BOOL)migrateSectionInfo:(id)info oldSectionInfo:(id)info2;	// 0x3024b169
- (void)modifyBulletin:(id)bulletin;	// 0x3024b289
- (void)noteSectionInfoDidChange:(id)noteSectionInfo;	// 0x3024b0b5
- (void)ping:(id)ping;	// 0x3024b26d
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3024b465
- (void)reloadDefaultSectionInfo:(id)info;	// 0x3024b319
- (void)reloadIdentityWithCompletion:(id)completion;	// 0x3024b2a1
- (void)reloadSectionParameters:(id)parameters;	// 0x3024b2ad
- (void)resume;	// 0x3024a02d
- (void)setClearedInfo:(id)info;	// 0x3024b3f5
- (void)setSectionInfo:(id)info;	// 0x3024b45d
- (void)startWatchdog;	// 0x3024a04d
- (void)updateClearedInfoWithClearedInfo:(id)clearedInfo handler:(id)handler completion:(id)completion;	// 0x3024b15d
- (void)updateSectionInfoWithSectionInfo:(id)sectionInfo handler:(id)handler completion:(id)completion;	// 0x3024b161
- (void)withdrawBulletinWithPublisherBulletinID:(id)publisherBulletinID;	// 0x3024b299
- (void)withdrawBulletinsWithRecordID:(id)recordID;	// 0x3024b291
@end

