/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString, EDResources, NSMutableArray;

@interface EDConditionalFormattingRule : NSObject {
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	int mOperator;	// 12 = 0xc
	NSMutableArray *mFormulas;	// 16 = 0x10
	unsigned mDifferentialStyleIndex;	// 20 = 0x14
	bool mStopIfTrue;	// 24 = 0x18
	int mPriority;	// 28 = 0x1c
	bool mAboveAverage;	// 32 = 0x20
	bool mBottom;	// 33 = 0x21
	bool mEqualAverage;	// 34 = 0x22
	bool mPercent;	// 35 = 0x23
	unsigned mRank;	// 36 = 0x24
	int mStdDev;	// 40 = 0x28
	NSString *mText;	// 44 = 0x2c
	int mTimePeriod;	// 48 = 0x30
}
@property(assign) bool aboveAverage;	// G=0x34a28225; S=0x34a28239; converted property
@property(assign) bool bottom;	// G=0x34a28249; S=0x34a2825d; converted property
@property(retain) id differentialStyle;	// G=0x34a28151; S=0x34a28199; converted property
@property(assign) unsigned differentialStyleIndex;	// G=0x34a28369; S=0x34a28379; converted property
@property(assign) bool equalAverage;	// G=0x34a2826d; S=0x34a28281; converted property
@property(assign) int operatorEnum;	// G=0x34a28051; S=0x34a28061; converted property
@property(assign) bool percent;	// G=0x34a28291; S=0x34a282a5; converted property
@property(assign) int priority;	// G=0x34a28205; S=0x34a28215; converted property
@property(assign) unsigned rank;	// G=0x34a282b5; S=0x34a282c5; converted property
@property(assign) int stdDev;	// G=0x34a282d5; S=0x34a282e5; converted property
@property(assign) bool stopIfTrue;	// G=0x34a281e1; S=0x34a281f5; converted property
@property(retain) id text;	// G=0x34a282f5; S=0x34a28305; converted property
@property(assign) int timePeriod;	// G=0x34a28349; S=0x34a28359; converted property
@property(assign) int type;	// G=0x34a28031; S=0x34a28041; converted property
+ (id)conditionalFormattingRuleWithResources:(id)resources;	// 0x34a27ef5
- (id)initWithResources:(id)resources;	// 0x34a27db9
// converted property getter: - (bool)aboveAverage;	// 0x34a28225
- (void)addFormula:(id)formula worksheet:(id)worksheet;	// 0x34a280d9
// converted property getter: - (bool)bottom;	// 0x34a28249
- (int)compareToOtherRuleUsingPriority:(id)otherRuleUsingPriority;	// 0x34a27fb9
- (void)dealloc;	// 0x34a27f41
// converted property getter: - (id)differentialStyle;	// 0x34a28151
// converted property getter: - (unsigned)differentialStyleIndex;	// 0x34a28369
// converted property getter: - (bool)equalAverage;	// 0x34a2826d
- (id)formulaAtIndex:(unsigned)index;	// 0x34a28091
- (unsigned)formulaCount;	// 0x34a28071
// converted property getter: - (int)operatorEnum;	// 0x34a28051
// converted property getter: - (bool)percent;	// 0x34a28291
// converted property getter: - (int)priority;	// 0x34a28205
// converted property getter: - (unsigned)rank;	// 0x34a282b5
// converted property setter: - (void)setAboveAverage:(bool)average;	// 0x34a28239
// converted property setter: - (void)setBottom:(bool)bottom;	// 0x34a2825d
// converted property setter: - (void)setDifferentialStyle:(id)style;	// 0x34a28199
// converted property setter: - (void)setDifferentialStyleIndex:(unsigned)index;	// 0x34a28379
// converted property setter: - (void)setEqualAverage:(bool)average;	// 0x34a28281
// converted property setter: - (void)setOperatorEnum:(int)anEnum;	// 0x34a28061
// converted property setter: - (void)setPercent:(bool)percent;	// 0x34a282a5
// converted property setter: - (void)setPriority:(int)priority;	// 0x34a28215
// converted property setter: - (void)setRank:(unsigned)rank;	// 0x34a282c5
// converted property setter: - (void)setStdDev:(int)dev;	// 0x34a282e5
// converted property setter: - (void)setStopIfTrue:(bool)aTrue;	// 0x34a281f5
// converted property setter: - (void)setText:(id)text;	// 0x34a28305
// converted property setter: - (void)setTimePeriod:(int)period;	// 0x34a28359
// converted property setter: - (void)setType:(int)type;	// 0x34a28041
// converted property getter: - (int)stdDev;	// 0x34a282d5
// converted property getter: - (bool)stopIfTrue;	// 0x34a281e1
// converted property getter: - (id)text;	// 0x34a282f5
// converted property getter: - (int)timePeriod;	// 0x34a28349
// converted property getter: - (int)type;	// 0x34a28031
@end

