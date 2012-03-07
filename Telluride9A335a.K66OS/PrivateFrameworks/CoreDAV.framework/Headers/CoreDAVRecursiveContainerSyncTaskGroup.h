/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVDeleteTaskDelegate.h"
#import "CoreDAVPutTaskDelegate.h"
#import "CoreDAVTaskGroup.h"
#import "CoreDAVTaskGroupDelegate.h"
#import "CoreDAVMkcolTaskDelegate.h"
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSMutableSet, NSURL, NSString, NSMutableArray, NSArray, NSMutableDictionary, NSDictionary;
@protocol CoreDAVLocalDBTreeInfoProvider;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {
	int _phase;	// 44 = 0x2c
	NSURL *_folderURL;	// 48 = 0x30
	NSString *_previousCTag;	// 52 = 0x34
	NSString *_nextCTag;	// 56 = 0x38
	NSString *_previousSyncToken;	// 60 = 0x3c
	NSString *_nextSyncToken;	// 64 = 0x40
	NSString *_previousPTag;	// 68 = 0x44
	NSString *_nextPTag;	// 72 = 0x48
	NSArray *_actions;	// 76 = 0x4c
	void *_context;	// 80 = 0x50
	unsigned _multiGetBatchSize;	// 84 = 0x54
	NSMutableArray *_unsubmittedTasks;	// 88 = 0x58
	unsigned _maxIndependentTasks;	// 92 = 0x5c
	NSURL *_addMemberURL;	// 96 = 0x60
	BOOL _useMultiGet;	// 100 = 0x64
	NSMutableSet *_syncReportDeletedURLs;	// 104 = 0x68
	NSMutableDictionary *_leafURLToETag;	// 108 = 0x6c
	NSMutableArray *_childCollectionURL;	// 112 = 0x70
	Class _appSpecificDataItemClass;	// 116 = 0x74
	Class _appSpecificContainerItemClass;	// 120 = 0x78
	BOOL _syncItemOrder;	// 124 = 0x7c
	NSMutableDictionary *_folderURLToChildrenURLOrder;	// 128 = 0x80
	BOOL _preflightCTag;	// 132 = 0x84
}
@property(readonly, assign) void *context;	// G=0x3007c9cd; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVLocalDBTreeInfoProvider> delegate;	// @dynamic
@property(readonly, assign) NSURL *folderURL;	// G=0x3007c955; @synthesize=_folderURL
@property(readonly, assign) NSDictionary *folderURLToChildrenURLOrder;	// G=0x3007c9dd; @synthesize=_folderURLToChildrenURLOrder
@property(assign) unsigned maxIndependentTasks;	// G=0x3007c935; S=0x3007c945; @synthesize=_maxIndependentTasks
@property(assign) unsigned multiGetBatchSize;	// G=0x3007c915; S=0x3007c925; @synthesize=_multiGetBatchSize
@property(retain) NSString *nextCTag;	// G=0x3007c9ed; S=0x3007ca01; @synthesize=_nextCTag
@property(assign) BOOL preflightCTag;	// G=0x3007c975; S=0x3007c985; @synthesize=_preflightCTag
@property(readonly, assign) NSString *previousCTag;	// G=0x3007c965; @synthesize=_previousCTag
@property(retain) NSString *previousSyncToken;	// G=0x3007c995; S=0x3007c9a9; @synthesize=_previousSyncToken
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousPTag:(id)tag3 previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x30078a15
- (id)_copyContainerParserMappings;	// 0x3007c7e5
- (void)_folderModTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x3007b31d
- (void)_foundChildrenOrder:(id)order inFolderWithURL:(id)url;	// 0x30078f59
- (void)_getDataPayloads;	// 0x3007a27d
- (void)_getItemTags;	// 0x30079ebd
- (void)_getTask:(id)task finishedWithParsedContents:(id)parsedContents error:(id)error;	// 0x3007c2cd
- (void)_getTopFolderTags;	// 0x30079ce5
- (void)_postTask:(id)task didFinishWithError:(id)error;	// 0x3007b091
- (void)_pushActions;	// 0x3007943d
- (unsigned)_submitTasks;	// 0x30079091
- (void)_syncReportTask:(id)task didFinishWithError:(id)error;	// 0x3007b8f5
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)contents;	// 0x30079315
- (void)_tearDownAllUnsubmittedTasks;	// 0x30078e25
- (void)bailWithError:(id)error;	// 0x3007900d
- (void)cancelTaskGroup;	// 0x30079051
// declared property getter: - (void *)context;	// 0x3007c9cd
- (id)copyFolderMultiGetTaskWithURLs:(id)urls;	// 0x3007c849
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x3007c805
- (id)dataContentType;	// 0x3007c88d
- (void)dealloc;	// 0x30078c05
- (void)deleteTask:(id)task completedWithError:(id)error;	// 0x3007b681
- (id)description;	// 0x30078d41
// declared property getter: - (id)folderURL;	// 0x3007c955
// declared property getter: - (id)folderURLToChildrenURLOrder;	// 0x3007c9dd
// declared property getter: - (unsigned)maxIndependentTasks;	// 0x3007c935
- (void)mkcolTask:(id)task parsedPropStats:(id)stats error:(id)error;	// 0x3007b579
// declared property getter: - (unsigned)multiGetBatchSize;	// 0x3007c915
// declared property getter: - (id)nextCTag;	// 0x3007c9ed
// declared property getter: - (BOOL)preflightCTag;	// 0x3007c975
// declared property getter: - (id)previousCTag;	// 0x3007c965
// declared property getter: - (id)previousSyncToken;	// 0x3007c995
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x3007bead
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x3007b589
- (void)putTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x3007abc9
// declared property setter: - (void)setMaxIndependentTasks:(unsigned)tasks;	// 0x3007c945
// declared property setter: - (void)setMultiGetBatchSize:(unsigned)size;	// 0x3007c925
// declared property setter: - (void)setNextCTag:(id)tag;	// 0x3007ca01
// declared property setter: - (void)setPreflightCTag:(BOOL)tag;	// 0x3007c985
// declared property setter: - (void)setPreviousSyncToken:(id)token;	// 0x3007c9a9
- (BOOL)shouldSyncChildWithResourceType:(id)resourceType;	// 0x3007c8d1
- (void)startTaskGroup;	// 0x3007ab71
- (void)syncAway;	// 0x3007abb9
- (void)task:(id)task didFinishWithError:(id)error;	// 0x3007b599
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x30078db5
@end

