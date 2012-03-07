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
- (id)initWithURLString:(id)urlstring title:(id)title originalRequest:(id)request response:(id)response hasSubstituteData:(BOOL)data clientRedirectSource:(id)source;	// 0x353d5439
- (id)clientRedirectSource;	// 0x353d537d
- (void)dealloc;	// 0x353d556d
- (BOOL)hasSubstituteData;	// 0x353d535d
- (id)originalRequest;	// 0x353d531d
- (id)response;	// 0x353d533d
- (id)title;	// 0x353d52fd
- (id)url;	// 0x353d52dd
@end

