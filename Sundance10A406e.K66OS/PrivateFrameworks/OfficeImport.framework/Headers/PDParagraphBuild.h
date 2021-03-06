/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDBuild.h"

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {
	NSMutableArray *mTimeNodeDataList;	// 12 = 0xc
	double mAutoAdvanceTime;	// 16 = 0x10
	BOOL mIsReversedParagraphOrder;	// 24 = 0x18
	int mBuildLevel;	// 28 = 0x1c
	int mType;	// 32 = 0x20
}
@property(assign) double autoAdvanceTime;	// G=0x350dca9d; S=0x34fe2ee1; converted property
@property(assign) int buildLevel;	// G=0x350dcac5; S=0x34fe2f05; converted property
@property(assign) BOOL isReversedParagraphOrder;	// G=0x350dcab5; S=0x34fe2f15; converted property
@property(assign) int type;	// G=0x350dcad5; S=0x34fe2f25; converted property
- (id)init;	// 0x34fe2e2d
- (id)addTimeNodeData;	// 0x350dca21
// converted property getter: - (double)autoAdvanceTime;	// 0x350dca9d
// converted property getter: - (int)buildLevel;	// 0x350dcac5
- (void)dealloc;	// 0x34fe3975
// converted property getter: - (BOOL)isReversedParagraphOrder;	// 0x350dcab5
// converted property setter: - (void)setAutoAdvanceTime:(double)time;	// 0x34fe2ee1
// converted property setter: - (void)setBuildLevel:(int)level;	// 0x34fe2f05
// converted property setter: - (void)setIsReversedParagraphOrder:(BOOL)order;	// 0x34fe2f15
// converted property setter: - (void)setType:(int)type;	// 0x34fe2f25
- (id)timeNodeDataAtIndex:(int)index;	// 0x350dca01
- (id)timeNodeDataList;	// 0x350dca8d
- (int)timeNodeDataListCount;	// 0x350dc9e1
// converted property getter: - (int)type;	// 0x350dcad5
@end

