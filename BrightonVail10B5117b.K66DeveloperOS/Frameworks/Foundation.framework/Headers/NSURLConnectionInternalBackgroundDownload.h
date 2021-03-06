/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSURLConnectionRequired.h"
#import "Foundation-Structs.h"
#import "SSDownloadManagerObserver.h"
#import "SSDownloadHandlerDelegate.h"
#import "NSURLConnectionInternal.h"

@class NSMutableArray, SSDownloadHandler, NSCountedSet, NSTimer, AsyncSSDownloadManager;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {
	CFRunLoopSourceRef _source;	// 36 = 0x24
	NSMutableArray *_pendingOps;	// 40 = 0x28
	NSCountedSet *_runloops;	// 44 = 0x2c
	SSDownloadHandler *_handler;	// 48 = 0x30
	AsyncSSDownloadManager *_manager;	// 52 = 0x34
	long long _downloadIdent;	// 56 = 0x38
	long long _ctLast;	// 64 = 0x40
	BOOL _terminated;	// 72 = 0x48
	NSTimer *_deferredStartTimer;	// 76 = 0x4c
}
+ (void)_enableLogging;	// 0x31a8c721
+ (id)sharedDownloadManagerForMediaKind:(id)mediaKind persistenceIdentifier:(id)identifier;	// 0x31a8a191
- (id)initWithInfo:(const InternalInit *)info;	// 0x31a8a4cd
- (void)_createNewDownload;	// 0x31a8b10d
- (long long)_getDownloadIdent;	// 0x31a8c75d
- (void)_invalidate;	// 0x31a8acc9
- (void)_invokeInvocation:(id)invocation withConnection:(id)connection;	// 0x31a8a945
- (void)_managerFailedToStartInTime;	// 0x31a8aec5
- (void)_postTerminalInvocation:(id)invocation;	// 0x31a8a9e1
- (void)_preTerminalInvocation:(id)invocation;	// 0x31a8a9c1
- (void)_sendTerminalDidFinishToDelegate:(id)_sendTerminal;	// 0x31a8ab65
- (void)_sendTerminalErrorToDelegate:(id)delegate;	// 0x31a8aa01
- (void)_sourcePerform;	// 0x31a8be51
- (void)_updateClientWithCurrentWrites:(id)currentWrites;	// 0x31a8c575
- (void)_updateDownloadState:(id)state;	// 0x31a8c775
- (void)cancel;	// 0x31a8bd35
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x31a8cb39
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x31a8caed
- (void)dealloc;	// 0x31a8ae61
- (id)description;	// 0x31a8a60d
- (void)downloadHandler:(id)handler cancelSession:(id)session;	// 0x31a8c385
- (void)downloadHandler:(id)handler handleAuthenticationSession:(id)session;	// 0x31a8c3f5
- (BOOL)downloadHandler:(id)handler pauseSession:(id)session;	// 0x31a8c3f1
- (void)downloadHandlerDidDisconnect:(id)downloadHandler;	// 0x31a8c331
- (void)invokeForDelegate:(id)delegate;	// 0x31a8a695
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x31a8cb85
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x31a8cbd1
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a8bf39
- (void)setDelegateQueue:(id)queue;	// 0x31a8c265
- (void)setHandlerForDownload:(id)download completionBlock:(id)block;	// 0x31a8af35
- (void)start;	// 0x31a8b5e1
- (void)unscheduleFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31a8c161
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x31a8caa1
@end

