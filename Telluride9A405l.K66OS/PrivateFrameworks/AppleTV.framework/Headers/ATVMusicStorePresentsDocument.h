/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVURLDocument.h"

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePresentsDocument : ATVURLDocument {
@private
	long _collectionNumber;	// 76 = 0x4c
	NSString *_requestID;	// 80 = 0x50
	NSURL *_redirectURL;	// 84 = 0x54
	NSDictionary *_catalogCollection;	// 88 = 0x58
}
@property(readonly, retain) NSDictionary *catalogCollection;	// G=0x35d282ed; converted property
@property(readonly, retain) NSURL *redirectURL;	// G=0x35d282dd; converted property
+ (id)documentWithURLRequest:(id)urlrequest requestID:(id)anId collectionNumber:(long)number;	// 0x35d281b1
- (id)initWithURLRequest:(id)urlrequest requestID:(id)anId collectionNumber:(long)number;	// 0x35d28205
// converted property getter: - (id)catalogCollection;	// 0x35d282ed
- (void)dealloc;	// 0x35d28269
- (void)documentLoadedWithCompletionHandler:(id)completionHandler;	// 0x35d282fd
// converted property getter: - (id)redirectURL;	// 0x35d282dd
@end

