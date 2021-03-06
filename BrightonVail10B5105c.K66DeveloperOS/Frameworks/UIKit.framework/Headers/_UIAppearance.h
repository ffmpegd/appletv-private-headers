/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMapTable, NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UIAppearance : NSObject {
	Class _CustomizableClass;	// 4 = 0x4
	NSArray *_containerList;	// 8 = 0x8
	NSMutableArray *_appearanceInvocations;	// 12 = 0xc
	NSMapTable *_invocationSources;	// 16 = 0x10
	NSMutableDictionary *_resettableInvocations;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) Class _CustomizableClass;	// G=0x348c7669; @synthesize
@property(retain, nonatomic, setter=_setResettableInvocations:) NSMutableDictionary *_resettableInvocations;	// G=0x348c7649; S=0x348c7659; @synthesize
+ (void)_addWindow:(id)window forSource:(id)source;	// 0x348c6e71
+ (id)_appearanceForClass:(Class)aClass withContainerList:(id)containerList;	// 0x34603741
+ (void)_applyInvocationsTo:(id)to window:(id)window;	// 0x34581db9
+ (void)_applyInvocationsTo:(id)to window:(id)window matchingSelector:(SEL)selector;	// 0x34581ddd
+ (id)_currentAppearanceSource;	// 0x346044bd
+ (BOOL)_hasCustomizationsForClass:(Class)aClass;	// 0x3455cbe9
+ (id)_pendingRecordInvocationsForSource:(id)source;	// 0x346044cd
+ (id)_recorderForSource:(id)source;	// 0x348c6f5d
+ (id)_recordersExcludingSource:(id)source withWindow:(id)window;	// 0x348c705d
+ (void)_removeWindow:(id)window forSource:(id)source;	// 0x348c6f21
+ (id)_rootAppearancesNode;	// 0x3455cc49
+ (void)_setCurrentAppearanceSource:(id)source;	// 0x348c6e61
+ (void)_setInvalidatesViewsOnAppearanceChange:(BOOL)change;	// 0x3459ced5
+ (id)_windowsForSource:(id)source;	// 0x346045a1
// declared property getter: - (Class)_CustomizableClass;	// 0x348c7669
- (id)_appearanceInvocations;	// 0x348c6e51
// declared property getter: - (id)_resettableInvocations;	// 0x348c7649
- (id)_resettableInvocationsCreateIfNecessary;	// 0x348c6c65
// declared property setter: - (void)_setResettableInvocations:(id)invocations;	// 0x348c7659
- (void)dealloc;	// 0x348c7445
- (void)forwardInvocation:(id)invocation;	// 0x34603b31
- (id)methodSignatureForSelector:(SEL)selector;	// 0x34603a4d
- (void)updateResettableSelectorsWithInvocation:(id)invocation removeSelector:(BOOL)selector;	// 0x348c6cc5
@end

