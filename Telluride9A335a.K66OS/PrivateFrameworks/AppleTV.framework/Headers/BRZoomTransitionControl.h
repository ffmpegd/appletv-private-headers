/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRTransitionControl.h"


__attribute__((visibility("hidden")))
@interface BRZoomTransitionControl : BRTransitionControl {
@private
	BRControl *_prerender;	// 56 = 0x38
	BOOL _prerenderAnimation;	// 60 = 0x3c
}
@property(assign) BOOL prerenderAnimation;	// G=0x3422c371; S=0x3422c361; converted property
- (void)_addPrerender;	// 0x3422c4b5
- (void)_removePrerender;	// 0x3422c53d
- (void)_takePrerenderSnapshot;	// 0x3422c5a9
- (void)_updateContentForTransitionState;	// 0x3422c7e1
- (void)_zoomInCompleted:(id)completed;	// 0x3422cee9
- (void)_zoomOutCompleted:(id)completed;	// 0x3422cf59
- (void)dealloc;	// 0x3422c2ad
- (void)layoutSubcontrols;	// 0x3422c3e1
// converted property getter: - (BOOL)prerenderAnimation;	// 0x3422c371
- (void)setContent:(id)content;	// 0x3422c2f9
// converted property setter: - (void)setPrerenderAnimation:(BOOL)animation;	// 0x3422c361
- (void)setTransitionedIn:(BOOL)anIn;	// 0x3422c381
@end

