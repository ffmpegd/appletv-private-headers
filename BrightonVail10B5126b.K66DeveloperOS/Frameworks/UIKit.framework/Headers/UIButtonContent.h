/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSAttributedString, UIColor, UIImage, _UIGraphicsLetterpressStyle;

__attribute__((visibility("hidden")))
@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
	NSString *title;	// 4 = 0x4
	NSAttributedString *attributedTitle;	// 8 = 0x8
	UIImage *image;	// 12 = 0xc
	UIImage *background;	// 16 = 0x10
	UIColor *titleColor;	// 20 = 0x14
	UIColor *shadowColor;	// 24 = 0x18
}
@property(retain, nonatomic) NSAttributedString *attributedTitle;	// G=0x32b08545; S=0x32c64ed1; @synthesize
@property(retain, nonatomic) UIImage *background;	// G=0x32b07f79; S=0x32b0a7cd; @synthesize
@property(retain, nonatomic) UIImage *image;	// G=0x32b0a9e5; S=0x32af8789; @synthesize
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x32af8799; @dynamic
@property(retain, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;	// G=0x32b584bd; S=0x32d66089; 
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x32b58465; S=0x32b07ac1; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x32b084ed; S=0x32af86dd; @synthesize
@property(retain, nonatomic) UIColor *titleColor;	// G=0x32b5840d; S=0x32b07991; @synthesize
- (id)initWithCoder:(id)coder;	// 0x32c82ec1
// declared property getter: - (id)attributedTitle;	// 0x32b08545
// declared property getter: - (id)background;	// 0x32b07f79
- (id)copyWithZone:(NSZone *)zone;	// 0x32d65e4d
- (void)dealloc;	// 0x32b0a7dd
- (id)description;	// 0x32d66099
- (void)encodeWithCoder:(id)coder;	// 0x32d65f71
// declared property getter: - (id)image;	// 0x32b0a9e5
// declared property getter: - (BOOL)isEmpty;	// 0x32af8799
// declared property getter: - (id)letterpressStyle;	// 0x32b584bd
// declared property setter: - (void)setAttributedTitle:(id)title;	// 0x32c64ed1
// declared property setter: - (void)setBackground:(id)background;	// 0x32b0a7cd
// declared property setter: - (void)setImage:(id)image;	// 0x32af8789
// declared property setter: - (void)setLetterpressStyle:(id)style;	// 0x32d66089
// declared property setter: - (void)setShadowColor:(id)color;	// 0x32b07ac1
// declared property setter: - (void)setTitle:(id)title;	// 0x32af86dd
// declared property setter: - (void)setTitleColor:(id)color;	// 0x32b07991
// declared property getter: - (id)shadowColor;	// 0x32b58465
// declared property getter: - (id)title;	// 0x32b084ed
// declared property getter: - (id)titleColor;	// 0x32b5840d
@end

