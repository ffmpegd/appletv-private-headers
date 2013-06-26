/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIThreadSafeNode : NSObject {
	DOMNode *_node;	// 4 = 0x4
}
+ (id)threadSafeNodeWithNode:(id)node;	// 0x2f718f75
- (id)initWithNode:(id)node;	// 0x2f718ffd
- (id)_realNode;	// 0x2f719359
- (BOOL)conformsToProtocol:(id)protocol;	// 0x2f7191a1
- (void)dealloc;	// 0x2f7190d9
- (id)description;	// 0x2f719051
- (void)forwardInvocation:(id)invocation;	// 0x2f719265
- (BOOL)isEqual:(id)equal;	// 0x2f71917d
- (BOOL)isKindOfClass:(Class)aClass;	// 0x2f719125
- (id)methodSignatureForSelector:(SEL)selector;	// 0x2f7192f1
- (BOOL)respondsToSelector:(SEL)selector;	// 0x2f7191fd
@end
