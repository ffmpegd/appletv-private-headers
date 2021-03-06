/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRMediatorProvider : XXUnknownSuperclass <BRControlFactory, BRProvider> {
	NSMutableArray *_activeMediators;	// 4 = 0x4
	NSMutableArray *_mediators;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *mediators;	// G=0x363845; converted property
+ (id)provider;	// 0x363439
+ (id)providerWithControl:(id)control identifier:(id)identifier;	// 0x3635a9
+ (id)providerWithControlArray:(id)controlArray;	// 0x363761
+ (id)providerWithControls:(id)controls;	// 0x3636b1
+ (id)providerWithControlsAndIdentifiers:(id)controlsAndIdentifiers;	// 0x3635f5
+ (id)providerWithMediator:(id)mediator;	// 0x363485
+ (id)providerWithMediatorArray:(id)mediatorArray;	// 0x36355d
+ (id)providerWithMediators:(id)mediators;	// 0x3634d1
- (id)init;	// 0x363395
- (id)initWithMediators:(id)mediators;	// 0x36326d
- (long)_activeInsertIndexForMediator:(id)mediator;	// 0x363df5
- (void)_activeStateChanged:(id)changed;	// 0x363c71
- (void)_controlChanged:(id)changed;	// 0x363d79
- (void)_insertMediator:(id)mediator atIndex:(long)index;	// 0x363e8d
- (void)_subscribeToNotificationsForMediator:(id)mediator;	// 0x363b29
- (void)_unsubscribeToNotificationsForMediator:(id)mediator;	// 0x363be1
- (void)addMediator:(id)mediator;	// 0x363855
- (id)controlFactory;	// 0x363a99
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x363b15
- (id)dataAtIndex:(long)index;	// 0x363abd
- (long)dataCount;	// 0x363a9d
- (void)dealloc;	// 0x3633a9
- (id)hashForDataAtIndex:(long)index;	// 0x363add
- (void)insertMediator:(id)mediator after:(id)after;	// 0x363971
- (void)insertMediator:(id)mediator before:(id)before;	// 0x3639d1
- (id)mediatorWithIdentifier:(id)identifier;	// 0x363a1d
// converted property getter: - (id)mediators;	// 0x363845
- (void)removeMediator:(id)mediator;	// 0x363895
@end

