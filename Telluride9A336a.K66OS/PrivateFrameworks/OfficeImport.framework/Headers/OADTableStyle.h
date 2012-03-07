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
@property(retain) id background;	// G=0x34d58bbd; S=0x34d6cdc5; converted property
@property(retain) id band1HorzStyle;	// G=0x34d5a2a9; S=0x34d2f339; converted property
@property(retain) id band1VertStyle;	// G=0x34e25275; S=0x34d2f409; converted property
@property(retain) id band2HorzStyle;	// G=0x34e25265; S=0x34d2f3c5; converted property
@property(retain) id band2VertStyle;	// G=0x34e25285; S=0x34d2f44d; converted property
@property(retain) id firstColumnStyle;	// G=0x34e25295; S=0x34d2f541; converted property
@property(retain) id firstRowStyle;	// G=0x34d5908d; S=0x34d2f5c9; converted property
@property(retain) id id;	// G=0x34e25255; S=0x34d2e459; converted property
@property(retain) id lastColumnStyle;	// G=0x34e252b5; S=0x34d2f4fd; converted property
@property(retain) id lastRowStyle;	// G=0x34e252a5; S=0x34d2f585; converted property
@property(retain) id name;	// G=0x34e25245; S=0x34d2e49d; converted property
@property(retain) id northEastStyle;	// G=0x34e252c5; S=0x34d6ce8d; converted property
@property(retain) id northWestStyle;	// G=0x34e252d5; S=0x34d846c9; converted property
@property(retain) id southEastStyle;	// G=0x34e252e5; S=0x34d6ce05; converted property
@property(retain) id southWestStyle;	// G=0x34e252f5; S=0x34d6ce49; converted property
@property(retain) id wholeTableStyle;	// G=0x34d59a4d; S=0x34d2f2f5; converted property
// converted property getter: - (id)background;	// 0x34d58bbd
// converted property getter: - (id)band1HorzStyle;	// 0x34d5a2a9
// converted property getter: - (id)band1VertStyle;	// 0x34e25275
// converted property getter: - (id)band2HorzStyle;	// 0x34e25265
// converted property getter: - (id)band2VertStyle;	// 0x34e25285
- (void)dealloc;	// 0x34d303c9
// converted property getter: - (id)firstColumnStyle;	// 0x34e25295
// converted property getter: - (id)firstRowStyle;	// 0x34d5908d
// converted property getter: - (id)id;	// 0x34e25255
// converted property getter: - (id)lastColumnStyle;	// 0x34e252b5
// converted property getter: - (id)lastRowStyle;	// 0x34e252a5
// converted property getter: - (id)name;	// 0x34e25245
// converted property getter: - (id)northEastStyle;	// 0x34e252c5
// converted property getter: - (id)northWestStyle;	// 0x34e252d5
- (id)partStyle:(int)style;	// 0x34e26335
// converted property setter: - (void)setBackground:(id)background;	// 0x34d6cdc5
// converted property setter: - (void)setBand1HorzStyle:(id)style;	// 0x34d2f339
// converted property setter: - (void)setBand1VertStyle:(id)style;	// 0x34d2f409
// converted property setter: - (void)setBand2HorzStyle:(id)style;	// 0x34d2f3c5
// converted property setter: - (void)setBand2VertStyle:(id)style;	// 0x34d2f44d
// converted property setter: - (void)setFirstColumnStyle:(id)style;	// 0x34d2f541
// converted property setter: - (void)setFirstRowStyle:(id)style;	// 0x34d2f5c9
// converted property setter: - (void)setId:(id)anId;	// 0x34d2e459
// converted property setter: - (void)setLastColumnStyle:(id)style;	// 0x34d2f4fd
// converted property setter: - (void)setLastRowStyle:(id)style;	// 0x34d2f585
// converted property setter: - (void)setName:(id)name;	// 0x34d2e49d
// converted property setter: - (void)setNorthEastStyle:(id)style;	// 0x34d6ce8d
// converted property setter: - (void)setNorthWestStyle:(id)style;	// 0x34d846c9
// converted property setter: - (void)setSouthEastStyle:(id)style;	// 0x34d6ce05
// converted property setter: - (void)setSouthWestStyle:(id)style;	// 0x34d6ce49
// converted property setter: - (void)setWholeTableStyle:(id)style;	// 0x34d2f2f5
// converted property getter: - (id)southEastStyle;	// 0x34e252e5
// converted property getter: - (id)southWestStyle;	// 0x34e252f5
// converted property getter: - (id)wholeTableStyle;	// 0x34d59a4d
@end

