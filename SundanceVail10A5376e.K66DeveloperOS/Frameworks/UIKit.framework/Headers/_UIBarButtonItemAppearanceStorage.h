/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIBarItemAppearanceStorage.h"

@class NSValue, _UIBarBackButtonItemAppearanceStorage, UIColor, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {
	NSMutableDictionary *backgroundImages;	// 8 = 0x8
	NSMutableDictionary *miniBackgroundImages;	// 12 = 0xc
	UIColor *tintColor;	// 16 = 0x10
	NSValue *titlePositionOffset;	// 20 = 0x14
	NSValue *miniTitlePositionOffset;	// 24 = 0x18
	NSNumber *backgroundVerticalAdjustment;	// 28 = 0x1c
	NSNumber *miniBackgroundVerticalAdjustment;	// 32 = 0x20
	_UIBarBackButtonItemAppearanceStorage *backButtonAppearance;	// 36 = 0x24
}
@property(retain, nonatomic) NSNumber *backButtonBackgroundVerticalAdjustment;	// G=0x30389d25; S=0x304a6779; 
@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;	// G=0x30389d55; S=0x304a6681; 
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment;	// G=0x302de641; S=0x304a6891; @synthesize
@property(retain, nonatomic) NSNumber *miniBackButtonBackgroundVerticalAdjustment;	// G=0x303d5e65; S=0x304a67f5; 
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;	// G=0x303d5e35; S=0x304a66fd; 
@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment;	// G=0x302ebb29; S=0x304a68a1; @synthesize
@property(retain, nonatomic) NSValue *miniTitlePositionOffset;	// G=0x302ebb19; S=0x304a6881; @synthesize
@property(retain, nonatomic) UIColor *tintColor;	// G=0x302dd92d; S=0x302ebb09; @synthesize
@property(retain, nonatomic) NSValue *titlePositionOffset;	// G=0x302dd9e9; S=0x304a6871; @synthesize
- (id)anyBackButtonBackgroundImage;	// 0x304a6661
- (id)anyBackgroundImage;	// 0x304a6549
- (id)backButtonBackgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x302eb2d1
// declared property getter: - (id)backButtonBackgroundVerticalAdjustment;	// 0x30389d25
// declared property getter: - (id)backButtonTitlePositionOffset;	// 0x30389d55
- (id)backgroundImageForState:(unsigned)state style:(int)style isMini:(BOOL)mini;	// 0x302dd93d
// declared property getter: - (id)backgroundVerticalAdjustment;	// 0x302de641
- (void)dealloc;	// 0x302de651
// declared property getter: - (id)miniBackButtonBackgroundVerticalAdjustment;	// 0x303d5e65
// declared property getter: - (id)miniBackButtonTitlePositionOffset;	// 0x303d5e35
// declared property getter: - (id)miniBackgroundVerticalAdjustment;	// 0x302ebb29
// declared property getter: - (id)miniTitlePositionOffset;	// 0x302ebb19
- (void)setBackButtonBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x302eb2f1
// declared property setter: - (void)setBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x304a6779
// declared property setter: - (void)setBackButtonTitlePositionOffset:(id)offset;	// 0x304a6681
- (void)setBackgroundImage:(id)image forState:(unsigned)state style:(int)style isMini:(BOOL)mini;	// 0x302ddcc5
// declared property setter: - (void)setBackgroundVerticalAdjustment:(id)adjustment;	// 0x304a6891
// declared property setter: - (void)setMiniBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x304a67f5
// declared property setter: - (void)setMiniBackButtonTitlePositionOffset:(id)offset;	// 0x304a66fd
// declared property setter: - (void)setMiniBackgroundVerticalAdjustment:(id)adjustment;	// 0x304a68a1
// declared property setter: - (void)setMiniTitlePositionOffset:(id)offset;	// 0x304a6881
// declared property setter: - (void)setTintColor:(id)color;	// 0x302ebb09
// declared property setter: - (void)setTitlePositionOffset:(id)offset;	// 0x304a6871
// declared property getter: - (id)tintColor;	// 0x302dd92d
// declared property getter: - (id)titlePositionOffset;	// 0x302dd9e9
@end
