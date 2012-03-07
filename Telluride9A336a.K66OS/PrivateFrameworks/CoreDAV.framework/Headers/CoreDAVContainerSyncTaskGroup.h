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
@property(assign) BOOL actionsOnly;	// G=0x32c39b85; S=0x32c39b95; @synthesize=_actionsOnly
@property(retain) NSURL *addMemberURL;	// G=0x32c39965; S=0x32c39979; @synthesize=_addMemberURL
@property(retain) NSString *bulkChangeCheckCTag;	// G=0x32c39b4d; S=0x32c39b61; @synthesize=_bulkChangeCheckCTag
@property(retain) NSDictionary *bulkRequests;	// G=0x32c39b15; S=0x32c39b29; @synthesize=_bulkRequests
@property(readonly, assign) void *context;	// G=0x32c39af5; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBInfoProvider> delegate;	// @dynamic
@property(assign) BOOL ensureUpdatedCTag;	// G=0x32c39a7d; S=0x32c39a8d; @synthesize=_ensureUpdatedCTag
@property(readonly, assign) NSURL *folderURL;	// G=0x32c399fd; @synthesize=_folderURL
@property(readonly, assign) NSArray *localItemURLOrder;	// G=0x32c39b05; @synthesize=_localItemURLOrder
@property(assign) unsigned maxIndependentTasks;	// G=0x32c399bd; S=0x32c399cd; @synthesize=_maxIndependentTasks
@property(assign) unsigned multiGetBatchSize;	// G=0x32c3999d; S=0x32c399ad; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x32c39a45; S=0x32c39a59; @synthesize=_nextCTag
@property(retain) NSString *previousCTag;	// G=0x32c39a0d; S=0x32c39a21; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x32c39a9d; S=0x32c39ab1; @synthesize=_previousSyncToken
@property(assign) BOOL useMultiGet;	// G=0x32c399dd; S=0x32c399ed; @synthesize=_useMultiGet
@property(assign) BOOL useSyncCollection;	// G=0x32c39ad5; S=0x32c39ae5; @synthesize=_useSyncCollection
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x32c34c1d
- (void)_bulkChange;	// 0x32c36661
- (void)_bulkChangeTask:(id)task didFinishWithError:(id)error;	// 0x32c38595
- (void)_getCTag;	// 0x32c355c1
- (void)_getDataPayloads;	// 0x32c3710d
- (void)_getETags;	// 0x32c36c51
- (void)_getOrder;	// 0x32c36f4d
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x32c396ad
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x32c37dbd
- (void)_pushActions;	// 0x32c35b19
- (void)_sendNextBatch;	// 0x32c36045
- (unsigned)_submitTasks;	// 0x32c3533d
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x32c38071
- (void)_tearDownAllUnsubmittedTasks;	// 0x32c35185
// declared property getter: - (BOOL)actionsOnly;	// 0x32c39b85
// declared property getter: - (id)addMemberURL;	// 0x32c39965
- (void)applyAdditionalPropertiesFromPostTask:(id)postTask;	// 0x32c37db9
- (void)applyAdditionalPropertiesFromPutTask:(id)putTask;	// 0x32c37a01
- (void)bailWithError:(id)error;	// 0x32c352b9
// declared property getter: - (id)bulkChangeCheckCTag;	// 0x32c39b4d
- (Class)bulkChangeTaskClass;	// 0x32c350c5
// declared property getter: - (id)bulkRequests;	// 0x32c39b15
- (void)cancelTaskGroup;	// 0x32c352fd
// declared property getter: - (void *)context;	// 0x32c39af5
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x32c35109
- (id)copyGetEtagTaskWithPropertiesToFind:(id)find;	// 0x32c36ba5
- (id)copyGetTaskWithURL:(id)url;	// 0x32c34ff9
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x32c3503d
- (id)copyPostTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x32c35a8d
- (id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x32c359d5
- (id)dataContentType;	// 0x32c35081
- (void)dealloc;	// 0x32c34e49
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x32c3891d
- (id)description;	// 0x32c34f85
// declared property getter: - (BOOL)ensureUpdatedCTag;	// 0x32c39a7d
// declared property getter: - (id)folderURL;	// 0x32c399fd
- (void)getTask:(id)task data:(id)data error:(id)error;	// 0x32c39369
// declared property getter: - (id)localItemURLOrder;	// 0x32c39b05
// declared property getter: - (unsigned)maxIndependentTasks;	// 0x32c399bd
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x32c3999d
// declared property getter: - (id)nextCTag;	// 0x32c39a45
// declared property getter: - (id)previousCTag;	// 0x32c39a0d
// declared property getter: - (id)previousSyncToken;	// 0x32c39a9d
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x32c38ba5
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x32c37a05
// declared property setter: - (void)setActionsOnly:(BOOL)only;	// 0x32c39b95
// declared property setter: - (void)setAddMemberURL:(id)url;	// 0x32c39979
// declared property setter: - (void)setBulkChangeCheckCTag:(id)tag;	// 0x32c39b61
// declared property setter: - (void)setBulkRequests:(id)requests;	// 0x32c39b29
// declared property setter: - (void)setEnsureUpdatedCTag:(BOOL)tag;	// 0x32c39a8d
// declared property setter: - (void)setMaxIndependentTasks:(unsigned)tasks;	// 0x32c399cd
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x32c399ad
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x32c39a59
// declared property setter: - (void)setPreviousCTag:(id)tag;	// 0x32c39a21
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x32c39ab1
// declared property setter: - (void)setUseMultiGet:(BOOL)get;	// 0x32c399ed
// declared property setter: - (void)setUseSyncCollection:(BOOL)collection;	// 0x32c39ae5
- (BOOL)shouldFetchMoreETags;	// 0x32c38ba1
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x32c3510d
- (void)startTaskGroup;	// 0x32c378fd
- (void)syncAway;	// 0x32c379f1
- (void)task:(id)task didFinishWithError:(id)error;	// 0x32c38801
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x32c35111
// declared property getter: - (BOOL)useMultiGet;	// 0x32c399dd
// declared property getter: - (BOOL)useSyncCollection;	// 0x32c39ad5
@end

