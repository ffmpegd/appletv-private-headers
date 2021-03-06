/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class CADisplayLink, NSMutableSet;

@interface AXDisplayLinkManager : NSObject {
	CADisplayLink *_displayLink;	// 4 = 0x4
	BOOL _handlingDisplayRefresh;	// 8 = 0x8
	BOOL _shouldInvalidate;	// 9 = 0x9
	BOOL _shouldInvalidateAutomatically;	// 10 = 0xa
	NSMutableSet *_activeTargetActions;	// 12 = 0xc
	NSMutableSet *_addedTargetActions;	// 16 = 0x10
	NSMutableSet *_removedTargetActions;	// 20 = 0x14
}
@property(retain, nonatomic, setter=_setActiveTargetActions:) NSMutableSet *_activeTargetActions;	// G=0x2fe30101; S=0x2fe30111; @synthesize
@property(retain, nonatomic, setter=_setAddedTargetActions:) NSMutableSet *_addedTargetActions;	// G=0x2fe30121; S=0x2fe30131; @synthesize
@property(retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink;	// G=0x2fe2f9a5; S=0x2fe2fa65; 
@property(assign, nonatomic, getter=_isHandlingDisplayRefresh, setter=_setHandlingDisplayRefresh:) BOOL _handlingDisplayRefresh;	// G=0x2fe30161; S=0x2fe30171; @synthesize
@property(retain, nonatomic, setter=_setRemovedTargetActions:) NSMutableSet *_removedTargetActions;	// G=0x2fe30141; S=0x2fe30151; @synthesize
@property(assign, nonatomic, setter=_setShouldInvalidate:) BOOL _shouldInvalidate;	// G=0x2fe30181; S=0x2fe30191; @synthesize
@property(readonly, assign, nonatomic) double duration;	// G=0x2fe2f945; 
@property(readonly, assign, nonatomic) int frameInterval;	// G=0x2fe2f985; 
@property(readonly, assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x2fe2f921; 
@property(assign, nonatomic) BOOL shouldInvalidateAutomatically;	// G=0x2fe301a1; S=0x2fe2fd85; @synthesize=_shouldInvalidateAutomatically
@property(readonly, assign, nonatomic) double timestamp;	// G=0x2fe2f965; 
+ (id)currentDisplayLinkManager;	// 0x2fe2f695
+ (void)releaseCurrentDisplayLinkManager;	// 0x2fe2f745
- (id)init;	// 0x2fe2f7a9
// declared property getter: - (id)_activeTargetActions;	// 0x2fe30101
// declared property getter: - (id)_addedTargetActions;	// 0x2fe30121
- (void)_displayDidRefresh:(id)_display;	// 0x2fe2fdf5
// declared property getter: - (id)_displayLink;	// 0x2fe2f9a5
// declared property getter: - (BOOL)_isHandlingDisplayRefresh;	// 0x2fe30161
// declared property getter: - (id)_removedTargetActions;	// 0x2fe30141
// declared property setter: - (void)_setActiveTargetActions:(id)actions;	// 0x2fe30111
// declared property setter: - (void)_setAddedTargetActions:(id)actions;	// 0x2fe30131
// declared property setter: - (void)_setDisplayLink:(id)link;	// 0x2fe2fa65
// declared property setter: - (void)_setHandlingDisplayRefresh:(BOOL)refresh;	// 0x2fe30171
// declared property setter: - (void)_setRemovedTargetActions:(id)actions;	// 0x2fe30151
// declared property setter: - (void)_setShouldInvalidate:(BOOL)_set;	// 0x2fe30191
// declared property getter: - (BOOL)_shouldInvalidate;	// 0x2fe30181
- (void)addTarget:(id)target selector:(SEL)selector;	// 0x2fe2faf1
- (void)addTarget:(id)target selector:(SEL)selector frameInterval:(int)interval;	// 0x2fe2fb15
- (void)dealloc;	// 0x2fe2f8a1
// declared property getter: - (double)duration;	// 0x2fe2f945
// declared property getter: - (int)frameInterval;	// 0x2fe2f985
- (void)invalidate;	// 0x2fe2fde1
// declared property getter: - (BOOL)isPaused;	// 0x2fe2f921
- (void)removeTarget:(id)target selector:(SEL)selector;	// 0x2fe2fc31
// declared property setter: - (void)setShouldInvalidateAutomatically:(BOOL)invalidateAutomatically;	// 0x2fe2fd85
// declared property getter: - (BOOL)shouldInvalidateAutomatically;	// 0x2fe301a1
// declared property getter: - (double)timestamp;	// 0x2fe2f965
@end

