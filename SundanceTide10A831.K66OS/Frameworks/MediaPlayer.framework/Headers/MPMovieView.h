/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library

@protocol MPMovieViewDelegate;

@interface MPMovieView : UIView {
	id<MPMovieViewDelegate> _delegate;	// 84 = 0x54
}
@property(assign, nonatomic) id<MPMovieViewDelegate> delegate;	// G=0x36eb59c9; S=0x36eb59d9; @synthesize=_delegate
// declared property getter: - (id)delegate;	// 0x36eb59c9
- (void)didMoveToWindow;	// 0x36eb5981
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36eb59d9
- (void)willMoveToWindow:(id)window;	// 0x36eb5929
@end

