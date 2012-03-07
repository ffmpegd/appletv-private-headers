/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADStroke, OADFill, OADTableCell3DProperties;

__attribute__((visibility("hidden")))
@interface OADTableCellProperties : NSObject {
@private
	OADStroke *mLeftStroke;	// 4 = 0x4
	BOOL mIsLeftStrokeOverridden;	// 8 = 0x8
	OADStroke *mRightStroke;	// 12 = 0xc
	BOOL mIsRightStrokeOverridden;	// 16 = 0x10
	OADStroke *mTopStroke;	// 20 = 0x14
	BOOL mIsTopStrokeOverridden;	// 24 = 0x18
	OADStroke *mBottomStroke;	// 28 = 0x1c
	BOOL mIsBottomStrokeOverridden;	// 32 = 0x20
	OADStroke *mTopLeftToBottomRightStroke;	// 36 = 0x24
	BOOL mIsTopLeftToBottomRightStrokeOverridden;	// 40 = 0x28
	OADStroke *mBottomLeftToTopRightStroke;	// 44 = 0x2c
	BOOL mIsBottomLeftToTopRightStrokeOverridden;	// 48 = 0x30
	OADTableCell3DProperties *mThreeDProperties;	// 52 = 0x34
	BOOL mIsThreeDPropertiesOverridden;	// 56 = 0x38
	OADFill *mFill;	// 60 = 0x3c
	BOOL mIsFillOverridden;	// 64 = 0x40
	float mLeftMargin;	// 68 = 0x44
	BOOL mIsLeftMarginOverridden;	// 72 = 0x48
	float mRightMargin;	// 76 = 0x4c
	BOOL mIsRightMarginOverridden;	// 80 = 0x50
	float mTopMargin;	// 84 = 0x54
	BOOL mIsTopMarginOverridden;	// 88 = 0x58
	float mBottomMargin;	// 92 = 0x5c
	BOOL mIsBottomMarginOverridden;	// 96 = 0x60
	int mTextVertical;	// 100 = 0x64
	BOOL mIsTextVerticalOverridden;	// 104 = 0x68
	int mTextAnchor;	// 108 = 0x6c
	BOOL mIsTextAnchorOverridden;	// 112 = 0x70
	BOOL mTextAnchorCenter;	// 113 = 0x71
	BOOL mIsTextAnchorCenterOverridden;	// 114 = 0x72
	int mTextHorizontalOverflow;	// 116 = 0x74
	BOOL mIsTextHorizontalOverflowOverridden;	// 120 = 0x78
}
@property(retain) id bottomLeftToTopRightStroke;	// G=0x30e89045; S=0x30dbea15; converted property
@property(assign) float bottomMargin;	// G=0x30e890e5; S=0x30dbc625; converted property
@property(retain) id bottomStroke;	// G=0x30dbeb31; S=0x30dbe975; converted property
@property(retain) id fill;	// G=0x30dbeb61; S=0x30dbea65; converted property
@property(assign) float leftMargin;	// G=0x30e89085; S=0x30dbc5c5; converted property
@property(retain) id leftStroke;	// G=0x30dbeb41; S=0x30dbe885; converted property
@property(assign) float rightMargin;	// G=0x30e890a5; S=0x30dbc5e5; converted property
@property(retain) id rightStroke;	// G=0x30dbeb51; S=0x30dbe8d5; converted property
@property(assign) int textAnchor;	// G=0x30dd0be9; S=0x30dd0bc9; converted property
@property(assign) BOOL textAnchorCenter;	// G=0x30e89145; S=0x30de568d; converted property
@property(assign) int textHorizontalOverflow;	// G=0x30e89165; S=0x30dbeb01; converted property
@property(assign) int textVertical;	// G=0x30e89105; S=0x30e89115; converted property
@property(retain) id threeDProperties;	// G=0x30e89065; S=0x30e89815; converted property
@property(retain) id topLeftToBottomRightStroke;	// G=0x30e89025; S=0x30dbe9c5; converted property
@property(assign) float topMargin;	// G=0x30e890c5; S=0x30dbc605; converted property
@property(retain) id topStroke;	// G=0x30dbeb21; S=0x30dbe925; converted property
// converted property getter: - (id)bottomLeftToTopRightStroke;	// 0x30e89045
// converted property getter: - (float)bottomMargin;	// 0x30e890e5
// converted property getter: - (id)bottomStroke;	// 0x30dbeb31
- (void)dealloc;	// 0x30dbe3c5
// converted property getter: - (id)fill;	// 0x30dbeb61
- (BOOL)isBottomLeftToTopRightStrokeOverridden;	// 0x30e89055
- (BOOL)isBottomMarginOverridden;	// 0x30e890f5
- (BOOL)isBottomStrokeOverridden;	// 0x30dbdaad
- (BOOL)isFillOverridden;	// 0x30dbdef5
- (BOOL)isLeftMarginOverridden;	// 0x30e89095
- (BOOL)isLeftStrokeOverridden;	// 0x30dbdadd
- (BOOL)isRightMarginOverridden;	// 0x30e890b5
- (BOOL)isRightStrokeOverridden;	// 0x30dbdafd
- (BOOL)isTextAnchorCenterOverridden;	// 0x30e89155
- (BOOL)isTextAnchorOverridden;	// 0x30dbdee5
- (BOOL)isTextHorizontalOverflowOverridden;	// 0x30e89175
- (BOOL)isTextVerticalOverridden;	// 0x30e89135
- (BOOL)isThreeDPropertiesOverridden;	// 0x30e89075
- (BOOL)isTopLeftToBottomRightStrokeOverridden;	// 0x30e89035
- (BOOL)isTopMarginOverridden;	// 0x30e890d5
- (BOOL)isTopStrokeOverridden;	// 0x30dbda8d
// converted property getter: - (float)leftMargin;	// 0x30e89085
// converted property getter: - (id)leftStroke;	// 0x30dbeb41
// converted property getter: - (float)rightMargin;	// 0x30e890a5
// converted property getter: - (id)rightStroke;	// 0x30dbeb51
// converted property setter: - (void)setBottomLeftToTopRightStroke:(id)topRightStroke;	// 0x30dbea15
// converted property setter: - (void)setBottomMargin:(float)margin;	// 0x30dbc625
// converted property setter: - (void)setBottomStroke:(id)stroke;	// 0x30dbe975
// converted property setter: - (void)setFill:(id)fill;	// 0x30dbea65
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x30dbc5c5
// converted property setter: - (void)setLeftStroke:(id)stroke;	// 0x30dbe885
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x30dbc5e5
// converted property setter: - (void)setRightStroke:(id)stroke;	// 0x30dbe8d5
// converted property setter: - (void)setTextAnchor:(int)anchor;	// 0x30dd0bc9
// converted property setter: - (void)setTextAnchorCenter:(BOOL)center;	// 0x30de568d
// converted property setter: - (void)setTextHorizontalOverflow:(int)overflow;	// 0x30dbeb01
// converted property setter: - (void)setTextVertical:(int)vertical;	// 0x30e89115
// converted property setter: - (void)setThreeDProperties:(id)properties;	// 0x30e89815
// converted property setter: - (void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;	// 0x30dbe9c5
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x30dbc605
// converted property setter: - (void)setTopStroke:(id)stroke;	// 0x30dbe925
- (id)stroke:(int)stroke;	// 0x30e898bd
- (id)strokeNormalToDir:(int)dir bound:(int)bound;	// 0x30e89865
// converted property getter: - (int)textAnchor;	// 0x30dd0be9
// converted property getter: - (BOOL)textAnchorCenter;	// 0x30e89145
// converted property getter: - (int)textHorizontalOverflow;	// 0x30e89165
// converted property getter: - (int)textVertical;	// 0x30e89105
// converted property getter: - (id)threeDProperties;	// 0x30e89065
// converted property getter: - (id)topLeftToBottomRightStroke;	// 0x30e89025
// converted property getter: - (float)topMargin;	// 0x30e890c5
// converted property getter: - (id)topStroke;	// 0x30dbeb21
@end
