/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIInformalDelegate : NSObject {
	id _target;	// 4 = 0x4
	id _default;	// 8 = 0x8
}
@property(retain) id target;	// G=0x32117759; S=0x31ffc5bd; converted property
+ (id)informalDelegateWithDefaultTarget:(id)defaultTarget;	// 0x32117769
- (id)initWithDefaultTarget:(id)defaultTarget;	// 0x31ffa0ed
- (void)dealloc;	// 0x321177a9
- (void)forwardInvocation:(id)invocation;	// 0x320c76c1
- (id)methodSignatureForSelector:(SEL)selector;	// 0x320c7665
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3208af6d
// converted property setter: - (void)setTarget:(id)target;	// 0x31ffc5bd
// converted property getter: - (id)target;	// 0x32117759
@end
