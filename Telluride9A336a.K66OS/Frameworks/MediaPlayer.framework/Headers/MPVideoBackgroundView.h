/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class UIImageView, NSString, UIImage;

@interface MPVideoBackgroundView : UIView {
	int _interfaceOrientation;	// 48 = 0x30
	UIView *_imageView;	// 52 = 0x34
	UIImageView *_iconView;	// 56 = 0x38
	UIImageView *_backgroundPlaceholderImageView;	// 60 = 0x3c
	UIView *_backgroundPlaceholderPosterImageView;	// 64 = 0x40
	UIView *_backgroundPlaceholderView;	// 68 = 0x44
	UIImageView *_customBackgroundImageView;	// 72 = 0x48
	NSString *_destinationName;	// 76 = 0x4c
	int _destinationPlaceholderStyle;	// 80 = 0x50
	BOOL _showDestinationPlaceholder;	// 84 = 0x54
	id _layoutSubviewsPostflightHandler;	// 88 = 0x58
}
@property(retain, nonatomic) UIImage *backgroundPlaceholderImage;	// G=0x35b75789; S=0x35b7559d; 
@property(retain, nonatomic) UIView *backgroundPlaceholderPosterImageView;	// G=0x35b75ced; S=0x35b756f5; @synthesize=_backgroundPlaceholderPosterImageView
@property(readonly, assign, nonatomic) UIView *backgroundPlaceholderView;	// G=0x35b757a9; 
@property(copy, nonatomic) NSString *destinationName;	// G=0x35b75cfd; S=0x35b758ad; @synthesize=_destinationName
@property(assign, nonatomic) int destinationPlaceholderStyle;	// G=0x35b75d0d; S=0x35b75905; @synthesize=_destinationPlaceholderStyle
@property(assign, nonatomic) int interfaceOrientation;	// G=0x35b75d1d; S=0x35b74ec5; @synthesize=_interfaceOrientation
@property(copy, nonatomic) id layoutSubviewsPostflightHandler;	// G=0x35b75d2d; S=0x35b75d3d; @synthesize=_layoutSubviewsPostflightHandler
- (id)initWithFrame:(CGRect)frame;	// 0x35b74b49
- (void)_createInformationalTitleView:(id *)view systemFont:(id)font lineBreakMode:(int)mode;	// 0x35b752a1
- (void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;	// 0x35b75985
- (void)_updateDestinationBackgroundViewAnimated:(BOOL)animated;	// 0x35b75999
// declared property getter: - (id)backgroundPlaceholderImage;	// 0x35b75789
// declared property getter: - (id)backgroundPlaceholderPosterImageView;	// 0x35b75ced
// declared property getter: - (id)backgroundPlaceholderView;	// 0x35b757a9
- (void)dealloc;	// 0x35b74bd1
// declared property getter: - (id)destinationName;	// 0x35b75cfd
// declared property getter: - (int)destinationPlaceholderStyle;	// 0x35b75d0d
// declared property getter: - (int)interfaceOrientation;	// 0x35b75d1d
- (void)layoutSubviews;	// 0x35b74d25
// declared property getter: - (id)layoutSubviewsPostflightHandler;	// 0x35b75d2d
- (id)qtIcon;	// 0x35b74ee5
// declared property setter: - (void)setBackgroundPlaceholderImage:(id)image;	// 0x35b7559d
// declared property setter: - (void)setBackgroundPlaceholderPosterImageView:(id)view;	// 0x35b756f5
- (void)setCustomBackgroundImage:(id)image;	// 0x35b7541d
// declared property setter: - (void)setDestinationName:(id)name;	// 0x35b758ad
// declared property setter: - (void)setDestinationPlaceholderStyle:(int)style;	// 0x35b75905
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x35b74ec5
// declared property setter: - (void)setLayoutSubviewsPostflightHandler:(id)handler;	// 0x35b75d3d
- (void)setShowDestinationPlaceholder:(BOOL)placeholder animated:(BOOL)animated;	// 0x35b75935
- (void)setShowQTAudioOnlyUI:(BOOL)ui;	// 0x35b74f1d
@end

