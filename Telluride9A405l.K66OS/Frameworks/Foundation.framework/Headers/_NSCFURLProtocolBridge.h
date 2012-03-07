/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSURLProtocolClient.h"

@class NSURLProtocol, NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface _NSCFURLProtocolBridge : NSObject <NSURLProtocolClient> {
@private
	NSURLProtocol *_nsProt;	// 4 = 0x4
	CFURLProtocolRef _cfProt;	// 8 = 0x8
	CFURLAuthChallengeRef _cfChallenge;	// 12 = 0xc
	NSURLAuthenticationChallenge *_nsChallenge;	// 16 = 0x10
	BOOL _loading;	// 20 = 0x14
}
+ (void)barRequest:(CFURLRequestRef)request;	// 0x302936b5
+ (void)permitRequest:(CFURLRequestRef)request;	// 0x302936f9
+ (void)registerWithCFURLProtocol;	// 0x3025eead
- (id)initWithCFURLProtocol:(CFURLProtocolRef)cfurlprotocol request:(id)request protocolClass:(Class)aClass;	// 0x302973e1
- (void)URLProtocol:(id)protocol cachedResponseIsValid:(id)valid;	// 0x302980b1
- (void)URLProtocol:(id)protocol didCancelAuthenticationChallenge:(id)challenge;	// 0x3030f0dd
- (void)URLProtocol:(id)protocol didFailWithError:(id)error;	// 0x3030ef65
- (void)URLProtocol:(id)protocol didLoadData:(id)data;	// 0x3030ee9d
- (void)URLProtocol:(id)protocol didLoadData:(id)data lengthReceived:(long long)received;	// 0x3030edb9
- (void)URLProtocol:(id)protocol didReceiveAuthenticationChallenge:(id)challenge;	// 0x3030f021
- (void)URLProtocol:(id)protocol didReceiveResponse:(id)response cacheStoragePolicy:(unsigned)policy;	// 0x3030ece5
- (void)URLProtocol:(id)protocol wasRedirectedToRequest:(id)request redirectResponse:(id)response;	// 0x3030ebb5
- (void)URLProtocolDidFinishLoading:(id)urlprotocol;	// 0x3030eedd
- (void)_forgetClient;	// 0x302981c5
- (void)bridgeRelease;	// 0x302978c9
- (void)bridgeRetain;	// 0x302977c9
- (void)cachedResponseIsValid:(id)valid;	// 0x30298115
- (void)dealloc;	// 0x30298425
- (id)description;	// 0x3030e6c9
- (void)didFailWithError:(id)error;	// 0x3030eb39
- (void)didFinishLoading;	// 0x3030eb25
- (void)didLoadData:(id)data lengthReceived:(long long)received;	// 0x3030eb09
- (void)didReceiveAuthenticationChallenge:(id)challenge;	// 0x3030eb4d
- (void)didReceiveResponse:(id)response;	// 0x3030ead9
- (void)halt;	// 0x3030e80d
- (void)pushEvent:(id)event from:(const char *)from;	// 0x3030e775
- (void)resume;	// 0x3030e8a1
- (void)schedule:(CFRunLoopRef)schedule mode:(CFStringRef)mode;	// 0x3030e735
- (void)start;	// 0x302978e9
- (void)stop;	// 0x30298155
- (void)unschedule:(CFRunLoopRef)unschedule mode:(CFStringRef)mode;	// 0x3030e755
- (void)useCredential:(CFURLCredentialRef)credential forChallenge:(CFURLAuthChallengeRef)challenge;	// 0x3030e969
- (void)wasRedirectedToRequest:(id)request redirectResponse:(id)response;	// 0x3030ea75
@end

