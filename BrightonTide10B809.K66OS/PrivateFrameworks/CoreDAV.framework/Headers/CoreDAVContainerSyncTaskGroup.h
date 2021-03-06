/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"
#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"
#import "CoreDAVGetTaskDelegate.h"

@class NSMutableArray, NSURL, NSMutableDictionary, NSString, NSArray, NSDictionary, NSMutableSet;
@protocol CoreDAVLocalDBInfoProvider;

@interface CoreDAVContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVGetTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	BOOL _ensureUpdatedCTag;	// 60 = 0x3c
	BOOL _useSyncCollection;	// 61 = 0x3d
	NSString *_previousSyncToken;	// 64 = 0x40
	NSString *_nextSyncToken;	// 68 = 0x44
	NSMutableArray *_actions;	// 72 = 0x48
	void *_context;	// 76 = 0x4c
	unsigned _multiGetBatchSize;	// 80 = 0x50
	NSMutableArray *_unsubmittedTasks;	// 84 = 0x54
	unsigned _maxIndependentTasks;	// 88 = 0x58
	NSURL *_addMemberURL;	// 92 = 0x5c
	BOOL _useMultiGet;	// 96 = 0x60
	NSDictionary *_bulkRequests;	// 100 = 0x64
	NSString *_bulkChangeCheckCTag;	// 104 = 0x68
	NSMutableSet *_syncReportDeletedURLs;	// 108 = 0x6c
	NSMutableDictionary *_urlToETag;	// 112 = 0x70
	Class _appSpecificDataItemClass;	// 116 = 0x74
	BOOL _syncItemOrder;	// 120 = 0x78
	NSMutableArray *_localItemURLOrder;	// 124 = 0x7c
	NSMutableDictionary *_remainingUUIDsToAddActions;	// 128 = 0x80
	NSMutableDictionary *_remainingHREFsToModDeleteActions;	// 132 = 0x84
	BOOL _actionsOnly;	// 136 = 0x88
}
@property(assign) BOOL actionsOnly;	// G=0x336fcd31; S=0x336fcd49; @synthesize=_actionsOnly
@property(retain) NSURL *addMemberURL;	// G=0x336fcb35; S=0x336fcb49; @synthesize=_addMemberURL
@property(retain) NSString *bulkChangeCheckCTag;	// G=0x336fcd0d; S=0x336fcd21; @synthesize=_bulkChangeCheckCTag
@property(retain) NSDictionary *bulkRequests;	// G=0x336fcce9; S=0x336fccfd; @synthesize=_bulkRequests
@property(readonly, assign) void *context;	// G=0x336fccc1; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBInfoProvider> delegate;	// @dynamic
@property(assign) BOOL ensureUpdatedCTag;	// G=0x336fcc3d; S=0x336fcc55; @synthesize=_ensureUpdatedCTag
@property(readonly, assign) NSURL *folderURL;	// G=0x336fcbe1; @synthesize=_folderURL
@property(readonly, assign) NSArray *localItemURLOrder;	// G=0x336fccd5; @synthesize=_localItemURLOrder
@property(assign) unsigned maxIndependentTasks;	// G=0x336fcb85; S=0x336fcb99; @synthesize=_maxIndependentTasks
@property(assign) unsigned multiGetBatchSize;	// G=0x336fcb59; S=0x336fcb6d; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x336fcc19; S=0x336fcc2d; @synthesize=_nextCTag
@property(retain) NSString *previousCTag;	// G=0x336fcbf5; S=0x336fcc09; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x336fcc6d; S=0x336fcc81; @synthesize=_previousSyncToken
@property(assign) BOOL useMultiGet;	// G=0x336fcbb1; S=0x336fcbc9; @synthesize=_useMultiGet
@property(assign) BOOL useSyncCollection;	// G=0x336fcc91; S=0x336fcca9; @synthesize=_useSyncCollection
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x336f7f29
- (void)_bulkChange;	// 0x336f99a1
- (void)_bulkChangeTask:(id)task didFinishWithError:(id)error;	// 0x336fb919
- (void)_configureMultiGet:(id)get;	// 0x336fa3f5
- (void)_getCTag;	// 0x336f893d
- (void)_getDataPayloads;	// 0x336fa601
- (void)_getETags;	// 0x336f9f19
- (void)_getOrder;	// 0x336fa231
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x336fc9c1
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x336fb18d
- (void)_pushActions;	// 0x336f8ed9
- (void)_sendNextBatch;	// 0x336f93b1
- (unsigned)_submitTasks;	// 0x336f8675
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x336fb3e5
- (void)_tearDownAllUnsubmittedTasks;	// 0x336f84c1
// declared property getter: - (BOOL)actionsOnly;	// 0x336fcd31
// declared property getter: - (id)addMemberURL;	// 0x336fcb35
- (void)applyAdditionalPropertiesFromPostTask:(id)postTask;	// 0x336fb189
- (void)applyAdditionalPropertiesFromPutTask:(id)putTask;	// 0x336fae9d
- (void)bailWithError:(id)error;	// 0x336f85f1
// declared property getter: - (id)bulkChangeCheckCTag;	// 0x336fcd0d
- (Class)bulkChangeTaskClass;	// 0x336f8401
// declared property getter: - (id)bulkRequests;	// 0x336fcce9
- (void)cancelTaskGroup;	// 0x336f8635
// declared property getter: - (void *)context;	// 0x336fccc1
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x336f8445
- (id)copyGetEtagTaskWithPropertiesToFind:(id)find;	// 0x336f9e79
- (id)copyGetTaskWithURL:(id)url;	// 0x336f8335
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x336f8379
- (id)copyPostTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x336f8e35
- (id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x336f8d65
- (id)dataContentType;	// 0x336f83bd
- (void)dealloc;	// 0x336f815d
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x336fbca9
- (id)description;	// 0x336f82c5
// declared property getter: - (BOOL)ensureUpdatedCTag;	// 0x336fcc3d
// declared property getter: - (id)folderURL;	// 0x336fcbe1
- (void)getTask:(id)task data:(id)data error:(id)error;	// 0x336fc661
- (BOOL)isWhitelistedError:(id)error;	// 0x336fae2d
// declared property getter: - (id)localItemURLOrder;	// 0x336fccd5
// declared property getter: - (unsigned)maxIndependentTasks;	// 0x336fcb85
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x336fcb59
// declared property getter: - (id)nextCTag;	// 0x336fcc19
// declared property getter: - (id)previousCTag;	// 0x336fcbf5
// declared property getter: - (id)previousSyncToken;	// 0x336fcc6d
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x336fbedd
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x336faea1
// declared property setter: - (void)setActionsOnly:(BOOL)only;	// 0x336fcd49
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x336fcb49
// declared property setter: - (void)setBulkChangeCheckCTag:(id)tag;	// 0x336fcd21
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x336fccfd
// declared property setter: - (void)setEnsureUpdatedCTag:(BOOL)tag;	// 0x336fcc55
// declared property setter: - (void)setMaxIndependentTasks:(unsigned)tasks;	// 0x336fcb99
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x336fcb6d
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x336fcc2d
// declared property setter: - (void)setPreviousCTag:(id)tag;	// 0x336fcc09
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x336fcc81
// declared property setter: - (void)setUseMultiGet:(BOOL)get;	// 0x336fcbc9
// declared property setter: - (void)setUseSyncCollection:(BOOL)collection;	// 0x336fcca9
- (BOOL)shouldFetchMoreETags;	// 0x336fbed9
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x336f8449
- (void)startTaskGroup;	// 0x336fad29
- (void)syncAway;	// 0x336fae1d
- (void)task:(id)task didFinishWithError:(id)error;	// 0x336fbbe1
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x336f844d
// declared property getter: - (BOOL)useMultiGet;	// 0x336fcbb1
// declared property getter: - (BOOL)useSyncCollection;	// 0x336fcc91
@end

