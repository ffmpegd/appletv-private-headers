/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class OADTablePartStyle, OADTableBackground, NSString;

@interface OADTableStyle : NSObject {
	NSString *mName;	// 4 = 0x4
	NSString *mId;	// 8 = 0x8
	OADTableBackground *mBackground;	// 12 = 0xc
	OADTablePartStyle *mWholeTableStyle;	// 16 = 0x10
	OADTablePartStyle *mBand1HorzStyle;	// 20 = 0x14
	OADTablePartStyle *mBand2HorzStyle;	// 24 = 0x18
	OADTablePartStyle *mBand1VertStyle;	// 28 = 0x1c
	OADTablePartStyle *mBand2VertStyle;	// 32 = 0x20
	OADTablePartStyle *mFirstRowStyle;	// 36 = 0x24
	OADTablePartStyle *mFirstColumnStyle;	// 40 = 0x28
	OADTablePartStyle *mLastRowStyle;	// 44 = 0x2c
	OADTablePartStyle *mLastColumnStyle;	// 48 = 0x30
	OADTablePartStyle *mNorthEastStyle;	// 52 = 0x34
	OADTablePartStyle *mNorthWestStyle;	// 56 = 0x38
	OADTablePartStyle *mSouthEastStyle;	// 60 = 0x3c
	OADTablePartStyle *mSouthWestStyle;	// 64 = 0x40
}
@property(retain) id background;	// G=0x318612b9; S=0x3188351d; converted property
@property(retain) id band1HorzStyle;	// G=0x31862831; S=0x31836fe1; converted property
@property(retain) id band1VertStyle;	// G=0x318f5235; S=0x31837061; converted property
@property(retain) id band2HorzStyle;	// G=0x318f5225; S=0x31837021; converted property
@property(retain) id band2VertStyle;	// G=0x318f5245; S=0x318370a1; converted property
@property(retain) id firstColumnStyle;	// G=0x318f5255; S=0x31837195; converted property
@property(retain) id firstRowStyle;	// G=0x318617a5; S=0x31837215; converted property
@property(retain) id id;	// G=0x31860f05; S=0x31836441; converted property
@property(retain) id lastColumnStyle;	// G=0x318f5275; S=0x31837155; converted property
@property(retain) id lastRowStyle;	// G=0x318f5265; S=0x318371d5; converted property
@property(retain) id name;	// G=0x318f5129; S=0x31836481; converted property
@property(retain) id northEastStyle;	// G=0x318f5285; S=0x31882f41; converted property
@property(retain) id northWestStyle;	// G=0x318f5295; S=0x31882f81; converted property
@property(retain) id southEastStyle;	// G=0x318f52a5; S=0x31882ec1; converted property
@property(retain) id southWestStyle;	// G=0x318f52b5; S=0x31882f01; converted property
@property(retain) id wholeTableStyle;	// G=0x318620a9; S=0x31836fa1; converted property
// converted property getter: - (id)background;	// 0x318612b9
// converted property getter: - (id)band1HorzStyle;	// 0x31862831
// converted property getter: - (id)band1VertStyle;	// 0x318f5235
// converted property getter: - (id)band2HorzStyle;	// 0x318f5225
// converted property getter: - (id)band2VertStyle;	// 0x318f5245
- (void)dealloc;	// 0x31838059
// converted property getter: - (id)firstColumnStyle;	// 0x318f5255
// converted property getter: - (id)firstRowStyle;	// 0x318617a5
// converted property getter: - (id)id;	// 0x31860f05
// converted property getter: - (id)lastColumnStyle;	// 0x318f5275
// converted property getter: - (id)lastRowStyle;	// 0x318f5265
// converted property getter: - (id)name;	// 0x318f5129
// converted property getter: - (id)northEastStyle;	// 0x318f5285
// converted property getter: - (id)northWestStyle;	// 0x318f5295
- (id)partStyle:(int)style;	// 0x318f5139
// converted property setter: - (void)setBackground:(id)background;	// 0x3188351d
// converted property setter: - (void)setBand1HorzStyle:(id)style;	// 0x31836fe1
// converted property setter: - (void)setBand1VertStyle:(id)style;	// 0x31837061
// converted property setter: - (void)setBand2HorzStyle:(id)style;	// 0x31837021
// converted property setter: - (void)setBand2VertStyle:(id)style;	// 0x318370a1
// converted property setter: - (void)setFirstColumnStyle:(id)style;	// 0x31837195
// converted property setter: - (void)setFirstRowStyle:(id)style;	// 0x31837215
// converted property setter: - (void)setId:(id)anId;	// 0x31836441
// converted property setter: - (void)setLastColumnStyle:(id)style;	// 0x31837155
// converted property setter: - (void)setLastRowStyle:(id)style;	// 0x318371d5
// converted property setter: - (void)setName:(id)name;	// 0x31836481
// converted property setter: - (void)setNorthEastStyle:(id)style;	// 0x31882f41
// converted property setter: - (void)setNorthWestStyle:(id)style;	// 0x31882f81
// converted property setter: - (void)setSouthEastStyle:(id)style;	// 0x31882ec1
// converted property setter: - (void)setSouthWestStyle:(id)style;	// 0x31882f01
// converted property setter: - (void)setWholeTableStyle:(id)style;	// 0x31836fa1
// converted property getter: - (id)southEastStyle;	// 0x318f52a5
// converted property getter: - (id)southWestStyle;	// 0x318f52b5
// converted property getter: - (id)wholeTableStyle;	// 0x318620a9
@end

