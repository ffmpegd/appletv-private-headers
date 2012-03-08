/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebGeolocationPolicyListener.h"
#import "NSObject.h"


@protocol WebGeolocationPolicyListener <NSObject>
- (void)allow;
- (void)deny;
- (BOOL)shouldClearCache;
@end

__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject <WebGeolocationPolicyListener> {
@private
	RefPtr<WebCore::Geolocation> _geolocation;	// 4 = 0x4
}
- (id)initWithGeolocation:(Geolocation *)geolocation;	// 0x302d4ae1
- (id).cxx_construct;	// 0x302d4659
- (void).cxx_destruct;	// 0x302d4b51
- (void)allow;	// 0x302d4b99
- (void)deny;	// 0x302d4b85
- (BOOL)shouldClearCache;	// 0x302d4645
@end
