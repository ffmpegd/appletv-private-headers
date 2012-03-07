/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDAnimationTargetElement;

__attribute__((visibility("hidden")))
@interface PDTimeCondition : NSObject {
@private
	BOOL mHasDelay;	// 4 = 0x4
	int mDelay;	// 8 = 0x8
	int mTriggerEvent;	// 12 = 0xc
	PDAnimationTargetElement *mTgtElement;	// 16 = 0x10
}
@property(assign) int delay;	// G=0x356f7cb9; S=0x356f7cc9; converted property
@property(retain) id tgtElement;	// G=0x356f7d09; S=0x356f8cf5; converted property
@property(assign) int triggerEvent;	// G=0x356f7ce9; S=0x356f7cf9; converted property
- (id)init;	// 0x356f8cc9
- (void)dealloc;	// 0x356f8d35
// converted property getter: - (int)delay;	// 0x356f7cb9
- (BOOL)hasDelay;	// 0x356f7ca9
// converted property setter: - (void)setDelay:(int)delay;	// 0x356f7cc9
// converted property setter: - (void)setTgtElement:(id)element;	// 0x356f8cf5
// converted property setter: - (void)setTriggerEvent:(int)event;	// 0x356f7cf9
// converted property getter: - (id)tgtElement;	// 0x356f7d09
// converted property getter: - (int)triggerEvent;	// 0x356f7ce9
@end

