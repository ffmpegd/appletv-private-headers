/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl {
@private
	UITableViewCell *_cell;	// 72 = 0x48
	unsigned _style : 2;	// 76 = 0x4c
	unsigned _rotated : 1;	// 76 = 0x4c
	unsigned _rotating : 1;	// 76 = 0x4c
	unsigned _hiding : 1;	// 76 = 0x4c
	unsigned _reserved : 27;	// 76 = 0x4c
}
@property(assign, nonatomic, getter=isHiding) BOOL hiding;	// G=0x35362229; S=0x35362211; 
@property(assign, nonatomic, getter=isRotated) BOOL rotated;	// G=0x351fb329; S=0x353621e9; 
+ (id)_deleteImage;	// 0x351e66a1
+ (id)_deleteImageBackground;	// 0x3511b535
+ (id)_insertImage;	// 0x351e537d
+ (CGRect)_minusRect;	// 0x351e677d
+ (id)_multiSelectHighlightedImage;	// 0x35362179
+ (id)_multiSelectNotSelectedImage;	// 0x353620d1
+ (id)_multiSelectSelectedImage;	// 0x35362109
+ (CGSize)defaultSize;	// 0x3511b4cd
- (id)initWithTableViewCell:(id)tableViewCell editingStyle:(int)style;	// 0x351e37dd
- (id)_currentImage;	// 0x351e3b8d
- (id)_minusView;	// 0x351fb131
- (void)_multiselectColorChanged;	// 0x3536223d
- (void)_toggleRotate;	// 0x351fb109
- (void)_toggleRotateAnimationDidStop:(id)_toggleRotateAnimation finished:(BOOL)finished;	// 0x351fc425
- (void)_updateImageView;	// 0x351f7c59
// declared property getter: - (BOOL)isHiding;	// 0x35362229
// declared property getter: - (BOOL)isRotated;	// 0x351fb329
- (BOOL)isRotating;	// 0x353621fd
- (void)layoutSubviews;	// 0x351e39d1
- (void)setFrame:(CGRect)frame;	// 0x351e3989
// declared property setter: - (void)setHiding:(BOOL)hiding;	// 0x35362211
- (void)setHighlighted:(BOOL)highlighted;	// 0x351f7c19
// declared property setter: - (void)setRotated:(BOOL)rotated;	// 0x353621e9
- (void)setRotated:(BOOL)rotated animated:(BOOL)animated;	// 0x351e4425
- (void)setSelected:(BOOL)selected;	// 0x352517ed
@end

