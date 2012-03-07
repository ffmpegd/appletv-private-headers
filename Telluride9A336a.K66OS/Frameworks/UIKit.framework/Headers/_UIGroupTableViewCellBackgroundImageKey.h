/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIGroupTableViewCellBackgroundImageKey : NSObject <NSCopying> {
@private
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
@property(retain, nonatomic) UIColor *backgroundColor;	// G=0x3518e0d1; S=0x3518dfd1; @synthesize=_backgroundColor
@property(retain, nonatomic) UIColor *bottomShadowColor;	// G=0x3518e179; S=0x3518e0ad; @synthesize=_bottomShadowColor
@property(retain, nonatomic) UIColor *fillColor;	// G=0x3518ed3d; S=0x3518e269; @synthesize=_fillColor
@property(assign, nonatomic) float leftPhase;	// G=0x3518ed1d; S=0x3518e2c1; @synthesize=_leftPhase
@property(assign, nonatomic) BOOL opaque;	// G=0x3518ecdd; S=0x3518e189; @synthesize=_opaque
@property(assign, nonatomic) float rightPhase;	// G=0x3518ed2d; S=0x3518e2d1; @synthesize=_rightPhase
@property(retain, nonatomic) UIColor *sectionBorderColor;	// G=0x3518ed4d; S=0x3518e1fd; @synthesize=_sectionBorderColor
@property(assign, nonatomic) int sectionLocation;	// G=0x3518ec3d; S=0x3518e2e1; @synthesize=_sectionLocation
@property(assign, nonatomic) BOOL selected;	// G=0x3518ec4d; S=0x3518ded1; @synthesize=_selected
@property(retain, nonatomic) UIColor *selectionColor;	// G=0x35379685; S=0x3518e29d; @synthesize=_selectionColor
@property(assign, nonatomic) int selectionStyle;	// G=0x35379695; S=0x3518e2f1; @synthesize=_selectionStyle
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x3523c869; S=0x3518e221; @synthesize=_separatorColor
@property(assign, nonatomic) CGSize size;	// G=0x3518ec21; S=0x3518dee1; @synthesize=_size
@property(retain, nonatomic) UIColor *topShadowColor;	// G=0x3518ee2d; S=0x3518e245; @synthesize=_topShadowColor
// declared property getter: - (id)backgroundColor;	// 0x3518e0d1
// declared property getter: - (id)bottomShadowColor;	// 0x3518e179
- (id)copyWithZone:(NSZone *)zone;	// 0x3518ee3d
- (void)dealloc;	// 0x3518f271
- (id)description;	// 0x3537946d
// declared property getter: - (id)fillColor;	// 0x3518ed3d
- (unsigned)hash;	// 0x3518ee4d
- (BOOL)isEqual:(id)equal;	// 0x3518f031
// declared property getter: - (float)leftPhase;	// 0x3518ed1d
// declared property getter: - (BOOL)opaque;	// 0x3518ecdd
// declared property getter: - (float)rightPhase;	// 0x3518ed2d
// declared property getter: - (id)sectionBorderColor;	// 0x3518ed4d
// declared property getter: - (int)sectionLocation;	// 0x3518ec3d
// declared property getter: - (BOOL)selected;	// 0x3518ec4d
// declared property getter: - (id)selectionColor;	// 0x35379685
// declared property getter: - (int)selectionStyle;	// 0x35379695
// declared property getter: - (id)separatorColor;	// 0x3523c869
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x3518dfd1
// declared property setter: - (void)setBottomShadowColor:(id)color;	// 0x3518e0ad
// declared property setter: - (void)setFillColor:(id)color;	// 0x3518e269
// declared property setter: - (void)setLeftPhase:(float)phase;	// 0x3518e2c1
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x3518e189
// declared property setter: - (void)setRightPhase:(float)phase;	// 0x3518e2d1
// declared property setter: - (void)setSectionBorderColor:(id)color;	// 0x3518e1fd
// declared property setter: - (void)setSectionLocation:(int)location;	// 0x3518e2e1
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x3518ded1
// declared property setter: - (void)setSelectionColor:(id)color;	// 0x3518e29d
// declared property setter: - (void)setSelectionStyle:(int)style;	// 0x3518e2f1
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x3518e221
// declared property setter: - (void)setSize:(CGSize)size;	// 0x3518dee1
// declared property setter: - (void)setTopShadowColor:(id)color;	// 0x3518e245
// declared property getter: - (CGSize)size;	// 0x3518ec21
// declared property getter: - (id)topShadowColor;	// 0x3518ee2d
@end

