/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library

@class WebNavigationDataPrivate;

__attribute__((visibility("hidden")))
@interface WebNavigationData : NSObject {
@private
	WebNavigationDataPrivate *_private;	// 4 = 0x4
}
- (id)initWithURLString:(id)urlstring title:(id)title originalRequest:(id)request response:(id)response hasSubstituteData:(BOOL)data clientRedirectSource:(id)source;	// 0x339f9439
- (id)clientRedirectSource;	// 0x339f937d
- (void)dealloc;	// 0x339f956d
- (BOOL)hasSubstituteData;	// 0x339f935d
- (id)originalRequest;	// 0x339f931d
- (id)response;	// 0x339f933d
- (id)title;	// 0x339f92fd
- (id)url;	// 0x339f92dd
@end

