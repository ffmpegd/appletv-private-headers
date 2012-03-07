/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface PDHeadersFooters : NSObject {
@private
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
@property(retain) id footer;	// G=0x3533f46d; S=0x3533f4fd; converted property
@property(assign) BOOL hasDateTime;	// G=0x3533f38d; S=0x3533f39d; converted property
@property(assign) BOOL hasFooter;	// G=0x3533f42d; S=0x3533f43d; converted property
@property(assign) BOOL hasHeader;	// G=0x3533f40d; S=0x3533f41d; converted property
@property(assign) BOOL hasNowDateTime;	// G=0x3533f3ad; S=0x3533f3bd; converted property
@property(assign) BOOL hasSlideNumber;	// G=0x3533f3ed; S=0x3533f3fd; converted property
@property(assign) BOOL hasUserDateTime;	// G=0x3533f3cd; S=0x3533f3dd; converted property
@property(retain) id header;	// G=0x3533f45d; S=0x3533f4bd; converted property
@property(retain) id userDateTime;	// G=0x3533f44d; S=0x3533f47d; converted property
- (void)dealloc;	// 0x3533f53d
// converted property getter: - (id)footer;	// 0x3533f46d
// converted property getter: - (BOOL)hasDateTime;	// 0x3533f38d
// converted property getter: - (BOOL)hasFooter;	// 0x3533f42d
// converted property getter: - (BOOL)hasHeader;	// 0x3533f40d
// converted property getter: - (BOOL)hasNowDateTime;	// 0x3533f3ad
// converted property getter: - (BOOL)hasSlideNumber;	// 0x3533f3ed
// converted property getter: - (BOOL)hasUserDateTime;	// 0x3533f3cd
// converted property getter: - (id)header;	// 0x3533f45d
// converted property setter: - (void)setFooter:(id)footer;	// 0x3533f4fd
// converted property setter: - (void)setHasDateTime:(BOOL)time;	// 0x3533f39d
// converted property setter: - (void)setHasFooter:(BOOL)footer;	// 0x3533f43d
// converted property setter: - (void)setHasHeader:(BOOL)header;	// 0x3533f41d
// converted property setter: - (void)setHasNowDateTime:(BOOL)time;	// 0x3533f3bd
// converted property setter: - (void)setHasSlideNumber:(BOOL)number;	// 0x3533f3fd
// converted property setter: - (void)setHasUserDateTime:(BOOL)time;	// 0x3533f3dd
// converted property setter: - (void)setHeader:(id)header;	// 0x3533f4bd
// converted property setter: - (void)setUserDateTime:(id)time;	// 0x3533f47d
// converted property getter: - (id)userDateTime;	// 0x3533f44d
@end

