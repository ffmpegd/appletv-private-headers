/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSOperation.h> // Unknown library

@class NSURLConnection, NSHTTPURLResponse, NSMutableData, AARequest, AAResponse;

@interface AARequester : NSOperation {
	AARequest *_request;	// 12 = 0xc
	AAResponse *_response;	// 16 = 0x10
	NSURLConnection *_urlConnection;	// 20 = 0x14
	id _handler;	// 24 = 0x18
	NSMutableData *_data;	// 28 = 0x1c
	NSHTTPURLResponse *_httpResponse;	// 32 = 0x20
	Class _responseClass;	// 36 = 0x24
	BOOL _isExecuting;	// 40 = 0x28
	BOOL _isFinished;	// 41 = 0x29
	BOOL _canceled;	// 42 = 0x2a
@private
	BOOL _isCanceled;	// 43 = 0x2b
}
@property(assign, nonatomic, getter=isCanceled) BOOL canceled;	// G=0x3389ffa5; S=0x3389ffb5; @synthesize=_isCanceled
@property(assign, nonatomic, getter=isExecuting) BOOL executing;	// G=0x3389ff65; S=0x3389ff75; @synthesize=_isExecuting
@property(assign, nonatomic, getter=isFinished) BOOL finished;	// G=0x3389ff85; S=0x3389ff95; @synthesize=_isFinished
- (id)initWithRequest:(id)request handler:(id)handler;	// 0x3389f76d
- (void)_callHandler;	// 0x3389fa99
- (void)cancel;	// 0x3389f911
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x3389faed
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3389fe69
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x3389fbad
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3389fd41
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3389fcf5
- (void)connectionDidFinishLoading:(id)connection;	// 0x3389fd91
- (void)dealloc;	// 0x3389f861
// declared property getter: - (BOOL)isCanceled;	// 0x3389ffa5
// declared property getter: - (BOOL)isExecuting;	// 0x3389ff65
// declared property getter: - (BOOL)isFinished;	// 0x3389ff85
// declared property setter: - (void)setCanceled:(BOOL)canceled;	// 0x3389ffb5
// declared property setter: - (void)setExecuting:(BOOL)executing;	// 0x3389ff75
// declared property setter: - (void)setFinished:(BOOL)finished;	// 0x3389ff95
- (void)start;	// 0x3389f979
@end

