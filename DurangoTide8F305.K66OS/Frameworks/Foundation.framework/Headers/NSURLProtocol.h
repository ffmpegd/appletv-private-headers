/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLProtocolInternal;

@interface NSURLProtocol : NSObject {
@private
	NSURLProtocolInternal *_internal;	// 4 = 0x4
}
+ (id)_canonicalRequestForRequest:(id)request allowCF:(BOOL)cf;	// 0x3276f8cd
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)canonical;	// 0x327e58e9
+ (Class)_protocolClassForRequest:(id)request;	// 0x32766989
+ (Class)_protocolClassForRequest:(id)request allowCF:(BOOL)cf;	// 0x3274de45
+ (id)_protocolWithRequest:(id)request cachedResponse:(id)response client:(id)client allowCF:(BOOL)cf;	// 0x3276f679
+ (id)_registeredClasses;	// 0x3275f939
+ (void)_removePropertyForKey:(id)key inRequest:(id)request;	// 0x327e5665
+ (BOOL)_requestIsCacheEquivalent:(id)equivalent toRequest:(id)request allowCF:(BOOL)cf;	// 0x327e576d
+ (BOOL)canInitWithRequest:(id)request;	// 0x327e58c5
+ (id)canonicalRequestForRequest:(id)request;	// 0x327e5859
+ (id)propertyForKey:(id)key inRequest:(id)request;	// 0x32772e41
+ (BOOL)registerClass:(Class)aClass;	// 0x3276030d
+ (void)removePropertyForKey:(id)key inRequest:(id)request;	// 0x327e567d
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x327e5695
+ (void)setProperty:(id)property forKey:(id)key inRequest:(id)request;	// 0x327668ad
+ (void)unregisterClass:(Class)aClass;	// 0x327e57e1
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x3276f6c1
- (void)_releaseProtocolClientReference;	// 0x3277004d
- (void)_resumeLoading;	// 0x327e5661
- (void)_suspendLoading;	// 0x327e565d
- (id)cachedResponse;	// 0x327e5641
- (id)client;	// 0x3276faf5
- (void)dealloc;	// 0x3277020d
- (id)request;	// 0x3276fb11
- (void)startLoading;	// 0x327e5839
- (void)stopLoading;	// 0x327e5819
@end
