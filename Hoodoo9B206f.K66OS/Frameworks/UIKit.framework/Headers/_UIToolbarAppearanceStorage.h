/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIToolbarAppearanceStorage : NSObject {
@private
	UIImage *backgroundImage;	// 4 = 0x4
	UIImage *miniBackgroundImage;	// 8 = 0x8
	UIImage *topBackgroundImage;	// 12 = 0xc
	UIImage *miniTopBackgroundImage;	// 16 = 0x10
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x35500725; S=0x35500735; @synthesize
@property(retain, nonatomic) UIImage *miniBackgroundImage;	// G=0x35500759; S=0x35500769; @synthesize
@property(retain, nonatomic) UIImage *miniTopBackgroundImage;	// G=0x355007c1; S=0x355007d1; @synthesize
@property(retain, nonatomic) UIImage *topBackgroundImage;	// G=0x3550078d; S=0x3550079d; @synthesize
// declared property getter: - (id)backgroundImage;	// 0x35500725
- (void)dealloc;	// 0x3550069d
// declared property getter: - (id)miniBackgroundImage;	// 0x35500759
// declared property getter: - (id)miniTopBackgroundImage;	// 0x355007c1
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x35500735
// declared property setter: - (void)setMiniBackgroundImage:(id)image;	// 0x35500769
// declared property setter: - (void)setMiniTopBackgroundImage:(id)image;	// 0x355007d1
// declared property setter: - (void)setTopBackgroundImage:(id)image;	// 0x3550079d
// declared property getter: - (id)topBackgroundImage;	// 0x3550078d
@end

