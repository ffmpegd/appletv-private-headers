/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject {
@private
	NSHTTPCookieStorageInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned cookieAcceptPolicy;	// G=0x35e946d5; S=0x35e94709; converted property
+ (id)sharedHTTPCookieStorage;	// 0x35de36ad
- (id)init;	// 0x35e943a9
- (OpaqueCFHTTPCookieStorage *)_cookieStorage;	// 0x35e94301
- (id)_initWithSharedStorage;	// 0x35de3719
- (void)_readAcceptCookiesPreference;	// 0x35e941bd
- (void)_saveCookies;	// 0x35e9433d
- (void)_setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x35e9425d
// converted property getter: - (unsigned)cookieAcceptPolicy;	// 0x35e946d5
- (id)cookieRequestHeaderFieldsForURL:(id)url;	// 0x35e944c5
- (id)cookies;	// 0x35e943c1
- (id)cookiesForURL:(id)url;	// 0x35e945ed
- (void)dealloc;	// 0x35e9435d
- (void)deleteCookie:(id)cookie;	// 0x35e9445d
- (id)description;	// 0x35e947dd
- (void)setCookie:(id)cookie;	// 0x35e94419
// converted property setter: - (void)setCookieAcceptPolicy:(unsigned)policy;	// 0x35e94709
- (void)setCookies:(id)cookies forURL:(id)url mainDocumentURL:(id)url3;	// 0x35e9467d
- (void)setCookiesFromResponseHeader:(id)responseHeader forURL:(id)url policyBaseURL:(id)url3;	// 0x35e94585
- (id)sortedCookiesUsingDescriptors:(id)descriptors;	// 0x35e94909
@end
