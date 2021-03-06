/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLProtocol.h"


__attribute__((visibility("hidden")))
@interface NSCFURLProtocol : NSURLProtocol {
	CFURLProtocolRef cfProt;	// 8 = 0x8
}
+ (BOOL)canInitWithRequest:(id)request;	// 0x32529f31
+ (id)canonicalRequestForRequest:(id)request;	// 0x3252b141
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x325ca1b1
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x325ca2c9
- (void)_resumeLoading;	// 0x325ca6ed
- (void)_suspendLoading;	// 0x325ca6d9
- (void)dealloc;	// 0x325ca241
- (void)finalize;	// 0x325ca289
- (void)startLoading;	// 0x325ca6b1
- (void)stopLoading;	// 0x325ca6c5
@end

