/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVRelatedPlaybackView, BRMediaPlayer;
@protocol ATVRelatedPlaybackViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface ATVRelatedPlaybackViewController : XXUnknownSuperclass {
	BRMediaPlayer *_player;	// 4 = 0x4
	int _state;	// 8 = 0x8
	id<ATVRelatedPlaybackViewControllerDelegate> _delegate;	// 12 = 0xc
	ATVRelatedPlaybackView *_view;	// 16 = 0x10
}
@property(assign, nonatomic) __weak id<ATVRelatedPlaybackViewControllerDelegate> delegate;	// G=0x20dcc1; S=0x20dce1; @synthesize=_delegate
@property(readonly, assign, nonatomic) BRMediaPlayer *player;	// G=0x20dc91; @synthesize=_player
@property(assign, nonatomic) int state;	// G=0x20dca1; S=0x20dcb1; @synthesize=_state
@property(retain, nonatomic) ATVRelatedPlaybackView *view;	// G=0x20dcf5; S=0x20dd05; @synthesize=_view
- (id)initWithPlayer:(id)player;	// 0x20d019
- (void).cxx_destruct;	// 0x20dd2d
- (void)_cancelPreparation;	// 0x20d4a5
- (void)_didPrepareOptionsWithView:(id)view;	// 0x20d3e1
- (void)_endPresentationWithFinalState:(int)finalState;	// 0x20d4b1
- (void)_playerAssetChanged:(id)changed;	// 0x20d699
- (void)_playerProgressChanged;	// 0x20d4a9
- (void)_playerProgressChanged:(id)changed;	// 0x20d98d
- (void)_playerStateChanged:(id)changed;	// 0x20d90d
- (void)_presentationDidEnd;	// 0x20d4ad
- (id)_transportDataProvider;	// 0x20d349
- (void)dealloc;	// 0x20d0b1
// declared property getter: - (id)delegate;	// 0x20dcc1
// declared property getter: - (id)player;	// 0x20dc91
- (void)prepareOptions;	// 0x20d119
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x20dce1
// declared property setter: - (void)setState:(int)state;	// 0x20dcb1
// declared property setter: - (void)setView:(id)view;	// 0x20dd05
// declared property getter: - (int)state;	// 0x20dca1
// declared property getter: - (id)view;	// 0x20dcf5
- (id)viewWithPlayerView:(id)playerView;	// 0x20d2e9
@end
