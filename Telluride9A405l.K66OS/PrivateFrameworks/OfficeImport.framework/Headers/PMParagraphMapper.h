/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADParagraph;

__attribute__((visibility("hidden")))
@interface PMParagraphMapper : CMMapper {
@private
	OADParagraph *mParagraph;	// 8 = 0x8
}
- (id)initWithOadParagraph:(id)oadParagraph parent:(id)parent;	// 0x30be663d
- (void)addEndCharacterStyleToStyle:(id)style;	// 0x30be72cd
- (id)createParagraphStyleWithState:(id)state;	// 0x30be699d
- (int)firstTextRunFontSize;	// 0x30c6d039
- (id)fontScheme;	// 0x30be7495
- (void)mapAt:(id)at withState:(id)state;	// 0x30be6681
@end

