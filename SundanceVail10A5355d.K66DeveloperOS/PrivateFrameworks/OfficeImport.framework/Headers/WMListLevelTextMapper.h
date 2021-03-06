/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject {
	NSMutableArray *m_tokens;	// 4 = 0x4
	int m_format;	// 8 = 0x8
	unsigned m_initNumber;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x31d59bfd
- (id)initWithText:(id)text format:(int)format;	// 0x31c87c19
- (id)initWithText:(id)text format:(int)format initNumber:(int)number;	// 0x31c87c3d
- (void)dealloc;	// 0x31c8820d
- (id)listLevelTextforOutline:(id)outline;	// 0x31c87f09
- (id)token:(unsigned)token;	// 0x31d59c3d
- (unsigned)tokenCount;	// 0x31d59c1d
@end

