/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImageView.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UITapGestureRecognizer;
@protocol UIMovieSnapshotViewDelegate;

@interface UIMovieSnapshotView : UIImageView <UIGestureRecognizerDelegate> {
@private
	id<UIMovieSnapshotViewDelegate> _delegate;	// 52 = 0x34
	UITapGestureRecognizer *_tapGestureRecognizer;	// 56 = 0x38
}
@property(assign, nonatomic) id<UIMovieSnapshotViewDelegate> delegate;	// G=0x33bb7f05; S=0x33bb7f15; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame;	// 0x33bb7d91
- (void)_viewWasTapped:(id)tapped;	// 0x33bb7ebd
- (void)dealloc;	// 0x33bb7e55
// declared property getter: - (id)delegate;	// 0x33bb7f05
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x33bb7eb9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33bb7f15
@end

