/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library

@class MPAudioVideoRoutingTableViewController;
@protocol MPAudioVideoRoutingViewControllerDelegate;

@interface MPAudioVideoRoutingViewController : UIViewController {
	MPAudioVideoRoutingTableViewController *_tableViewController;	// 156 = 0x9c
	id<MPAudioVideoRoutingViewControllerDelegate> _delegate;	// 160 = 0xa0
}
@property(assign, nonatomic) id<MPAudioVideoRoutingViewControllerDelegate> delegate;	// G=0x31a6ae79; S=0x31a6ae89; @synthesize=_delegate
+ (BOOL)hasWirelessDisplayRoutes;	// 0x31a6adb9
- (id)init;	// 0x31a6ab61
- (void)_doneAction:(id)action;	// 0x31a6ad49
- (void)dealloc;	// 0x31a6ac59
// declared property getter: - (id)delegate;	// 0x31a6ae79
- (void)loadView;	// 0x31a6aca5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31a6ae89
@end

