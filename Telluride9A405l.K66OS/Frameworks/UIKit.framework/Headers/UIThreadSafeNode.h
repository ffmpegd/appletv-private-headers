/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIThreadSafeNode : NSObject {
@private
	DOMNode *_node;	// 4 = 0x4
}
+ (id)threadSafeNodeWithNode:(id)node;	// 0x32dcc155
- (id)initWithNode:(id)node;	// 0x32dcc1e5
- (id)_realNode;	// 0x32f2b4ed
- (BOOL)conformsToProtocol:(id)protocol;	// 0x32f2b335
- (void)dealloc;	// 0x32dcd63d
- (id)description;	// 0x32f2b235
- (void)forwardInvocation:(id)invocation;	// 0x32f2b401
- (BOOL)isEqual:(id)equal;	// 0x32f2b315
- (BOOL)isKindOfClass:(Class)aClass;	// 0x32f2b2bd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x32f2b491
- (BOOL)respondsToSelector:(SEL)selector;	// 0x32f2b395
@end

