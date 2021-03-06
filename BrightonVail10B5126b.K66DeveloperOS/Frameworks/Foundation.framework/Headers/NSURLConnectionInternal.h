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

@class NSURLConnection, NSURL, NSOperationQueue, NSDictionary, NSURLRequest;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {
	NSURLConnection *_connection;	// 4 = 0x4
	NSOperationQueue *_delegateQueue;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURLRequest *_originalRequest;	// 16 = 0x10
	NSURLRequest *_currentRequest;	// 20 = 0x14
	id _delegate;	// 24 = 0x18
	NSDictionary *_connectionProperties;	// 28 = 0x1c
	BOOL _connectionActive;	// 32 = 0x20
}
@property(assign, getter=isConnectionActive) BOOL connectionActive;	// G=0x3197d665; S=0x318bede5; converted property
@property(readonly, retain) NSURLRequest *currentRequest;	// G=0x3197d611; converted property
@property(readonly, retain) NSURLRequest *originalRequest;	// G=0x318f9f81; converted property
- (id)initWithInfo:(const InternalInit *)info;	// 0x318be6bd
- (id)_connectionProperties;	// 0x3197d601
- (void)_invalidate;	// 0x318bf00d
- (void)_setDelegateQueue:(id)queue;	// 0x3197d621
- (void)_withActiveConnectionAndDelegate:(id)activeConnectionAndDelegate;	// 0x318bd0d9
- (void)_withConnection:(id)connection;	// 0x3197d775
- (void)_withConnectionAndDelegate:(id)connectionAndDelegate onlyActive:(BOOL)active;	// 0x318bd131
- (void)_withConnectionDisconnectFromConnection;	// 0x318bee89
- (void)_withErrorForConnection:(id)connection;	// 0x3197d881
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x3197d991
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3197d98d
// converted property getter: - (id)currentRequest;	// 0x3197d611
- (void)dealloc;	// 0x318bf101
- (void)invokeForDelegate:(id)delegate;	// 0x3197d6e5
// converted property getter: - (BOOL)isConnectionActive;	// 0x3197d665
// converted property getter: - (id)originalRequest;	// 0x318f9f81
- (void)performDefaultHandlingForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3197d995
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)challenge;	// 0x3197d999
// converted property setter: - (void)setConnectionActive:(BOOL)active;	// 0x318bede5
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x3197d989
@end

