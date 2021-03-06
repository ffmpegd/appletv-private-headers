/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDSheet.h"

@class CHDChart;

@interface EDChartSheet : EDSheet {
	CHDChart *mMainChart;	// 60 = 0x3c
	bool mIsBoundsSet;	// 64 = 0x40
	CGRect mBounds;	// 68 = 0x44
}
@property(assign) CGRect bounds;	// G=0x36b45ecd; S=0x36b3038d; converted property
@property(retain) id mainChart;	// G=0x36b46171; S=0x36b41b11; converted property
- (id).cxx_construct;	// 0x36b2668d
- (void)addDrawable:(id)drawable;	// 0x36b49601
- (bool)areBoundsSet;	// 0x36b45eb9
// converted property getter: - (CGRect)bounds;	// 0x36b45ecd
// converted property getter: - (id)mainChart;	// 0x36b46171
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x36b3038d
// converted property setter: - (void)setMainChart:(id)chart;	// 0x36b41b11
- (void)teardown;	// 0x36b2fb89
@end

