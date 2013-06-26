/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "CAAction.h"
#import <NSObject.h> // Unknown library


@interface SKLayerModule : NSObject <CAAction> {
	id _layer;	// 4 = 0x4
	id _context;	// 8 = 0x8
	int _orientation;	// 12 = 0xc
}
@property(assign) CGRect bounds;	// G=0x35aa63d9; S=0x35aa6419; converted property
@property(retain) id context;	// G=0x35aa61c1; S=0x35aa617d; converted property
@property(readonly, retain) id layer;	// G=0x35aa61d1; converted property
+ (Class)layerClass;	// 0x35aa6219
+ (id)sharedModule;	// 0x35aa5f69
- (void)initLayer:(id)layer;	// 0x35aa634d
- (id)initWithFrame:(CGRect)frame;	// 0x35aa60c5
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x35aa65a1
- (id)addButtonWithFrame:(CGRect)frame text:(id)text target:(id)target action:(SEL)action;	// 0x35aa64e1
- (void)addContentToLayer:(id)layer;	// 0x35aa6351
// converted property getter: - (CGRect)bounds;	// 0x35aa63d9
// converted property getter: - (id)context;	// 0x35aa61c1
- (id)createLayer;	// 0x35aa6235
- (void)dealloc;	// 0x35aa6109
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x35aa659d
- (void)hide;	// 0x35aa6465
// converted property getter: - (id)layer;	// 0x35aa61d1
- (void)orderIn;	// 0x35aa65d5
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;	// 0x35aa65d9
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x35aa6419
// converted property setter: - (void)setContext:(id)context;	// 0x35aa617d
- (void)setFrame:(CGRect)frame;	// 0x35aa6355
- (void)setOrientation:(int)orientation;	// 0x35aa641d
- (BOOL)showing;	// 0x35aa648d
@end
