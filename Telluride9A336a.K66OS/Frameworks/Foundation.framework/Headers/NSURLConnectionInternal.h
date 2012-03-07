/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSURLAuthenticationChallengeSender.h"
#import "NSURLConnectionRequired.h"
#import "Foundation-Structs.h"

@class NSURL, NSURLRequest, NSOperationQueue, NSDictionary, NSURLConnection;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {
@private
	NSURLConnection *_connection;	// 4 = 0x4
	NSOperationQueue *_delegateQueue;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURLRequest *_originalRequest;	// 16 = 0x10
	NSURLRequest *_currentRequest;	// 20 = 0x14
	id _delegate;	// 24 = 0x18
	NSDictionary *_connectionProperties;	// 28 = 0x1c
	BOOL _connectionActive;	// 32 = 0x20
}
@property(assign, getter=isConnectionActive) BOOL connectionActive;	// G=0x3370dba5; S=0x3366546d; converted property
@property(readonly, retain) NSURLRequest *currentRequest;	// G=0x3370db55; converted property
@property(readonly, retain) NSURLRequest *originalRequest;	// G=0x3370db45; converted property
- (id)initWithInfo:(const InternalInit *)info;	// 0x33665319
- (id)_connectionProperties;	// 0x3370db35
- (void)_invalidate;	// 0x33665919
- (void)_setDelegateQueue:(id)queue;	// 0x3370db65
- (void)_withActiveConnectionAndDelegate:(id)activeConnectionAndDelegate;	// 0x33665599
- (void)_withConnection:(id)connection;	// 0x3370dcad
- (void)_withConnectionAndDelegate:(id)connectionAndDelegate onlyActive:(BOOL)active;	// 0x336655ed
- (void)_withConnectionDisconnectFromConnection;	// 0x336657c9
- (void)_withErrorForConnection:(id)connection;	// 0x3370ddb9
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x3370dec9
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3370dec5
// converted property getter: - (id)currentRequest;	// 0x3370db55
- (void)dealloc;	// 0x33665f7d
- (void)invokeForDelegate:(id)delegate;	// 0x3370dc25
// converted property getter: - (BOOL)isConnectionActive;	// 0x3370dba5
// converted property getter: - (id)originalRequest;	// 0x3370db45
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3370decd
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x3370ded1
// converted property setter: - (void)setConnectionActive:(BOOL)active;	// 0x3366546d
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x3370dec1
@end

