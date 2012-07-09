/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString, UIImageView, UIImage;

@interface MPVideoBackgroundView : UIView {
	int _interfaceOrientation;	// 84 = 0x54
	UIView *_imageView;	// 88 = 0x58
	UIImageView *_iconView;	// 92 = 0x5c
	UIImageView *_backgroundPlaceholderImageView;	// 96 = 0x60
	UIView *_backgroundPlaceholderPosterImageView;	// 100 = 0x64
	UIView *_backgroundPlaceholderView;	// 104 = 0x68
	UIImageView *_customBackgroundImageView;	// 108 = 0x6c
	NSString *_destinationName;	// 112 = 0x70
	int _destinationPlaceholderStyle;	// 116 = 0x74
	BOOL _showDestinationPlaceholder;	// 120 = 0x78
	id _layoutSubviewsPostflightHandler;	// 124 = 0x7c
}
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;	// G=0x3417ee45; S=0x3417ec71; 
@property(retain, nonatomic) UIView *backgroundPlaceholderPosterImageView;	// G=0x3417f33d; S=0x3417edb5; @synthesize=_backgroundPlaceholderPosterImageView
@property(readonly, assign, nonatomic) UIView *backgroundPlaceholderView;	// G=0x3417ee65; 
@property(copy, nonatomic) NSString *destinationName;	// G=0x3417f34d; S=0x3417ef51; @synthesize=_destinationName
@property(assign, nonatomic) int destinationPlaceholderStyle;	// G=0x3417f361; S=0x3417efa9; @synthesize=_destinationPlaceholderStyle
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3417f371; S=0x3417e639; @synthesize=_interfaceOrientation
@property(copy, nonatomic) id layoutSubviewsPostflightHandler;	// G=0x3417f381; S=0x3417f395; @synthesize=_layoutSubviewsPostflightHandler
- (id)initWithFrame:(CGRect)frame;	// 0x3417e2c9
- (void)_createInformationalTitleView:(id *)view systemFont:(id)font lineBreakMode:(int)mode;	// 0x3417e98d
- (void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;	// 0x3417f011
- (void)_updateDestinationBackgroundViewAnimated:(BOOL)animated;	// 0x3417f029
// declared property getter: - (id)backgroundPlaceholderImage;	// 0x3417ee45
// declared property getter: - (id)backgroundPlaceholderPosterImageView;	// 0x3417f33d
// declared property getter: - (id)backgroundPlaceholderView;	// 0x3417ee65
- (void)dealloc;	// 0x3417e351
// declared property getter: - (id)destinationName;	// 0x3417f34d
// declared property getter: - (int)destinationPlaceholderStyle;	// 0x3417f361
// declared property getter: - (int)interfaceOrientation;	// 0x3417f371
- (void)layoutSubviews;	// 0x3417e499
// declared property getter: - (id)layoutSubviewsPostflightHandler;	// 0x3417f381
- (id)qtIcon;	// 0x3417e659
// declared property setter: - (void)setBackgroundPlaceholderImage:(id)image;	// 0x3417ec71
// declared property setter: - (void)setBackgroundPlaceholderPosterImageView:(id)view;	// 0x3417edb5
- (void)setCustomBackgroundImage:(id)image;	// 0x3417eb0d
// declared property setter: - (void)setDestinationName:(id)name;	// 0x3417ef51
// declared property setter: - (void)setDestinationPlaceholderStyle:(int)style;	// 0x3417efa9
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x3417e639
// declared property setter: - (void)setLayoutSubviewsPostflightHandler:(id)handler;	// 0x3417f395
- (void)setShowDestinationPlaceholder:(BOOL)placeholder animated:(BOOL)animated;	// 0x3417efd1
- (void)setShowQTAudioOnlyUI:(BOOL)ui;	// 0x3417e691
@end
