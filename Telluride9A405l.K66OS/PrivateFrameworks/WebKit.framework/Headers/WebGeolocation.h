/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebGeolocationPrivate;

__attribute__((visibility("hidden")))
@interface WebGeolocation : NSObject {
@private
	WebGeolocationPrivate *_private;	// 4 = 0x4
}
- (id)_initWithWebCoreGeolocation:(Geolocation *)webCoreGeolocation;	// 0x353ca4b9
- (void)dealloc;	// 0x353ca4fd
- (void)setIsAllowed:(BOOL)allowed;	// 0x353ca559
- (BOOL)shouldClearCache;	// 0x353ca4a5
@end

