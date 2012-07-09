/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSString, BRImage, ATVGameMenuItemContents;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVGameMenuItem : BRControl {
	ATVGameMenuItemContents *_contents;	// 80 = 0x50
}
@property(copy) NSString *detailedText;	// G=0xf7bf9; S=0xf7c19; 
@property(assign) BOOL dimmed;	// G=0xf7c79; S=0xf7c9d; 
@property(copy) NSString *imageSeparatorText;	// G=0xf7b79; S=0xf7b99; 
@property(retain) BRImage *leftImage;	// G=0xf7ab9; S=0xf7ad9; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0xf7a79; S=0xf7a99; 
@property(retain) BRImage *rightImage;	// G=0xf7af9; S=0xf7b19; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0xf7b39; S=0xf7b59; 
@property(copy) NSString *rightJustifiedText;	// G=0xf7c39; S=0xf7c59; 
@property(copy) NSString *text;	// G=0xf7bb9; S=0xf7bd9; 
+ (CGRect)contentFrameForControl:(id)control;	// 0xf7db1
- (id)init;	// 0xf7785
- (float)accessibilityDelayForScreenContent;	// 0xf7da9
- (id)accessibilityLabel;	// 0xf7cc1
- (id)accessibilityTraitsList;	// 0xf7d39
- (void)controlWasFocused;	// 0xf78cd
- (void)controlWasUnfocused;	// 0xf791d
- (void)dealloc;	// 0xf7881
// declared property getter: - (id)detailedText;	// 0xf7bf9
// declared property getter: - (BOOL)dimmed;	// 0xf7c79
- (void)drawRect:(CGRect)rect;	// 0xf7a15
- (CGRect)focusCursorFrame;	// 0xf7991
// declared property getter: - (id)imageSeparatorText;	// 0xf7b79
- (BOOL)isAccessibilityElement;	// 0xf7cbd
// declared property getter: - (id)leftImage;	// 0xf7ab9
// declared property getter: - (id)leftImageProxy;	// 0xf7a79
// declared property getter: - (id)rightImage;	// 0xf7af9
// declared property getter: - (id)rightImageProxy;	// 0xf7b39
// declared property getter: - (id)rightJustifiedText;	// 0xf7c39
// declared property setter: - (void)setDetailedText:(id)text;	// 0xf7c19
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0xf7c9d
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0xf7b99
// declared property setter: - (void)setLeftImage:(id)image;	// 0xf7ad9
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0xf7a99
// declared property setter: - (void)setRightImage:(id)image;	// 0xf7b19
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0xf7b59
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0xf7c59
// declared property setter: - (void)setText:(id)text;	// 0xf7bd9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xf796d
// declared property getter: - (id)text;	// 0xf7bb9
@end
