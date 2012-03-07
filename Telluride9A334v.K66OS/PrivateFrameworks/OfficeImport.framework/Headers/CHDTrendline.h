/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDTrendlineLabel, OADGraphicProperties, EDString;

__attribute__((visibility("hidden")))
@interface CHDTrendline : NSObject {
@private
	bool mDisplayEquation;	// 4 = 0x4
	bool mDisplayRSquaredValue;	// 5 = 0x5
	double mBackward;	// 8 = 0x8
	double mForward;	// 16 = 0x10
	double mInterceptYAxis;	// 24 = 0x18
	int mPolynomialOrder;	// 32 = 0x20
	int mMovingAveragePeriod;	// 36 = 0x24
	int mType;	// 40 = 0x28
	OADGraphicProperties *mGraphicProperties;	// 44 = 0x2c
	CHDTrendlineLabel *mLabel;	// 48 = 0x30
	EDString *mName;	// 52 = 0x34
}
@property(assign) double backward;	// G=0x357474dd; S=0x356ce97d; converted property
@property(assign, getter=isDisplayEquation) bool displayEquation;	// G=0x357474bd; S=0x356ce95d; converted property
@property(assign, getter=isDisplayRSquaredValue) bool displayRSquaredValue;	// G=0x357474cd; S=0x356ce96d; converted property
@property(assign) double forward;	// G=0x357474f5; S=0x356ce991; converted property
@property(retain) id graphicProperties;	// G=0x35747575; S=0x356cea65; converted property
@property(assign) double interceptYAxis;	// G=0x3574750d; S=0x356ce9a5; converted property
@property(retain) id label;	// G=0x35747565; S=0x356ce915; converted property
@property(assign) int movingAveragePeriod;	// G=0x35747545; S=0x356f1ffd; converted property
@property(retain) id name;	// G=0x35747585; S=0x357476f5; converted property
@property(assign) int polynomialOrder;	// G=0x35747525; S=0x35747535; converted property
@property(assign) int type;	// G=0x35747555; S=0x356ce639; converted property
+ (id)trendline;	// 0x35747595
- (id)init;	// 0x356ce559
// converted property getter: - (double)backward;	// 0x357474dd
- (void)dealloc;	// 0x356ced7d
- (id)defaultNameWithSeriesName:(id)seriesName;	// 0x357475dd
// converted property getter: - (double)forward;	// 0x357474f5
// converted property getter: - (id)graphicProperties;	// 0x35747575
// converted property getter: - (double)interceptYAxis;	// 0x3574750d
// converted property getter: - (bool)isDisplayEquation;	// 0x357474bd
// converted property getter: - (bool)isDisplayRSquaredValue;	// 0x357474cd
// converted property getter: - (id)label;	// 0x35747565
// converted property getter: - (int)movingAveragePeriod;	// 0x35747545
// converted property getter: - (id)name;	// 0x35747585
// converted property getter: - (int)polynomialOrder;	// 0x35747525
// converted property setter: - (void)setBackward:(double)backward;	// 0x356ce97d
// converted property setter: - (void)setDisplayEquation:(bool)equation;	// 0x356ce95d
// converted property setter: - (void)setDisplayRSquaredValue:(bool)value;	// 0x356ce96d
// converted property setter: - (void)setForward:(double)forward;	// 0x356ce991
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x356cea65
// converted property setter: - (void)setInterceptYAxis:(double)axis;	// 0x356ce9a5
// converted property setter: - (void)setLabel:(id)label;	// 0x356ce915
// converted property setter: - (void)setMovingAveragePeriod:(int)period;	// 0x356f1ffd
// converted property setter: - (void)setName:(id)name;	// 0x357476f5
// converted property setter: - (void)setPolynomialOrder:(int)order;	// 0x35747535
// converted property setter: - (void)setType:(int)type;	// 0x356ce639
// converted property getter: - (int)type;	// 0x35747555
@end

