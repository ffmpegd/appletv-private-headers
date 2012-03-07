/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLRequest, NSDate, NSURL, NSMutableArray, NSError, NSMutableDictionary, CoreDAVRequestLogger, NSHTTPURLResponse, NSURLConnection, NSDictionary;
@protocol CoreDAVTaskDelegate, CoreDAVAccountInfoProvider, CoreDAVResponseBodyParser, CoreDAVTaskManager;

@interface CoreDAVTask : NSObject {
	id<CoreDAVTaskManager> _taskManager;	// 4 = 0x4
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 8 = 0x8
	int _numDownloadedElements;	// 12 = 0xc
	int _depth;	// 16 = 0x10
@private
	NSHTTPURLResponse *_response;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
	NSURLRequest *_request;	// 28 = 0x1c
	double _timeoutInterval;	// 32 = 0x20
	int _responseStatusCode;	// 40 = 0x28
	NSDate *_dateConnectionWentOut;	// 44 = 0x2c
	BOOL _didSendRequest;	// 48 = 0x30
	BOOL _didFailWithError;	// 49 = 0x31
	BOOL _didCancel;	// 50 = 0x32
	BOOL _didReceiveResponse;	// 51 = 0x33
	BOOL _didReceiveData;	// 52 = 0x34
	BOOL _didFinishLoading;	// 53 = 0x35
	BOOL _finished;	// 54 = 0x36
	void *_context;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 60 = 0x3c
	BOOL _justTriedTokenAuth;	// 61 = 0x3d
	BOOL _everTriedTokenAuth;	// 62 = 0x3e
	BOOL _requestIsCompressed;	// 63 = 0x3f
	BOOL _compressedRequestFailed;	// 64 = 0x40
	NSError *_passwordNotificationError;	// 68 = 0x44
	id<CoreDAVResponseBodyParser> _responseBodyParser;	// 72 = 0x48
	CoreDAVRequestLogger *_logger;	// 76 = 0x4c
	NSURL *_url;	// 80 = 0x50
	BOOL _allowAutomaticRedirects;	// 84 = 0x54
	id<CoreDAVTaskDelegate> _delegate;	// 88 = 0x58
	id _requestProgressBlock;	// 92 = 0x5c
	id _responseProgressBlock;	// 96 = 0x60
	id _completionBlock;	// 100 = 0x64
	NSError *_error;	// 104 = 0x68
	unsigned _totalBytesReceived;	// 108 = 0x6c
	NSMutableDictionary *_overriddenHeaders;	// 112 = 0x70
	NSMutableArray *_redirectHistory;	// 116 = 0x74
}
@property(assign, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x347ae575; S=0x347ae585; @synthesize=_accountInfoProvider
@property(assign, nonatomic) BOOL allowAutomaticRedirects;	// G=0x347ae7b9; S=0x347ae7c9; @synthesize=_allowAutomaticRedirects
@property(copy, nonatomic) id completionBlock;	// G=0x347ae731; S=0x347ae741; @synthesize=_completionBlock
@property(assign, nonatomic) void *context;	// G=0x347ae5b5; S=0x347ae5c5; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// G=0x347ae595; S=0x347ae5a5; @synthesize=_delegate
@property(assign) int depth;	// G=0x347ae5e9; S=0x347ae5f9; @synthesize=_depth
@property(retain, nonatomic) NSError *error;	// G=0x347ae765; S=0x347ae775; @synthesize=_error
@property(readonly, assign, getter=isFinished) BOOL finished;	// G=0x347ac20d; 
@property(readonly, assign) int numDownloadedElements;	// G=0x347ae361; converted property
@property(copy, nonatomic) id requestProgressBlock;	// G=0x347ae6c9; S=0x347ae6d9; @synthesize=_requestProgressBlock
@property(retain) id<CoreDAVResponseBodyParser> responseBodyParser;	// G=0x347ae671; S=0x347ae685; @synthesize=_responseBodyParser
@property(readonly, assign) NSDictionary *responseHeaders;	// G=0x347ae245; 
@property(copy, nonatomic) id responseProgressBlock;	// G=0x347ae6fd; S=0x347ae70d; @synthesize=_responseProgressBlock
@property(assign, nonatomic) int responseStatusCode;	// G=0x347ae6a9; S=0x347ae6b9; @synthesize=_responseStatusCode
@property(assign, nonatomic) id<CoreDAVTaskManager> taskManager;	// G=0x347ae555; S=0x347ae565; @synthesize=_taskManager
@property(assign) double timeoutInterval;	// G=0x347ae609; S=0x347ae63d; @synthesize=_timeoutInterval
@property(assign, nonatomic) unsigned totalBytesReceived;	// G=0x347ae799; S=0x347ae7a9; @synthesize=_totalBytesReceived
@property(readonly, assign) NSURL *url;	// G=0x347ae5d5; @synthesize=_url
+ (unsigned)uniqueQueryID;	// 0x347aa1f5
- (id)initWithURL:(id)url;	// 0x347aa209
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x347ac261
- (id)_applyStorageSession:(CFURLStorageSessionRef)session toRequest:(id)request;	// 0x347ac35d
- (id)_compressBodyData:(id)data;	// 0x347ab409
- (id)_createBodyData;	// 0x347ab575
- (void)_failImmediately;	// 0x347ab635
- (void)_handleBadPasswordResponse;	// 0x347ac3f9
- (BOOL)_includeGeneralHeaders;	// 0x347aab51
// declared property getter: - (id)accountInfoProvider;	// 0x347ae575
- (id)additionalHeaderValues;	// 0x347ab6c9
// declared property getter: - (BOOL)allowAutomaticRedirects;	// 0x347ae7b9
- (id)appleClientInfoString;	// 0x347aa7fd
- (unsigned)cachePolicy;	// 0x347ab755
// declared property getter: - (id)completionBlock;	// 0x347ae731
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x347acfc9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x347addf9
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x347ad179
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x347ac5b1
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x347add15
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x347ac569
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x347aca71
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x347acacd
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x347ad48d
- (void)connectionDidFinishLoading:(id)connection;	// 0x347ad785
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x347ad131
// declared property getter: - (void *)context;	// 0x347ae5b5
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x347aabb9
- (void)dealloc;	// 0x347aa2e5
// declared property getter: - (id)delegate;	// 0x347ae595
// declared property getter: - (int)depth;	// 0x347ae5e9
- (id)description;	// 0x347aa5d1
// declared property getter: - (id)error;	// 0x347ae765
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x347abfc9
- (id)httpMethod;	// 0x347aab45
// declared property getter: - (BOOL)isFinished;	// 0x347ac20d
- (id)lastRedirectURL;	// 0x347acaad
- (void)loadRequest:(id)request;	// 0x347aabf1
- (BOOL)markAsFinished;	// 0x347ac231
// converted property getter: - (int)numDownloadedElements;	// 0x347ae361
- (void)overrideRequestHeader:(id)header withValue:(id)value;	// 0x347ab6cd
- (void)performCoreDAVTask;	// 0x347ab759
- (void)reportStatusWithError:(id)error;	// 0x347ae371
- (id)requestBody;	// 0x347aab91
- (id)requestBodyStream;	// 0x347aab8d
// declared property getter: - (id)requestProgressBlock;	// 0x347ae6c9
- (void)reset;	// 0x347ae275
// declared property getter: - (id)responseBodyParser;	// 0x347ae671
// declared property getter: - (id)responseHeaders;	// 0x347ae245
// declared property getter: - (id)responseProgressBlock;	// 0x347ae6fd
// declared property getter: - (int)responseStatusCode;	// 0x347ae6a9
// declared property setter: - (void)setAccountInfoProvider:(id)provider;	// 0x347ae585
// declared property setter: - (void)setAllowAutomaticRedirects:(BOOL)redirects;	// 0x347ae7c9
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x347ae741
// declared property setter: - (void)setContext:(void *)context;	// 0x347ae5c5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x347ae5a5
// declared property setter: - (void)setDepth:(int)depth;	// 0x347ae5f9
// declared property setter: - (void)setError:(id)error;	// 0x347ae775
// declared property setter: - (void)setRequestProgressBlock:(id)block;	// 0x347ae6d9
// declared property setter: - (void)setResponseBodyParser:(id)parser;	// 0x347ae685
// declared property setter: - (void)setResponseProgressBlock:(id)block;	// 0x347ae70d
// declared property setter: - (void)setResponseStatusCode:(int)code;	// 0x347ae6b9
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x347ae565
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x347ae63d
// declared property setter: - (void)setTotalBytesReceived:(unsigned)received;	// 0x347ae7a9
- (BOOL)shouldLogResponseBody;	// 0x347aabed
- (void)startModal;	// 0x347ae265
// declared property getter: - (id)taskManager;	// 0x347ae555
- (void)tearDownResources;	// 0x347ab351
// declared property getter: - (double)timeoutInterval;	// 0x347ae609
// declared property getter: - (unsigned)totalBytesReceived;	// 0x347ae799
// declared property getter: - (id)url;	// 0x347ae5d5
- (BOOL)validate:(id *)validate;	// 0x347abfc5
@end
