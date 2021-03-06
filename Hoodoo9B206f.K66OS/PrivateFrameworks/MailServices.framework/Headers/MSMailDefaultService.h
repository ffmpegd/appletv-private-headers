/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, CPDistributedMessagingCenter;

@interface MSMailDefaultService : NSObject {
	BOOL _shouldLaunch;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	CPDistributedMessagingCenter *_server;	// 12 = 0xc
	CPDistributedMessagingCenter *_action;	// 16 = 0x10
	NSObject *_delegate;	// 20 = 0x14
}
@property(assign, nonatomic) NSObject *delegate;	// G=0x31e99081; S=0x31e990f1; 
@property(assign, nonatomic) BOOL shouldLaunchMobileMail;	// G=0x31e99821; S=0x31e99831; @synthesize=_shouldLaunch
+ (BOOL)shouldUseNewThreadingModel;	// 0x31e98d01
+ (id)smi_serverCommandName;	// 0x31e98cc9
+ (void)useNewThreadingModel;	// 0x31e98cf1
- (id)init;	// 0x31e98d11
- (id)_activeAction;	// 0x31e9979d
- (BOOL)_callMailServicesMethod:(id)method arg:(id)arg reply:(id *)reply error:(id *)error responseSelector:(SEL)selector;	// 0x31e993fd
- (id)_copyServer;	// 0x31e98e59
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x31e98ee1
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x31e98ee5
- (void)_mailServiceDidTerminate:(id)_mailService;	// 0x31e98ee9
- (void)_setActiveAction:(id)action responseSelector:(SEL)selector;	// 0x31e99265
- (void)_setServer:(id)server;	// 0x31e99145
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x31e98eb5
- (BOOL)_unitTestsAreEnabled;	// 0x31e98edd
- (void)cancel;	// 0x31e9980d
- (void)dealloc;	// 0x31e98de5
// declared property getter: - (id)delegate;	// 0x31e99081
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31e990f1
// declared property setter: - (void)setShouldLaunchMobileMail:(BOOL)launchMobileMail;	// 0x31e99831
// declared property getter: - (BOOL)shouldLaunchMobileMail;	// 0x31e99821
@end

