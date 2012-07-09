/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
	BOOL _opaque;	// 4 = 0x4
	BOOL _selected;	// 5 = 0x5
	CGSize _size;	// 8 = 0x8
	UIColor *_backgroundColor;	// 16 = 0x10
	UIColor *_sectionBorderColor;	// 20 = 0x14
	UIColor *_separatorColor;	// 24 = 0x18
	UIColor *_topShadowColor;	// 28 = 0x1c
	UIColor *_bottomShadowColor;	// 32 = 0x20
	UIColor *_fillColor;	// 36 = 0x24
	UIColor *_selectionColor;	// 40 = 0x28
	float _leftPhase;	// 44 = 0x2c
	float _rightPhase;	// 48 = 0x30
	int _sectionLocation;	// 52 = 0x34
	int _selectionStyle;	// 56 = 0x38
}
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x30cd8829; S=0x30cd8749; @synthesize=_backgroundColor
@property(retain, nonatomic) UIColor *bottomShadowColor;	// G=0x30cd88d9; S=0x30cd8819; @synthesize=_bottomShadowColor
@property(retain, nonatomic) UIColor *fillColor;	// G=0x30cd9609; S=0x30cd89a1; @synthesize=_fillColor
@property(assign, nonatomic) float leftPhase;	// G=0x30cd95e9; S=0x30cd89d1; @synthesize=_leftPhase
@property(assign, nonatomic) BOOL opaque;	// G=0x30cd95a5; S=0x30cd88ed; @synthesize=_opaque
@property(assign, nonatomic) float rightPhase;	// G=0x30cd95f9; S=0x30cd89e1; @synthesize=_rightPhase
@property(retain, nonatomic) UIColor *sectionBorderColor;	// G=0x30cd9619; S=0x30cd8971; @synthesize=_sectionBorderColor
@property(assign, nonatomic) int sectionLocation;	// G=0x30cd94f9; S=0x30cd89f1; @synthesize=_sectionLocation
@property(assign, nonatomic) BOOL selected;	// G=0x30cd950d; S=0x30cd864d; @synthesize=_selected
@property(retain, nonatomic) UIColor *selectionColor;	// G=0x30ebb2f1; S=0x30cd89c1; @synthesize=_selectionColor
@property(assign, nonatomic) int selectionStyle;	// G=0x30ebb301; S=0x30cd8a01; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x30d7fc41; S=0x30cd8981; @synthesize=_separatorColor
@property(assign, nonatomic) CGSize size;	// G=0x30cd94dd; S=0x30cd865d; @synthesize=_size
@property(retain, nonatomic) UIColor *topShadowColor;	// G=0x30cd96f9; S=0x30cd8991; @synthesize=_topShadowColor
// declared property getter: - (id)backgroundColor;	// 0x30cd8829
// declared property getter: - (id)bottomShadowColor;	// 0x30cd88d9
- (id)copyWithZone:(NSZone *)zone;	// 0x30cd9709
- (void)dealloc;	// 0x30cd9b41
- (id)description;	// 0x30ebb0d1
// declared property getter: - (id)fillColor;	// 0x30cd9609
- (unsigned)hash;	// 0x30cd9719
- (BOOL)isEqual:(id)equal;	// 0x30cd9901
// declared property getter: - (float)leftPhase;	// 0x30cd95e9
// declared property getter: - (BOOL)opaque;	// 0x30cd95a5
// declared property getter: - (float)rightPhase;	// 0x30cd95f9
// declared property getter: - (id)sectionBorderColor;	// 0x30cd9619
// declared property getter: - (int)sectionLocation;	// 0x30cd94f9
// declared property getter: - (BOOL)selected;	// 0x30cd950d
// declared property getter: - (id)selectionColor;	// 0x30ebb2f1
// declared property getter: - (int)selectionStyle;	// 0x30ebb301
// declared property getter: - (id)separatorColor;	// 0x30d7fc41
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x30cd8749
// declared property setter: - (void)setBottomShadowColor:(id)color;	// 0x30cd8819
// declared property setter: - (void)setFillColor:(id)color;	// 0x30cd89a1
// declared property setter: - (void)setLeftPhase:(float)phase;	// 0x30cd89d1
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x30cd88ed
// declared property setter: - (void)setRightPhase:(float)phase;	// 0x30cd89e1
// declared property setter: - (void)setSectionBorderColor:(id)color;	// 0x30cd8971
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x30cd89f1
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x30cd864d
// declared property setter: - (void)setSelectionColor:(id)color;	// 0x30cd89c1
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x30cd8a01
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x30cd8981
// declared property setter: - (void)setSize:(CGSize)size;	// 0x30cd865d
// declared property setter: - (void)setTopShadowColor:(id)color;	// 0x30cd8991
// declared property getter: - (CGSize)size;	// 0x30cd94dd
// declared property getter: - (id)topShadowColor;	// 0x30cd96f9
@end
