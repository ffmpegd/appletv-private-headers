/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADTextRun;

__attribute__((visibility("hidden")))
@interface PMTextRunMapper : CMMapper {
@private
	OADTextRun *mTextRun;	// 8 = 0x8
}
- (id)initWithOadTextRun:(id)oadTextRun parent:(id)parent;	// 0x354e6b3d
- (BOOL)_isDefaultFill:(id)fill;	// 0x356bcc39
- (id)createCharacterStyleWithState:(id)state;	// 0x354e6d65
- (id)fontScheme;	// 0x354e7449
- (void)mapAt:(id)at withState:(id)state;	// 0x354e6b81
@end

