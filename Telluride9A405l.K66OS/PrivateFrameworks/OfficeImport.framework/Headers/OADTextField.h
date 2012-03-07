/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextRun.h"

@class NSString, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADTextField : OADTextRun {
@private
	OADParagraphProperties *mParagraphProperties;	// 8 = 0x8
	NSString *mId;	// 12 = 0xc
	NSString *mText;	// 16 = 0x10
}
@property(retain) id id;	// G=0x30e8b521; S=0x30d912d1; converted property
@property(retain) id text;	// G=0x30be9b69; S=0x30ca4bbd; converted property
- (id)init;	// 0x30c65f9d
- (void)dealloc;	// 0x30c6e409
// converted property getter: - (id)id;	// 0x30e8b521
- (BOOL)isEmpty;	// 0x30d2bb49
- (id)paragraphProperties;	// 0x30d91315
- (void)removeUnnecessaryOverrides;	// 0x30c6b805
// converted property setter: - (void)setId:(id)anId;	// 0x30d912d1
// converted property setter: - (void)setText:(id)text;	// 0x30ca4bbd
// converted property getter: - (id)text;	// 0x30be9b69
@end

