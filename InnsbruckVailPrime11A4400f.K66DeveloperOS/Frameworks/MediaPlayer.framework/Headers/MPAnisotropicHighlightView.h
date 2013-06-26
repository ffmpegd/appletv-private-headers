/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIKit/UIView.h>

@class UIImageView, UIImage;

@interface MPAnisotropicHighlightView : UIView {
	float _filteredHighlightX;	// 96 = 0x60
	UIImageView *_highlightImageView;	// 100 = 0x64
	id _motionManagerObserver;	// 104 = 0x68
}
@property(retain, nonatomic) UIImage *highlightImage;	// G=0x2e36c055; S=0x2e36c075; 
+ (id)_defaultHighlightImage;	// 0x2e36c095
+ (CGSize)defaultHighlightSize;	// 0x2e36bb21
- (id)initWithFrame:(CGRect)frame;	// 0x2e36bbfd
- (void).cxx_destruct;	// 0x2e36c101
- (void)dealloc;	// 0x2e36bfdd
// declared property getter: - (id)highlightImage;	// 0x2e36c055
// declared property setter: - (void)setHighlightImage:(id)image;	// 0x2e36c075
@end
