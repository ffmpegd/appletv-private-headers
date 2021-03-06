/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "DATask.h"
#import "NSURLConnectionDelegate.h"
#import "DAEAS-Structs.h"
#import <NSObject.h> // Unknown library

@class ASTaskManager, NSDate, NSHTTPURLResponse, NSURLConnection, NSURLRequest, ASItem, NSTimer, DATaskManager, ASParseContext, NSMutableSet, NSString, NSError;

@interface ASTask : NSObject <DATask, NSURLConnectionDelegate> {
	BOOL _haveSwitchedCodePage;	// 4 = 0x4
	BOOL _haveParsedCommand;	// 5 = 0x5
	ASItem *_currentlyParsingItem;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	NSHTTPURLResponse *_response;	// 16 = 0x10
	ASParseContext *_parseContext;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
@private
	NSURLRequest *_request;	// 28 = 0x1c
	NSMutableSet *_attemptedIdentities;	// 32 = 0x20
	BOOL _isFakingIt;	// 36 = 0x24
	BOOL _didSendRequest;	// 37 = 0x25
	BOOL _didFailWithError;	// 38 = 0x26
	BOOL _didCancel;	// 39 = 0x27
	BOOL _didReceiveResponse;	// 40 = 0x28
	BOOL _didReceiveData;	// 41 = 0x29
	BOOL _didFinishLoading;	// 42 = 0x2a
	BOOL _didReset;	// 43 = 0x2b
	BOOL _finished;	// 44 = 0x2c
	BOOL _inDelegateCallout;	// 45 = 0x2d
	BOOL _finishedByTimeoutEnforcer;	// 46 = 0x2e
	int _interfaceBinding;	// 48 = 0x30
	void *_context;	// 52 = 0x34
	BOOL _isExclusive;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 57 = 0x39
	BOOL _askedToCancelWhileModal;	// 58 = 0x3a
	BOOL _haveCheckedForTopLevelError;	// 59 = 0x3b
	BOOL _handledTopLevelError;	// 60 = 0x3c
	int _taskID;	// 64 = 0x40
	ASTaskManager *_taskManager;	// 68 = 0x44
	int _modalReason;	// 72 = 0x48
	int _modalPushCount;	// 76 = 0x4c
	NSString *_lastKnownPolicyKey;	// 80 = 0x50
	NSError *_passwordNotificationError;	// 84 = 0x54
	NSString *_lastKnownPassword;	// 88 = 0x58
	NSDate *_dateConnectionWentOut;	// 92 = 0x5c
	NSTimer *_timeoutEnforcer;	// 96 = 0x60
@protected
	BOOL _retry;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL askedToCancelWhileModal;	// G=0x318b1f31; S=0x318b1f41; @synthesize=_askedToCancelWhileModal
@property(assign, nonatomic) void *context;	// G=0x318b1e9d; S=0x318b1ead; @synthesize=_context
@property(retain, nonatomic) ASItem *currentlyParsingItem;	// G=0x318b1efd; S=0x318b1f0d; @synthesize=_currentlyParsingItem
@property(assign, nonatomic) id delegate;	// G=0x318b1e7d; S=0x318b1e8d; @synthesize=_delegate
@property(assign, nonatomic) int interfaceBinding;	// G=0x318b1ebd; S=0x318b1ecd; @synthesize=_interfaceBinding
@property(assign, nonatomic) BOOL isExclusive;	// G=0x318b1edd; S=0x318b1eed; @synthesize=_isExclusive
@property(retain, nonatomic) NSString *lastKnownPassword;	// G=0x318b1f51; S=0x318b1f61; @synthesize=_lastKnownPassword
@property(readonly, assign) int taskID;	// G=0x318ac441; converted property
@property(assign, nonatomic) DATaskManager *taskManager;	// G=0x318b1e6d; S=0x318b1d45; @synthesize=_taskManager
@property(retain, nonatomic) NSTimer *timeoutEnforcer;	// G=0x318b1f85; S=0x318b1e15; @synthesize=_timeoutEnforcer
+ (void)_restoreDefaultTaskTimeout;	// 0x318ac489
+ (void)_setDefaultTaskTimeout:(double)timeout;	// 0x318ac475
- (id)init;	// 0x318abee1
- (id)_HTTPMethodForRequest:(id)request;	// 0x318ac465
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x318af215
- (void)_continuePerformTask;	// 0x318ae16d
- (id)_createBodyData;	// 0x318adb95
- (id)_easVersion;	// 0x318ac535
- (void)_failImmediately;	// 0x318adbbd
- (void)_handleBadPasswordResponse;	// 0x318af361
- (BOOL)_handleCertificateError:(id)error;	// 0x318af561
- (BOOL)_handleRedirect:(id)redirect;	// 0x318af61d
- (void)_initFakeParseContext;	// 0x318b1b01
- (BOOL)_isWBXML;	// 0x318ac575
- (id)_policyKey;	// 0x318ac555
- (void)_popModal;	// 0x318adda5
- (void)_pushModalForReason:(int)reason;	// 0x318add41
- (BOOL)_shouldRedirectToHTTPForRequest:(id)request;	// 0x318ac461
- (BOOL)_shouldSendAuthForRequest:(id)request;	// 0x318ac45d
- (void)_timeoutEnforcerFired:(id)fired;	// 0x318ace49
- (id)_url;	// 0x318ac4f9
// declared property getter: - (BOOL)askedToCancelWhileModal;	// 0x318b1f31
- (BOOL)attemptRetryWithStatus:(int)status error:(id)error;	// 0x318aeb5d
- (void)cancelTaskWithReason:(int)reason underlyingError:(id)error;	// 0x318af0c5
- (BOOL)checkForErrorInContext:(id)context;	// 0x318ac6e9
- (id)command;	// 0x318ac5a9
- (int)commandCode;	// 0x318ac5c5
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x318b0a41
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x318b13b5
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x318b0add
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x318af9c5
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x318b107d
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x318af929
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x318b0391
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x318b03ed
- (int)connectionActionForResponse:(id)response;	// 0x318acd5d
- (void)connectionDidFinishLoading:(id)connection;	// 0x318b0cc5
- (id)contentType;	// 0x318acd2d
// declared property getter: - (void *)context;	// 0x318b1e9d
// declared property getter: - (id)currentlyParsingItem;	// 0x318b1efd
- (void)dealloc;	// 0x318ac025
// declared property getter: - (id)delegate;	// 0x318b1e7d
- (id)description;	// 0x318ac251
- (void)didCallOutToDelegate;	// 0x318aedd1
- (void)didProcessContext:(id)context;	// 0x318acd3d
- (BOOL)expectsWBXML;	// 0x318ac5a5
- (void)finishWithError:(id)error;	// 0x318aee59
- (BOOL)getTopLevelToken:(char *)token outStatusCodePage:(char *)page outStatusToken:(char *)token3;	// 0x318ac665
- (void)handleTopLevelErrorStatus:(id)status;	// 0x318b18b1
- (id)httpMethod;	// 0x318ac451
// declared property getter: - (int)interfaceBinding;	// 0x318b1ebd
// declared property getter: - (BOOL)isExclusive;	// 0x318b1edd
- (BOOL)isInCallOutToDelegate;	// 0x318aee49
// declared property getter: - (id)lastKnownPassword;	// 0x318b1f51
- (void)loadRequest:(id)request;	// 0x318acf1d
- (int)numDownloadedElements;	// 0x318b1cb5
- (id)parameterData;	// 0x318ac611
- (double)percentComplete;	// 0x318acba9
- (void)performTask;	// 0x318adc69
- (BOOL)processContext:(id)context;	// 0x318ac661
- (void)reportStatusWithError:(id)error;	// 0x318b1cb9
- (id)requestBody;	// 0x318ac619
- (id)requestBodyStreamOutKnownSize:(int *)size;	// 0x318ac615
- (BOOL)requiresEASVersionInformaton;	// 0x318acd55
- (void)reset;	// 0x318b1b81
- (id)responseContentType;	// 0x318ac401
// declared property setter: - (void)setAskedToCancelWhileModal:(BOOL)cancelWhileModal;	// 0x318b1f41
// declared property setter: - (void)setContext:(void *)context;	// 0x318b1ead
// declared property setter: - (void)setCurrentlyParsingItem:(id)item;	// 0x318b1f0d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x318b1e8d
// declared property setter: - (void)setInterfaceBinding:(int)binding;	// 0x318b1ecd
// declared property setter: - (void)setIsExclusive:(BOOL)exclusive;	// 0x318b1eed
// declared property setter: - (void)setLastKnownPassword:(id)password;	// 0x318b1f61
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x318b1d45
// declared property setter: - (void)setTimeoutEnforcer:(id)enforcer;	// 0x318b1e15
- (BOOL)shouldHandlePasswordErrors;	// 0x318af925
- (BOOL)shouldHoldPowerAssertion;	// 0x318acd59
- (BOOL)shouldLogIncomingData;	// 0x318acd51
- (BOOL)shouldReportTimeInNetwork;	// 0x318b1cb1
- (void)startModal;	// 0x318adde9
// converted property getter: - (int)taskID;	// 0x318ac441
// declared property getter: - (id)taskManager;	// 0x318b1e6d
- (void)taskManagerDidFailToUpdatePolicyKey;	// 0x318ae12d
- (void)taskManagerDidFindEASVersion;	// 0x318ae00d
- (void)taskManagerDidUpdatePolicyKey;	// 0x318ae09d
- (int)taskStatusForError:(id)error;	// 0x318acbb9
- (int)taskStatusForExchangeStatus:(int)exchangeStatus;	// 0x318acbb5
- (void)tearDownResources;	// 0x318adabd
// declared property getter: - (id)timeoutEnforcer;	// 0x318b1f85
- (double)timeoutInterval;	// 0x318ac4a1
- (void)willCallOutToDelegate;	// 0x318aec21
- (void)willProcessContext;	// 0x318acd39
@end

