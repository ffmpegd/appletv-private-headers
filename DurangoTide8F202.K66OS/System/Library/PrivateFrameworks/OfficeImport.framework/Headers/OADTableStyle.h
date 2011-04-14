/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableBackground, OADTablePartStyle, NSString;

__attribute__((visibility("hidden")))
@interface OADTableStyle : NSObject {
@private
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
@property(retain) id background;	// G=0x31a776f5; S=0x31a91149; converted property
@property(retain) id band1HorzStyle;	// G=0x31a77b81; S=0x31a54c61; converted property
@property(retain) id band1VertStyle;	// G=0x31ab7c15; S=0x31a54d11; converted property
@property(retain) id band2HorzStyle;	// G=0x31ab7c05; S=0x31a54cd9; converted property
@property(retain) id band2VertStyle;	// G=0x31ab7c25; S=0x31a54d49; converted property
@property(retain) id firstColumnStyle;	// G=0x31ab7c35; S=0x31a54e21; converted property
@property(retain) id firstRowStyle;	// G=0x31a77705; S=0x31a54e91; converted property
@property(retain) id id;	// G=0x31ab7bf5; S=0x31a53ee1; converted property
@property(retain) id lastColumnStyle;	// G=0x31ab7c55; S=0x31a54de9; converted property
@property(retain) id lastRowStyle;	// G=0x31ab7c45; S=0x31a54e59; converted property
@property(retain) id name;	// G=0x31ab7be5; S=0x31a53f19; converted property
@property(retain) id northEastStyle;	// G=0x31ab7c65; S=0x31a90bc1; converted property
@property(retain) id northWestStyle;	// G=0x31ab7c75; S=0x31a90bf9; converted property
@property(retain) id southEastStyle;	// G=0x31ab7c85; S=0x31a90b51; converted property
@property(retain) id southWestStyle;	// G=0x31ab7c95; S=0x31a90b89; converted property
@property(retain) id wholeTableStyle;	// G=0x31a77715; S=0x31a54c29; converted property
// converted property getter: - (id)background;	// 0x31a776f5
// converted property getter: - (id)band1HorzStyle;	// 0x31a77b81
// converted property getter: - (id)band1VertStyle;	// 0x31ab7c15
// converted property getter: - (id)band2HorzStyle;	// 0x31ab7c05
// converted property getter: - (id)band2VertStyle;	// 0x31ab7c25
- (void)dealloc;	// 0x31a55ad5
// converted property getter: - (id)firstColumnStyle;	// 0x31ab7c35
// converted property getter: - (id)firstRowStyle;	// 0x31a77705
// converted property getter: - (id)id;	// 0x31ab7bf5
// converted property getter: - (id)lastColumnStyle;	// 0x31ab7c55
// converted property getter: - (id)lastRowStyle;	// 0x31ab7c45
// converted property getter: - (id)name;	// 0x31ab7be5
// converted property getter: - (id)northEastStyle;	// 0x31ab7c65
// converted property getter: - (id)northWestStyle;	// 0x31ab7c75
- (id)partStyle:(int)style;	// 0x31ab7e9d
// converted property setter: - (void)setBackground:(id)background;	// 0x31a91149
// converted property setter: - (void)setBand1HorzStyle:(id)style;	// 0x31a54c61
// converted property setter: - (void)setBand1VertStyle:(id)style;	// 0x31a54d11
// converted property setter: - (void)setBand2HorzStyle:(id)style;	// 0x31a54cd9
// converted property setter: - (void)setBand2VertStyle:(id)style;	// 0x31a54d49
// converted property setter: - (void)setFirstColumnStyle:(id)style;	// 0x31a54e21
// converted property setter: - (void)setFirstRowStyle:(id)style;	// 0x31a54e91
// converted property setter: - (void)setId:(id)anId;	// 0x31a53ee1
// converted property setter: - (void)setLastColumnStyle:(id)style;	// 0x31a54de9
// converted property setter: - (void)setLastRowStyle:(id)style;	// 0x31a54e59
// converted property setter: - (void)setName:(id)name;	// 0x31a53f19
// converted property setter: - (void)setNorthEastStyle:(id)style;	// 0x31a90bc1
// converted property setter: - (void)setNorthWestStyle:(id)style;	// 0x31a90bf9
// converted property setter: - (void)setSouthEastStyle:(id)style;	// 0x31a90b51
// converted property setter: - (void)setSouthWestStyle:(id)style;	// 0x31a90b89
// converted property setter: - (void)setWholeTableStyle:(id)style;	// 0x31a54c29
// converted property getter: - (id)southEastStyle;	// 0x31ab7c85
// converted property getter: - (id)southWestStyle;	// 0x31ab7c95
// converted property getter: - (id)wholeTableStyle;	// 0x31a77715
@end
