/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface _UIDynamicAnimation : NSObject {
@private
	id _completion;	// 4 = 0x4
	int _state;	// 8 = 0x8
	unsigned _began : 1;	// 12 = 0xc
	unsigned _running : 1;	// 12 = 0xc
	unsigned _yield : 1;	// 12 = 0xc
	unsigned _grouped : 1;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int state;	// G=0x3301ee4d; 
+ (void)_updateAnimations:(id)animations;	// 0x3301dd09
+ (id)dynamicAnimationForView:(id)view withInitialValue:(double)initialValue velocity:(double)velocity type:(int)type anchorPoint:(CGPoint)point;	// 0x3301e341
- (BOOL)_animateForInterval:(double)interval;	// 0x3301e981
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x3301eecd
- (void)_appendSubclassDescription:(id)description atLevel:(int)level;	// 0x3301eec9
- (void)_callAppliers:(id)appliers additionalEndAppliers:(id)appliers2 done:(BOOL)done;	// 0x3301e985
- (void)_cancelWithAppliers:(id)appliers;	// 0x3301ee05
- (BOOL)_isGrouped;	// 0x3301ee89
- (BOOL)_isRunning;	// 0x3301eeb5
- (void)_setGrouped:(BOOL)grouped;	// 0x3301ee9d
- (void)_setShouldYield:(BOOL)_set;	// 0x3301ee71
- (BOOL)_shouldYield;	// 0x3301ee5d
- (void)_stopAnimation;	// 0x3301e91d
- (void)dealloc;	// 0x3301e8d1
- (id)description;	// 0x3301f10d
- (void)runWithCompletion:(id)completion;	// 0x3301ed85
- (void)runWithCompletion:(id)completion forScreen:(id)screen runLoopMode:(id)mode;	// 0x3301ea29
// declared property getter: - (int)state;	// 0x3301ee4d
- (void)stop;	// 0x3301eda5
@end
