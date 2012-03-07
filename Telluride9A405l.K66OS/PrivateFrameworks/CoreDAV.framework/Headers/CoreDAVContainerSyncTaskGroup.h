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

@class NSString, NSArray, NSDictionary, NSMutableSet, NSMutableArray, NSURL, NSMutableDictionary;
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
@property(assign) BOOL actionsOnly;	// G=0x30fe4b85; S=0x30fe4b95; @synthesize=_actionsOnly
@property(retain) NSURL *addMemberURL;	// G=0x30fe4965; S=0x30fe4979; @synthesize=_addMemberURL
@property(retain) NSString *bulkChangeCheckCTag;	// G=0x30fe4b4d; S=0x30fe4b61; @synthesize=_bulkChangeCheckCTag
@property(retain) NSDictionary *bulkRequests;	// G=0x30fe4b15; S=0x30fe4b29; @synthesize=_bulkRequests
@property(readonly, assign) void *context;	// G=0x30fe4af5; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBInfoProvider> delegate;	// @dynamic
@property(assign) BOOL ensureUpdatedCTag;	// G=0x30fe4a7d; S=0x30fe4a8d; @synthesize=_ensureUpdatedCTag
@property(readonly, assign) NSURL *folderURL;	// G=0x30fe49fd; @synthesize=_folderURL
@property(readonly, assign) NSArray *localItemURLOrder;	// G=0x30fe4b05; @synthesize=_localItemURLOrder
@property(assign) unsigned maxIndependentTasks;	// G=0x30fe49bd; S=0x30fe49cd; @synthesize=_maxIndependentTasks
@property(assign) unsigned multiGetBatchSize;	// G=0x30fe499d; S=0x30fe49ad; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x30fe4a45; S=0x30fe4a59; @synthesize=_nextCTag
@property(retain) NSString *previousCTag;	// G=0x30fe4a0d; S=0x30fe4a21; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x30fe4a9d; S=0x30fe4ab1; @synthesize=_previousSyncToken
@property(assign) BOOL useMultiGet;	// G=0x30fe49dd; S=0x30fe49ed; @synthesize=_useMultiGet
@property(assign) BOOL useSyncCollection;	// G=0x30fe4ad5; S=0x30fe4ae5; @synthesize=_useSyncCollection
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x30fdfc1d
- (void)_bulkChange;	// 0x30fe1661
- (void)_bulkChangeTask:(id)task didFinishWithError:(id)error;	// 0x30fe3595
- (void)_getCTag;	// 0x30fe05c1
- (void)_getDataPayloads;	// 0x30fe210d
- (void)_getETags;	// 0x30fe1c51
- (void)_getOrder;	// 0x30fe1f4d
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x30fe46ad
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x30fe2dbd
- (void)_pushActions;	// 0x30fe0b19
- (void)_sendNextBatch;	// 0x30fe1045
- (unsigned)_submitTasks;	// 0x30fe033d
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x30fe3071
- (void)_tearDownAllUnsubmittedTasks;	// 0x30fe0185
// declared property getter: - (BOOL)actionsOnly;	// 0x30fe4b85
// declared property getter: - (id)addMemberURL;	// 0x30fe4965
- (void)applyAdditionalPropertiesFromPostTask:(id)postTask;	// 0x30fe2db9
- (void)applyAdditionalPropertiesFromPutTask:(id)putTask;	// 0x30fe2a01
- (void)bailWithError:(id)error;	// 0x30fe02b9
// declared property getter: - (id)bulkChangeCheckCTag;	// 0x30fe4b4d
- (Class)bulkChangeTaskClass;	// 0x30fe00c5
// declared property getter: - (id)bulkRequests;	// 0x30fe4b15
- (void)cancelTaskGroup;	// 0x30fe02fd
// declared property getter: - (void *)context;	// 0x30fe4af5
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x30fe0109
- (id)copyGetEtagTaskWithPropertiesToFind:(id)find;	// 0x30fe1ba5
- (id)copyGetTaskWithURL:(id)url;	// 0x30fdfff9
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x30fe003d
- (id)copyPostTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x30fe0a8d
- (id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x30fe09d5
- (id)dataContentType;	// 0x30fe0081
- (void)dealloc;	// 0x30fdfe49
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x30fe391d
- (id)description;	// 0x30fdff85
// declared property getter: - (BOOL)ensureUpdatedCTag;	// 0x30fe4a7d
// declared property getter: - (id)folderURL;	// 0x30fe49fd
- (void)getTask:(id)task data:(id)data error:(id)error;	// 0x30fe4369
// declared property getter: - (id)localItemURLOrder;	// 0x30fe4b05
// declared property getter: - (unsigned)maxIndependentTasks;	// 0x30fe49bd
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x30fe499d
// declared property getter: - (id)nextCTag;	// 0x30fe4a45
// declared property getter: - (id)previousCTag;	// 0x30fe4a0d
// declared property getter: - (id)previousSyncToken;	// 0x30fe4a9d
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x30fe3ba5
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x30fe2a05
// declared property setter: - (void)setActionsOnly:(BOOL)only;	// 0x30fe4b95
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x30fe4979
// declared property setter: - (void)setBulkChangeCheckCTag:(id)tag;	// 0x30fe4b61
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x30fe4b29
// declared property setter: - (void)setEnsureUpdatedCTag:(BOOL)tag;	// 0x30fe4a8d
// declared property setter: - (void)setMaxIndependentTasks:(unsigned)tasks;	// 0x30fe49cd
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x30fe49ad
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x30fe4a59
// declared property setter: - (void)setPreviousCTag:(id)tag;	// 0x30fe4a21
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x30fe4ab1
// declared property setter: - (void)setUseMultiGet:(BOOL)get;	// 0x30fe49ed
// declared property setter: - (void)setUseSyncCollection:(BOOL)collection;	// 0x30fe4ae5
- (BOOL)shouldFetchMoreETags;	// 0x30fe3ba1
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x30fe010d
- (void)startTaskGroup;	// 0x30fe28fd
- (void)syncAway;	// 0x30fe29f1
- (void)task:(id)task didFinishWithError:(id)error;	// 0x30fe3801
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x30fe0111
// declared property getter: - (BOOL)useMultiGet;	// 0x30fe49dd
// declared property getter: - (BOOL)useSyncCollection;	// 0x30fe4ad5
@end

