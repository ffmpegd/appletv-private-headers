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
@property(assign) bool aboveAverage;	// G=0x36bf1225; S=0x36bf1239; converted property
@property(assign) bool bottom;	// G=0x36bf1249; S=0x36bf125d; converted property
@property(retain) id differentialStyle;	// G=0x36bf1151; S=0x36bf1199; converted property
@property(assign) unsigned differentialStyleIndex;	// G=0x36bf1369; S=0x36bf1379; converted property
@property(assign) bool equalAverage;	// G=0x36bf126d; S=0x36bf1281; converted property
@property(assign) int operatorEnum;	// G=0x36bf1051; S=0x36bf1061; converted property
@property(assign) bool percent;	// G=0x36bf1291; S=0x36bf12a5; converted property
@property(assign) int priority;	// G=0x36bf1205; S=0x36bf1215; converted property
@property(assign) unsigned rank;	// G=0x36bf12b5; S=0x36bf12c5; converted property
@property(assign) int stdDev;	// G=0x36bf12d5; S=0x36bf12e5; converted property
@property(assign) bool stopIfTrue;	// G=0x36bf11e1; S=0x36bf11f5; converted property
@property(retain) id text;	// G=0x36bf12f5; S=0x36bf1305; converted property
@property(assign) int timePeriod;	// G=0x36bf1349; S=0x36bf1359; converted property
@property(assign) int type;	// G=0x36bf1031; S=0x36bf1041; converted property
+ (id)conditionalFormattingRuleWithResources:(id)resources;	// 0x36bf0ef5
- (id)initWithResources:(id)resources;	// 0x36bf0db9
// converted property getter: - (bool)aboveAverage;	// 0x36bf1225
- (void)addFormula:(id)formula worksheet:(id)worksheet;	// 0x36bf10d9
// converted property getter: - (bool)bottom;	// 0x36bf1249
- (int)compareToOtherRuleUsingPriority:(id)otherRuleUsingPriority;	// 0x36bf0fb9
- (void)dealloc;	// 0x36bf0f41
// converted property getter: - (id)differentialStyle;	// 0x36bf1151
// converted property getter: - (unsigned)differentialStyleIndex;	// 0x36bf1369
// converted property getter: - (bool)equalAverage;	// 0x36bf126d
- (id)formulaAtIndex:(unsigned)index;	// 0x36bf1091
- (unsigned)formulaCount;	// 0x36bf1071
// converted property getter: - (int)operatorEnum;	// 0x36bf1051
// converted property getter: - (bool)percent;	// 0x36bf1291
// converted property getter: - (int)priority;	// 0x36bf1205
// converted property getter: - (unsigned)rank;	// 0x36bf12b5
// converted property setter: - (void)setAboveAverage:(bool)average;	// 0x36bf1239
// converted property setter: - (void)setBottom:(bool)bottom;	// 0x36bf125d
// converted property setter: - (void)setDifferentialStyle:(id)style;	// 0x36bf1199
// converted property setter: - (void)setDifferentialStyleIndex:(unsigned)index;	// 0x36bf1379
// converted property setter: - (void)setEqualAverage:(bool)average;	// 0x36bf1281
// converted property setter: - (void)setOperatorEnum:(int)anEnum;	// 0x36bf1061
// converted property setter: - (void)setPercent:(bool)percent;	// 0x36bf12a5
// converted property setter: - (void)setPriority:(int)priority;	// 0x36bf1215
// converted property setter: - (void)setRank:(unsigned)rank;	// 0x36bf12c5
// converted property setter: - (void)setStdDev:(int)dev;	// 0x36bf12e5
// converted property setter: - (void)setStopIfTrue:(bool)aTrue;	// 0x36bf11f5
// converted property setter: - (void)setText:(id)text;	// 0x36bf1305
// converted property setter: - (void)setTimePeriod:(int)period;	// 0x36bf1359
// converted property setter: - (void)setType:(int)type;	// 0x36bf1041
// converted property getter: - (int)stdDev;	// 0x36bf12d5
// converted property getter: - (bool)stopIfTrue;	// 0x36bf11e1
// converted property getter: - (id)text;	// 0x36bf12f5
// converted property getter: - (int)timePeriod;	// 0x36bf1349
// converted property getter: - (int)type;	// 0x36bf1031
@end

