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
@property(assign) int bookmarkType;	// G=0x352774ed; S=0x352b8d9d; converted property
@property(retain) id name;	// G=0x352774fd; S=0x352b8dad; converted property
- (id)initWithParagraph:(id)paragraph name:(id)name type:(int)type;	// 0x35277099
// converted property getter: - (int)bookmarkType;	// 0x352774ed
- (void)dealloc;	// 0x351c8e25
// converted property getter: - (id)name;	// 0x352774fd
- (int)runType;	// 0x351b7b5d
// converted property setter: - (void)setBookmarkType:(int)type;	// 0x352b8d9d
// converted property setter: - (void)setName:(id)name;	// 0x352b8dad
@end

