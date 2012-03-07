/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WDAAnchor : NSObject {
@private
	CGRect mBounds;	// 4 = 0x4
	int mTextWrappingMode;	// 20 = 0x14
	int mTextWrappingModeType;	// 24 = 0x18
	double mWrapDistanceLeft;	// 28 = 0x1c
	double mWrapDistanceTop;	// 36 = 0x24
	double mWrapDistanceRight;	// 44 = 0x2c
	double mWrapDistanceBottom;	// 52 = 0x34
	int mHorizontalPosition;	// 60 = 0x3c
	int mRelativeHorizontalPosition;	// 64 = 0x40
	int mVerticalPosition;	// 68 = 0x44
	int mRelativeVerticalPosition;	// 72 = 0x48
	BOOL mIsBehindText;	// 76 = 0x4c
	BOOL mAllowOverlap;	// 77 = 0x4d
	BOOL mMoveWithText;	// 78 = 0x4e
	int mZIndexTotal;	// 80 = 0x50
	int mZIndex;	// 84 = 0x54
}
@property(assign, nonatomic) BOOL allowOverlap;	// G=0x353ac981; S=0x3525f245; @synthesize=mAllowOverlap
@property(assign, getter=isBehindText) BOOL behindText;	// G=0x3525f799; S=0x3525f275; converted property
@property(assign, nonatomic) CGRect bounds;	// G=0x3526a05d; S=0x35262b91; @synthesize=mBounds
@property(assign) int horizontalPosition;	// G=0x353ac941; S=0x3525ef35; converted property
@property(assign) int relativeHorizontalPosition;	// G=0x3526ab81; S=0x3525ef95; converted property
@property(assign) int relativeVerticalPosition;	// G=0x3526ab19; S=0x3525f061; converted property
@property(assign, nonatomic) int textWrappingMode;	// G=0x3526ab29; S=0x35262b71; @synthesize=mTextWrappingMode
@property(assign, nonatomic) int textWrappingModeType;	// G=0x353ac991; S=0x35262b81; @synthesize=mTextWrappingModeType
@property(assign) int verticalPosition;	// G=0x353ac951; S=0x3525f001; converted property
@property(assign) double wrapDistanceBottom;	// G=0x353ac929; S=0x3525f1fd; converted property
@property(assign) double wrapDistanceLeft;	// G=0x353ac8e1; S=0x3525f0c9; converted property
@property(assign) double wrapDistanceRight;	// G=0x353ac911; S=0x3525f199; converted property
@property(assign) double wrapDistanceTop;	// G=0x353ac8f9; S=0x3525f12d; converted property
@property(assign) int zIndex;	// G=0x3526abb1; S=0x3525f7a9; converted property
@property(assign) int zIndexTotal;	// G=0x353ac961; S=0x353ac971; converted property
- (id)init;	// 0x3525ebbd
// declared property getter: - (BOOL)allowOverlap;	// 0x353ac981
// declared property getter: - (CGRect)bounds;	// 0x3526a05d
// converted property getter: - (int)horizontalPosition;	// 0x353ac941
// converted property getter: - (BOOL)isBehindText;	// 0x3525f799
// converted property getter: - (int)relativeHorizontalPosition;	// 0x3526ab81
// converted property getter: - (int)relativeVerticalPosition;	// 0x3526ab19
// declared property setter: - (void)setAllowOverlap:(BOOL)overlap;	// 0x3525f245
// converted property setter: - (void)setBehindText:(BOOL)text;	// 0x3525f275
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x35262b91
// converted property setter: - (void)setHorizontalPosition:(int)position;	// 0x3525ef35
// converted property setter: - (void)setRelativeHorizontalPosition:(int)position;	// 0x3525ef95
// converted property setter: - (void)setRelativeVerticalPosition:(int)position;	// 0x3525f061
// declared property setter: - (void)setTextWrappingMode:(int)mode;	// 0x35262b71
// declared property setter: - (void)setTextWrappingModeType:(int)type;	// 0x35262b81
// converted property setter: - (void)setVerticalPosition:(int)position;	// 0x3525f001
// converted property setter: - (void)setWrapDistanceBottom:(double)bottom;	// 0x3525f1fd
// converted property setter: - (void)setWrapDistanceLeft:(double)left;	// 0x3525f0c9
// converted property setter: - (void)setWrapDistanceRight:(double)right;	// 0x3525f199
// converted property setter: - (void)setWrapDistanceTop:(double)top;	// 0x3525f12d
// converted property setter: - (void)setZIndex:(int)index;	// 0x3525f7a9
// converted property setter: - (void)setZIndexTotal:(int)total;	// 0x353ac971
// declared property getter: - (int)textWrappingMode;	// 0x3526ab29
// declared property getter: - (int)textWrappingModeType;	// 0x353ac991
// converted property getter: - (int)verticalPosition;	// 0x353ac951
// converted property getter: - (double)wrapDistanceBottom;	// 0x353ac929
// converted property getter: - (double)wrapDistanceLeft;	// 0x353ac8e1
// converted property getter: - (double)wrapDistanceRight;	// 0x353ac911
// converted property getter: - (double)wrapDistanceTop;	// 0x353ac8f9
// converted property getter: - (int)zIndex;	// 0x3526abb1
// converted property getter: - (int)zIndexTotal;	// 0x353ac961
@end

