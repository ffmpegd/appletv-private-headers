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
+ (void)barRequest:(CFURLRequestRef)request;	// 0x310466a5
+ (void)permitRequest:(CFURLRequestRef)request;	// 0x310466e9
+ (void)registerWithCFURLProtocol;	// 0x31011e9d
- (id)initWithCFURLProtocol:(CFURLProtocolRef)cfurlprotocol request:(id)request protocolClass:(Class)aClass;	// 0x3104a3d1
- (void)URLProtocol:(id)protocol cachedResponseIsValid:(id)valid;	// 0x3104b0a1
- (void)URLProtocol:(id)protocol didCancelAuthenticationChallenge:(id)challenge;	// 0x310c20cd
- (void)URLProtocol:(id)protocol didFailWithError:(id)error;	// 0x310c1f55
- (void)URLProtocol:(id)protocol didLoadData:(id)data;	// 0x310c1e8d
- (void)URLProtocol:(id)protocol didLoadData:(id)data lengthReceived:(long long)received;	// 0x310c1da9
- (void)URLProtocol:(id)protocol didReceiveAuthenticationChallenge:(id)challenge;	// 0x310c2011
- (void)URLProtocol:(id)protocol didReceiveResponse:(id)response cacheStoragePolicy:(unsigned)policy;	// 0x310c1cd5
- (void)URLProtocol:(id)protocol wasRedirectedToRequest:(id)request redirectResponse:(id)response;	// 0x310c1ba5
- (void)URLProtocolDidFinishLoading:(id)urlprotocol;	// 0x310c1ecd
- (void)_forgetClient;	// 0x3104b1b5
- (void)bridgeRelease;	// 0x3104a8b9
- (void)bridgeRetain;	// 0x3104a7b9
- (void)cachedResponseIsValid:(id)valid;	// 0x3104b105
- (void)dealloc;	// 0x3104b415
- (id)description;	// 0x310c16b9
- (void)didFailWithError:(id)error;	// 0x310c1b29
- (void)didFinishLoading;	// 0x310c1b15
- (void)didLoadData:(id)data lengthReceived:(long long)received;	// 0x310c1af9
- (void)didReceiveAuthenticationChallenge:(id)challenge;	// 0x310c1b3d
- (void)didReceiveResponse:(id)response;	// 0x310c1ac9
- (void)halt;	// 0x310c17fd
- (void)pushEvent:(id)event from:(const char *)from;	// 0x310c1765
- (void)resume;	// 0x310c1891
- (void)schedule:(CFRunLoopRef)schedule mode:(CFStringRef)mode;	// 0x310c1725
- (void)start;	// 0x3104a8d9
- (void)stop;	// 0x3104b145
- (void)unschedule:(CFRunLoopRef)unschedule mode:(CFStringRef)mode;	// 0x310c1745
- (void)useCredential:(CFURLCredentialRef)credential forChallenge:(CFURLAuthChallengeRef)challenge;	// 0x310c1959
- (void)wasRedirectedToRequest:(id)request redirectResponse:(id)response;	// 0x310c1a65
@end
