/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDBookmark : WDRun {
@private
	NSString *mName;	// 8 = 0x8
	int mBookmarkType;	// 12 = 0xc
}
@property(assign) int bookmarkType;	// G=0x3296e4ed; S=0x329afd9d; converted property
@property(retain) id name;	// G=0x3296e4fd; S=0x329afdad; converted property
- (id)initWithParagraph:(id)paragraph name:(id)name type:(int)type;	// 0x3296e099
// converted property getter: - (int)bookmarkType;	// 0x3296e4ed
- (void)dealloc;	// 0x328bfe25
// converted property getter: - (id)name;	// 0x3296e4fd
- (int)runType;	// 0x328aeb5d
// converted property setter: - (void)setBookmarkType:(int)type;	// 0x329afd9d
// converted property setter: - (void)setName:(id)name;	// 0x329afdad
@end
