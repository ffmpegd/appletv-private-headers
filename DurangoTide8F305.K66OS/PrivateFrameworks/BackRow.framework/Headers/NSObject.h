/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (IsMediaAsset)
- (BOOL)isMediaAsset;	// 0x329b35a1
@end

@interface NSObject (Accessibility)
@property(retain) id accessibilityLabel;	// G=0x329c92f9; S=0x329c92e1; converted property
- (float)accessibilityDelayForScreenContent;	// 0x329c92ad
- (BOOL)accessibilityElementIsHidden;	// 0x329c92b5
- (NSRange)accessibilityIndexRange;	// 0x329c92c1
// converted property getter: - (id)accessibilityLabel;	// 0x329c92f9
- (id)accessibilityLanguage;	// 0x329c92bd
- (id)accessibilityNonFocusableElements;	// 0x329c92a9
- (id)accessibilityScreenContent;	// 0x329c92d9
- (id)accessibilitySecondaryLabel;	// 0x329c92d5
- (id)accessibilityTraits;	// 0x329c92b9
- (id)accessibilityValue;	// 0x329c92cd
- (BOOL)isAccessibilityElement;	// 0x329c92d1
// converted property setter: - (void)setAccessibilityLabel:(id)label;	// 0x329c92e1
@end

@interface NSObject (BRDisplayString)
- (id)displayString;	// 0x3293bc95
@end

@interface NSObject (BRObjectAdditions)
- (void)attachDeallocationBlock:(id)block;	// 0x32a251fd
@end

