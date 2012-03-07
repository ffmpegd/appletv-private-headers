/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL;

__attribute__((visibility("hidden")))
@interface ISCookieStorage : NSObject {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
}
@property(readonly, assign) NSURL *storageLocation;	// G=0x35f49f49; 
+ (id)sharedInstance;	// 0x35f49f4d
+ (id)sharedStorage;	// 0x35f499ad
- (id)init;	// 0x35f49909
- (id)initWithStorageLocation:(id)storageLocation;	// 0x35f4991d
- (id)cookieHeadersForURL:(id)url userIdentifier:(id)identifier;	// 0x35f49a4d
- (void)dealloc;	// 0x35f4996d
- (void)removeAllCookies;	// 0x35f49ed1
- (void)removeCookiesWithProperties:(id)properties;	// 0x35f49f45
- (void)setCookies:(id)cookies forUserIdentifier:(id)userIdentifier;	// 0x35f49b59
- (void)setCookiesForHTTPResponse:(id)httpresponse userIdentifier:(id)identifier;	// 0x35f49ca1
// declared property getter: - (id)storageLocation;	// 0x35f49f49
- (void)synchronizeCookies;	// 0x35f49f5d
@end

