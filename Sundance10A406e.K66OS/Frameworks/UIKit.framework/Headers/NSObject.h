/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
@optional
- (id)debugDescription;
@required
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

@interface NSObject (UINibLoadingActionEstablishing)
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x30b359e9
@end

@interface NSObject (UINibLoadingAdditions)
- (void)awakeFromNib;	// 0x30a50519
@end

@interface NSObject (UIAccessibility)
@property(assign, nonatomic) CGPoint accessibilityActivationPoint;	// G=0x3098fa25; S=0x30b4a8b9; @dynamic
@property(retain) id accessibilityContainer;	// G=0x3098f761; S=0x3098f29d; converted property
@property(assign, nonatomic) BOOL accessibilityElementsHidden;	// G=0x309d4ce9; S=0x3099a355; @dynamic
@property(assign, nonatomic) CGRect accessibilityFrame;	// G=0x30b4a831; S=0x30996425; @dynamic
@property(copy, nonatomic) NSString *accessibilityHint;	// G=0x3098f419; S=0x30996479; @dynamic
@property(retain) id accessibilityIdentifier;	// G=0x3098f741; S=0x3098f629; converted property
@property(copy, nonatomic) NSString *accessibilityLabel;	// G=0x3098f26d; S=0x3098f63d; @dynamic
@property(retain, nonatomic) NSString *accessibilityLanguage;	// G=0x309d4b09; S=0x30a766f9; @dynamic
@property(assign, nonatomic) unsigned long long accessibilityTraits;	// G=0x3098f879; S=0x309963e9; @dynamic
@property(copy, nonatomic) NSString *accessibilityValue;	// G=0x3098f429; S=0x309963d1; @dynamic
@property(assign, nonatomic) BOOL accessibilityViewIsModal;	// G=0x30b4a881; S=0x30a107b5; @dynamic
@property(assign, nonatomic) BOOL isAccessibilityElement;	// G=0x3098f851; S=0x30996155; @dynamic
@property(assign, nonatomic) BOOL shouldGroupAccessibilityChildren;	// G=0x3098f8a1; S=0x30a6f6d9; @dynamic
// declared property getter: - (CGPoint)accessibilityActivationPoint;	// 0x3098fa25
// converted property getter: - (id)accessibilityContainer;	// 0x3098f761
// declared property getter: - (BOOL)accessibilityElementsHidden;	// 0x309d4ce9
// declared property getter: - (CGRect)accessibilityFrame;	// 0x30b4a831
// declared property getter: - (id)accessibilityHint;	// 0x3098f419
// converted property getter: - (id)accessibilityIdentifier;	// 0x3098f741
// declared property getter: - (id)accessibilityLabel;	// 0x3098f26d
// declared property getter: - (id)accessibilityLanguage;	// 0x309d4b09
// declared property getter: - (unsigned long long)accessibilityTraits;	// 0x3098f879
// declared property getter: - (id)accessibilityValue;	// 0x3098f429
// declared property getter: - (BOOL)accessibilityViewIsModal;	// 0x30b4a881
// declared property getter: - (BOOL)isAccessibilityElement;	// 0x3098f851
// declared property setter: - (void)setAccessibilityActivationPoint:(CGPoint)point;	// 0x30b4a8b9
// converted property setter: - (void)setAccessibilityContainer:(id)container;	// 0x3098f29d
// declared property setter: - (void)setAccessibilityElementsHidden:(BOOL)hidden;	// 0x3099a355
// declared property setter: - (void)setAccessibilityFrame:(CGRect)frame;	// 0x30996425
// declared property setter: - (void)setAccessibilityHint:(id)hint;	// 0x30996479
// converted property setter: - (void)setAccessibilityIdentifier:(id)identifier;	// 0x3098f629
// declared property setter: - (void)setAccessibilityLabel:(id)label;	// 0x3098f63d
// declared property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x30a766f9
// declared property setter: - (void)setAccessibilityTraits:(unsigned long long)traits;	// 0x309963e9
// declared property setter: - (void)setAccessibilityValue:(id)value;	// 0x309963d1
// declared property setter: - (void)setAccessibilityViewIsModal:(BOOL)modal;	// 0x30a107b5
// declared property setter: - (void)setIsAccessibilityElement:(BOOL)element;	// 0x30996155
// declared property setter: - (void)setShouldGroupAccessibilityChildren:(BOOL)groupAccessibilityChildren;	// 0x30a6f6d9
// declared property getter: - (BOOL)shouldGroupAccessibilityChildren;	// 0x3098f8a1
- (id)storedAccessibilityActivationPoint;	// 0x30b4a8a9
- (id)storedAccessibilityElementsHidden;	// 0x3098f9a9
- (id)storedAccessibilityFrame;	// 0x3098f751
- (id)storedAccessibilityTraits;	// 0x3098f439
- (id)storedAccessibilityViewIsModal;	// 0x309c4db5
- (id)storedIsAccessibilityElement;	// 0x3098f449
- (id)storedShouldGroupAccessibilityChildren;	// 0x3098f8c9
@end

@interface NSObject (UIAccessibilityFocus)
- (void)accessibilityElementDidBecomeFocused;	// 0x30b4a8f5
- (void)accessibilityElementDidLoseFocus;	// 0x30b4a8f9
- (BOOL)accessibilityElementIsFocused;	// 0x30b4a8fd
@end

@interface NSObject (UIAccessibilityAction)
- (void)accessibilityDecrement;	// 0x30b4a905
- (void)accessibilityIncrement;	// 0x30b4a901
- (BOOL)accessibilityPerformEscape;	// 0x30b4a90d
- (BOOL)accessibilityPerformMagicTap;	// 0x30b4a911
- (BOOL)accessibilityScroll:(int)scroll;	// 0x30b4a909
@end

@interface NSObject (UIAccessibilityContainer)
- (id)accessibilityElementAtIndex:(int)index;	// 0x30b4a919
- (int)accessibilityElementCount;	// 0x30b4a915
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x30b4a91d
@end

@interface NSObject (UIAccessibilityPrivate)
+ (BOOL)__accessibilityGuidedAccessStateEnabled;	// 0x30b4a925
- (void)_accessibilityFinalize;	// 0x308db60d
- (void)accessibilitySetIdentification:(id)identification;	// 0x308f9e71
@end

@interface NSObject (UIKitAccessibilityInterfaceBuilderSupport)
- (unsigned long long)defaultAccessibilityTraits;	// 0x30b4a929
- (BOOL)isAccessibilityElementByDefault;	// 0x30b4a93d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x30b4a941
@end

@interface NSObject (UIAppearanceAdditions)
+ (void)_installAppearanceSwizzleForSetter:(id)setter;	// 0x30a33031
@end

@interface NSObject (NSLayoutConstraintCallsThis)
- (id)className;	// 0x30ce3bb9
@end
