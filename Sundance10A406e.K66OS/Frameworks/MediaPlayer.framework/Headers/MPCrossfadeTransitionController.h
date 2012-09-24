/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransitionController.h"


@interface MPCrossfadeTransitionController : MPTransitionController {
	int _statusBarHidden;	// 52 = 0x34
}
@property(assign, nonatomic) BOOL statusBarHidden;	// G=0x35cd1225; S=0x35cd1215; 
- (id)init;	// 0x35cd11b5
- (void)_animationDidFinish:(id)_animation;	// 0x35cd16c9
- (void)performTransition:(unsigned)transition;	// 0x35cd123d
// declared property setter: - (void)setStatusBarHidden:(BOOL)hidden;	// 0x35cd1215
// declared property getter: - (BOOL)statusBarHidden;	// 0x35cd1225
@end
