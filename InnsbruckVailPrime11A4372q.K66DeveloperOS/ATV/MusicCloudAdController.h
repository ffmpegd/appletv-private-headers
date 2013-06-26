/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class MusicCloudAdView, NSString;

__attribute__((visibility("hidden")))
@interface MusicCloudAdController : BRViewController {
	MusicCloudAdView *_adView;	// 104 = 0x68
	NSString *movirURL;	// 108 = 0x6c
	id _selectionHandler;	// 112 = 0x70
}
@property(retain, nonatomic) MusicCloudAdView *adView;	// G=0x28a035; S=0x28a045; @synthesize=_adView
@property(retain, nonatomic) NSString *movieURL;	// G=0x28a06d; S=0x28a07d; @synthesize=movirURL
@property(copy, nonatomic) id selectionHandler;	// G=0x28a0a5; S=0x28a0b9; @synthesize=_selectionHandler
- (id)init;	// 0x289bb9
- (id)initWithDescription:(id)description;	// 0x289bcd
- (id)initWithDescription:(id)description prompt:(id)prompt;	// 0x289be1
- (void).cxx_destruct;	// 0x28a0c9
// declared property getter: - (id)adView;	// 0x28a035
- (BOOL)brEventAction:(id)action;	// 0x289ef1
- (void)layoutSubcontrols;	// 0x289fd5
// declared property getter: - (id)movieURL;	// 0x28a06d
// declared property getter: - (id)selectionHandler;	// 0x28a0a5
// declared property setter: - (void)setAdView:(id)view;	// 0x28a045
// declared property setter: - (void)setMovieURL:(id)url;	// 0x28a07d
// declared property setter: - (void)setSelectionHandler:(id)handler;	// 0x28a0b9
- (void)wasPushed;	// 0x289c9d
@end
