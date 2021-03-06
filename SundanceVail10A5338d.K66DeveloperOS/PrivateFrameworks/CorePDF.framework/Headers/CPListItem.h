/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "CPDisposable.h"

@class CPList;

@interface CPListItem : NSObject <CPDisposable> {
	CPList *list;	// 4 = 0x4
	int number;	// 8 = 0x8
	CFArrayRef paragraphs;	// 12 = 0xc
}
@property(retain, nonatomic) CPList *list;	// G=0x332cbd5d; S=0x332cbd6d; @synthesize
@property(assign, nonatomic) int number;	// G=0x332cbd91; S=0x332cbda1; @synthesize
- (id)init;	// 0x332cbb65
- (void)addParagraph:(id)paragraph;	// 0x332cbca9
- (void)dealloc;	// 0x332cbc21
- (void)dispose;	// 0x332cbbbd
- (void)finalize;	// 0x332cbbe1
// declared property getter: - (id)list;	// 0x332cbd5d
// declared property getter: - (int)number;	// 0x332cbd91
- (id)paragraphAtIndex:(unsigned)index;	// 0x332cbc95
- (unsigned)paragraphCount;	// 0x332cbc81
// declared property setter: - (void)setList:(id)list;	// 0x332cbd6d
// declared property setter: - (void)setNumber:(int)number;	// 0x332cbda1
@end

