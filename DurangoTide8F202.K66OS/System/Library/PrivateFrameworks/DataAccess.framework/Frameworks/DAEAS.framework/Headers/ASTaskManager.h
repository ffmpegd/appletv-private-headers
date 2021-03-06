/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicyManagerDelegate.h"
#import <DATaskManager.h> // Unknown library

@class ASTask, ASPolicyManager, ASGetOptionsTask, NSMutableDictionary, NSError;

@interface ASTaskManager : DATaskManager <ASPolicyManagerDelegate> {
@private
	ASPolicyManager *_policyManager;	// 52 = 0x34
	NSError *_versionError;	// 56 = 0x38
	NSMutableDictionary *_taskIDToTask;	// 60 = 0x3c
	ASTask *_modalGetOptionsTask;	// 64 = 0x40
	ASGetOptionsTask *_getOptionsTask;	// 68 = 0x44
	ASTask *_modalPolicyKeyUpdateTask;	// 72 = 0x48
}
@property(readonly, retain) ASPolicyManager *policyManager;	// G=0x32f1d0b9; converted property
- (id)initWithAccount:(id)account policyManager:(id)manager;	// 0x32f1e20d
- (void)_finishAllTasksWithError:(id)error;	// 0x32f1e3f1
- (void)_populateVersionDescriptions;	// 0x32f1e38d
- (id)_version;	// 0x32f1d1fd
- (void)cancelAllTasks;	// 0x32f1d0c9
- (void)cancelTask:(id)task;	// 0x32f1d439
- (void)cancelTaskWithID:(int)anId;	// 0x32f1d4c5
- (void)dealloc;	// 0x32f1e0e1
- (id)easProtocolVersion;	// 0x32f1d1b5
- (void)finishTask:(id)task withError:(id)error;	// 0x32f1d155
- (void)getOptionsTask:(id)task completedWithStatus:(int)status supportedCommands:(id)commands supportedVersions:(id)versions error:(id)error;	// 0x32f1e4b9
- (id)policyKey;	// 0x32f1d16d
// converted property getter: - (id)policyManager;	// 0x32f1d0b9
- (void)policyManagerFailedToUpdatePolicy:(id)updatePolicy;	// 0x32f1dbf1
- (void)policyManagerUpdatedPolicy:(id)policy;	// 0x32f1dc55
- (id)protocol;	// 0x32f1d191
- (void)requestEASVersionWithDelegateTask:(id)delegateTask;	// 0x32f1de21
- (void)setEASProtocolVersion:(id)version;	// 0x32f1d1d9
- (void)shutdown;	// 0x32f1d6d5
- (id)stateString;	// 0x32f1daa9
- (void)taskDidFinish:(id)task;	// 0x32f1d589
- (void)taskEndModal:(id)modal;	// 0x32f1d3b1
- (void)taskManagerDidAddTask:(id)taskManager;	// 0x32f1d925
- (void)taskManagerWillRemoveTask:(id)taskManager;	// 0x32f1d841
- (void)taskRequestModal:(id)modal;	// 0x32f1d3ed
- (void)updatePolicyKeyWithDelegateTask:(id)delegateTask;	// 0x32f1dccd
@end

