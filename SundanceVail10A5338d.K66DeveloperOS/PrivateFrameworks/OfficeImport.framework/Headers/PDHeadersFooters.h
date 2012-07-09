/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PDHeadersFooters : NSObject {
	BOOL mHasDateTime;	// 4 = 0x4
	BOOL mHasNowDateTime;	// 5 = 0x5
	BOOL mHasUserDateTime;	// 6 = 0x6
	BOOL mHasSlideNumber;	// 7 = 0x7
	BOOL mHasHeader;	// 8 = 0x8
	BOOL mHasFooter;	// 9 = 0x9
	int mDateTimeFormat;	// 12 = 0xc
	NSString *mUserDateTime;	// 16 = 0x10
	NSString *mHeader;	// 20 = 0x14
	NSString *mFooter;	// 24 = 0x18
}
@property(retain) id footer;	// G=0x33bd9bd9; S=0x33bd9be9; converted property
@property(assign) BOOL hasDateTime;	// G=0x33bd9a81; S=0x33bd9a91; converted property
@property(assign) BOOL hasFooter;	// G=0x33bd9b21; S=0x33bd9b31; converted property
@property(assign) BOOL hasHeader;	// G=0x33bd9b01; S=0x33bd9b11; converted property
@property(assign) BOOL hasNowDateTime;	// G=0x33bd9aa1; S=0x33bd9ab1; converted property
@property(assign) BOOL hasSlideNumber;	// G=0x33bd9ae1; S=0x33bd9af1; converted property
@property(assign) BOOL hasUserDateTime;	// G=0x33bd9ac1; S=0x33bd9ad1; converted property
@property(retain) id header;	// G=0x33bd9b8d; S=0x33bd9b9d; converted property
@property(retain) id userDateTime;	// G=0x33bd9b41; S=0x33bd9b51; converted property
- (void)dealloc;	// 0x33bd9a09
// converted property getter: - (id)footer;	// 0x33bd9bd9
// converted property getter: - (BOOL)hasDateTime;	// 0x33bd9a81
// converted property getter: - (BOOL)hasFooter;	// 0x33bd9b21
// converted property getter: - (BOOL)hasHeader;	// 0x33bd9b01
// converted property getter: - (BOOL)hasNowDateTime;	// 0x33bd9aa1
// converted property getter: - (BOOL)hasSlideNumber;	// 0x33bd9ae1
// converted property getter: - (BOOL)hasUserDateTime;	// 0x33bd9ac1
// converted property getter: - (id)header;	// 0x33bd9b8d
// converted property setter: - (void)setFooter:(id)footer;	// 0x33bd9be9
// converted property setter: - (void)setHasDateTime:(BOOL)time;	// 0x33bd9a91
// converted property setter: - (void)setHasFooter:(BOOL)footer;	// 0x33bd9b31
// converted property setter: - (void)setHasHeader:(BOOL)header;	// 0x33bd9b11
// converted property setter: - (void)setHasNowDateTime:(BOOL)time;	// 0x33bd9ab1
// converted property setter: - (void)setHasSlideNumber:(BOOL)number;	// 0x33bd9af1
// converted property setter: - (void)setHasUserDateTime:(BOOL)time;	// 0x33bd9ad1
// converted property setter: - (void)setHeader:(id)header;	// 0x33bd9b9d
// converted property setter: - (void)setUserDateTime:(id)time;	// 0x33bd9b51
// converted property getter: - (id)userDateTime;	// 0x33bd9b41
@end
