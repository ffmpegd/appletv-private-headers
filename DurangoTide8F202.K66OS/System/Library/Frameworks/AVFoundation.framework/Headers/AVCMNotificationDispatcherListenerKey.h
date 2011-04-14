/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {
@private
	id _listener;	// 4 = 0x4
	/*function-pointer*/ void *_callback;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	void *_object;	// 16 = 0x10
}
+ (id)listenerKeyWithListener:(id)listener callback:(/*function-pointer*/ void *)callback name:(id)name object:(const void *)object;	// 0x3041f661
- (id)initWithListener:(id)listener callback:(/*function-pointer*/ void *)callback name:(id)name object:(const void *)object;	// 0x3041f5d9
- (id)copyWithZone:(NSZone *)zone;	// 0x3041f501
- (void)dealloc;	// 0x3041f591
- (unsigned)hash;	// 0x3041f3fd
- (BOOL)isEqual:(id)equal;	// 0x3041f451
@end
