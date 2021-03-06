/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIBarItemAppearanceStorage.h"

@class NSValue, _UIBarBackButtonItemAppearanceStorage, NSMutableDictionary, NSNumber, UIColor;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {
@private
	NSMutableDictionary *backgroundImages;	// 8 = 0x8
	NSMutableDictionary *miniBackgroundImages;	// 12 = 0xc
	UIColor *tintColor;	// 16 = 0x10
	NSValue *titlePositionOffset;	// 20 = 0x14
	NSValue *miniTitlePositionOffset;	// 24 = 0x18
	NSNumber *backgroundVerticalAdjustment;	// 28 = 0x1c
	NSNumber *miniBackgroundVerticalAdjustment;	// 32 = 0x20
	_UIBarBackButtonItemAppearanceStorage *backButtonAppearance;	// 36 = 0x24
}
@property(retain, nonatomic) NSNumber *backButtonBackgroundVerticalAdjustment;	// G=0x33b18d2d; S=0x33bfd4e1; 
@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;	// G=0x33b18ccd; S=0x33bfd409; 
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment;	// G=0x33a44f71; S=0x33bfd601; @synthesize
@property(retain, nonatomic) NSNumber *miniBackButtonBackgroundVerticalAdjustment;	// G=0x33b18d5d; S=0x33bfd54d; 
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;	// G=0x33b18cfd; S=0x33bfd475; 
@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment;	// G=0x33a4d745; S=0x33bfd625; @synthesize
@property(retain, nonatomic) NSValue *miniTitlePositionOffset;	// G=0x33a4d735; S=0x33bfd5dd; @synthesize
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33a44bfd; S=0x33a4d711; @synthesize
@property(retain, nonatomic) NSValue *titlePositionOffset;	// G=0x33a44f61; S=0x33bfd5b9; @synthesize
- (id)anyBackButtonBackgroundImage;	// 0x33bfd3e9
- (id)anyBackgroundImage;	// 0x33bfd33d
- (id)backButtonBackgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x33a4c9ad
// declared property getter: - (id)backButtonBackgroundVerticalAdjustment;	// 0x33b18d2d
// declared property getter: - (id)backButtonTitlePositionOffset;	// 0x33b18ccd
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x33a44709
// declared property getter: - (id)backgroundVerticalAdjustment;	// 0x33a44f71
- (void)dealloc;	// 0x33a4da0d
// declared property getter: - (id)miniBackButtonBackgroundVerticalAdjustment;	// 0x33b18d5d
// declared property getter: - (id)miniBackButtonTitlePositionOffset;	// 0x33b18cfd
// declared property getter: - (id)miniBackgroundVerticalAdjustment;	// 0x33a4d745
// declared property getter: - (id)miniTitlePositionOffset;	// 0x33a4d735
- (void)setBackButtonBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x33a4c9cd
// declared property setter: - (void)setBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x33bfd4e1
// declared property setter: - (void)setBackButtonTitlePositionOffset:(id)offset;	// 0x33bfd409
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x33a44765
// declared property setter: - (void)setBackgroundVerticalAdjustment:(id)adjustment;	// 0x33bfd601
// declared property setter: - (void)setMiniBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x33bfd54d
// declared property setter: - (void)setMiniBackButtonTitlePositionOffset:(id)offset;	// 0x33bfd475
// declared property setter: - (void)setMiniBackgroundVerticalAdjustment:(id)adjustment;	// 0x33bfd625
// declared property setter: - (void)setMiniTitlePositionOffset:(id)offset;	// 0x33bfd5dd
// declared property setter: - (void)setTintColor:(id)color;	// 0x33a4d711
// declared property setter: - (void)setTitlePositionOffset:(id)offset;	// 0x33bfd5b9
// declared property getter: - (id)tintColor;	// 0x33a44bfd
// declared property getter: - (id)titlePositionOffset;	// 0x33a44f61
@end

